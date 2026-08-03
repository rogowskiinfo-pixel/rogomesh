#pragma once

#include "rogomesh/core/RogoContext.h"
#include "rogomesh/services/IRogoService.h"

class TeamTrackingService : public IRogoService
{
  public:
    TeamTrackingService()
    {
        RogoContext::instance().registerService("team_tracking_service", this);
    }

    void begin() override {}
    void update() override {}
    void shutdown() override {}
    const char *getName() const override { return "team_tracking_service"; }
};
