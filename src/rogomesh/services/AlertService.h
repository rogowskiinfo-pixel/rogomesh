#pragma once

#include "rogomesh/core/RogoContext.h"
#include "rogomesh/services/IRogoService.h"

class AlertService : public IRogoService
{
  public:
    AlertService()
    {
        RogoContext::instance().registerService("alert_service", this);
    }

    void begin() override {}
    void update() override {}
    void shutdown() override {}
    const char *getName() const override { return "alert_service"; }
};
