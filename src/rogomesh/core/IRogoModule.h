#pragma once

class IRogoModule
{
  public:
    virtual ~IRogoModule() = default;

    virtual void begin() {}
    virtual void update() {}
    virtual void shutdown() {}
    virtual const char *getName() const { return ""; }
};
