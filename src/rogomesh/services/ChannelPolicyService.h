#pragma once

#include "rogomesh/core/RogoContext.h"
#include "rogomesh/services/IRogoService.h"

class ChannelPolicyService : public IRogoService
{
  public:
    ChannelPolicyService()
    {
        RogoContext::instance().registerService("channel_policy_service", this);
    }

    void begin() override {}
    void update() override {}
    void shutdown() override {}
    const char *getName() const override { return "channel_policy_service"; }
};
