#pragma once

#include "SinglePortModule.h"
#include "rogomesh/core/IRogoModule.h"

class TrackingModule : public SinglePortModule, public IRogoModule
{
  public:
    TrackingModule();

    void begin() override;
    void update() override;
    void shutdown() override;
    const char *getName() const override;

  protected:
    virtual ProcessMessage handleReceived(const meshtastic_MeshPacket &mp) override;
};
