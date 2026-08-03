#pragma once

#include <stdint.h>
#include <cstring>

class RogoServiceRegistry
{
  public:
    static constexpr uint8_t MAX_SERVICES = 16;

    struct ServiceEntry
    {
        const char *name;
        void *service;
        bool inUse;
    };

    RogoServiceRegistry() : entries_{} {}

    bool registerService(const char *name, void *service)
    {
        if (name == nullptr || service == nullptr)
            return false;

        for (uint8_t i = 0; i < MAX_SERVICES; ++i) {
            if (entries_[i].inUse && entries_[i].name != nullptr && strcmp(entries_[i].name, name) == 0) {
                entries_[i].service = service;
                return true;
            }
        }

        for (uint8_t i = 0; i < MAX_SERVICES; ++i) {
            if (!entries_[i].inUse) {
                entries_[i].name = name;
                entries_[i].service = service;
                entries_[i].inUse = true;
                return true;
            }
        }

        return false;
    }

    bool unregisterService(const char *name)
    {
        if (name == nullptr)
            return false;

        for (uint8_t i = 0; i < MAX_SERVICES; ++i) {
            if (entries_[i].inUse && entries_[i].name != nullptr && strcmp(entries_[i].name, name) == 0) {
                entries_[i].name = nullptr;
                entries_[i].service = nullptr;
                entries_[i].inUse = false;
                return true;
            }
        }

        return false;
    }

    void *getService(const char *name) const
    {
        if (name == nullptr)
            return nullptr;

        for (uint8_t i = 0; i < MAX_SERVICES; ++i) {
            if (entries_[i].inUse && entries_[i].name != nullptr && strcmp(entries_[i].name, name) == 0) {
                return entries_[i].service;
            }
        }

        return nullptr;
    }

    template <typename T>
    T *getServiceAs(const char *name) const
    {
        return static_cast<T *>(getService(name));
    }

  private:
    ServiceEntry entries_[MAX_SERVICES];
};
