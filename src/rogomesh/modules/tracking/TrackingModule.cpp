#include "TrackingModule.h"
#include "rogomesh/core/RogoContext.h"

TrackingModule::TrackingModule() : SinglePortModule("rogomesh_tracking", meshtastic_PortNum_TEXT_MESSAGE_APP)
{
    RogoContext::instance().registerService("rogomesh_tracking", this);
}

void TrackingModule::begin() {}
void TrackingModule::update() {}
void TrackingModule::shutdown() {}
const char *TrackingModule::getName() const { return "rogomesh_tracking"; }

ProcessMessage TrackingModule::handleReceived(const meshtastic_MeshPacket &mp)
{
    LOG_DEBUG("RogoMesh tracking module received packet\n");
    return ProcessMessage::CONTINUE;
}
