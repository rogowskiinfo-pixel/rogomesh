#include "SecureAccessModule.h"
#include "rogomesh/core/RogoContext.h"

SecureAccessModule::SecureAccessModule() : SinglePortModule("rogomesh_secure_access", meshtastic_PortNum_TEXT_MESSAGE_APP)
{
    RogoContext::instance().registerService("rogomesh_secure_access", this);
}

void SecureAccessModule::begin() {}
void SecureAccessModule::update() {}
void SecureAccessModule::shutdown() {}
const char *SecureAccessModule::getName() const { return "rogomesh_secure_access"; }

ProcessMessage SecureAccessModule::handleReceived(const meshtastic_MeshPacket &mp)
{
    LOG_DEBUG("RogoMesh secure access module received packet\n");
    return ProcessMessage::CONTINUE;
}
