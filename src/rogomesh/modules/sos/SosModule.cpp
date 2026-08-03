#include "SosModule.h"
#include "rogomesh/core/RogoContext.h"

SosModule::SosModule() : SinglePortModule("rogomesh_sos", meshtastic_PortNum_TEXT_MESSAGE_APP)
{
    RogoContext::instance().registerService("rogomesh_sos", this);
}

void SosModule::begin() {}
void SosModule::update() {}
void SosModule::shutdown() {}
const char *SosModule::getName() const { return "rogomesh_sos"; }

ProcessMessage SosModule::handleReceived(const meshtastic_MeshPacket &mp)
{
    LOG_DEBUG("RogoMesh SOS module received packet\n");
    return ProcessMessage::CONTINUE;
}
