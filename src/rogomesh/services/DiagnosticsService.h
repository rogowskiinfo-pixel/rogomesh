#pragma once

#include "rogomesh/core/RogoContext.h"
#include "rogomesh/services/IRogoService.h"

class DiagnosticsService : public IRogoService
{
  public:
    DiagnosticsService()
    {
        RogoContext::instance().registerService("diagnostics_service", this);
    }

    void begin() override {}
    void update() override {}
    void shutdown() override {}
    const char *getName() const override { return "diagnostics_service"; }
};
