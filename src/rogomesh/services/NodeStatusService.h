#pragma once

#include "rogomesh/core/RogoContext.h"
#include "rogomesh/services/IRogoService.h"

class NodeStatusService : public IRogoService
{
  public:
    NodeStatusService()
    {
        RogoContext::instance().registerService("node_status_service", this);
    }

    void begin() override {}
    void update() override {}
    void shutdown() override {}
    const char *getName() const override { return "node_status_service"; }
};
