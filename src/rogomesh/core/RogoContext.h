#pragma once

#include "RogoServiceRegistry.h"

class RogoContext
{
  public:
    static RogoContext &instance()
    {
        static RogoContext context;
        return context;
    }

    RogoServiceRegistry &services()
    {
        return services_;
    }

    bool registerService(const char *name, void *service)
    {
        return services_.registerService(name, service);
    }

    template <typename T>
    bool registerService(const char *name, T *service)
    {
        return services_.registerService(name, service);
    }

    template <typename T>
    T *getService(const char *name) const
    {
        return services_.getServiceAs<T>(name);
    }

    bool unregisterService(const char *name)
    {
        return services_.unregisterService(name);
    }

  private:
    RogoServiceRegistry services_;
};
