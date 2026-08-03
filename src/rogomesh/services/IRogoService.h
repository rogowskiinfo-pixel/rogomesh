#pragma once

class IRogoService
{
  public:
    virtual ~IRogoService() = default;

    virtual void begin() {}
    virtual void update() {}
    virtual void shutdown() {}
    virtual const char *getName() const { return ""; }
};
