#include "DiagnosticsModule.h"
#include "rogomesh/core/RogoContext.h"

DiagnosticsModule::DiagnosticsModule() : SinglePortModule("rogomesh_diagnostics", meshtastic_PortNum_TEXT_MESSAGE_APP)
{
    RogoContext::instance().registerService("rogomesh_diagnostics", this);
}

void DiagnosticsModule::begin() {}
void DiagnosticsModule::update() {}
void DiagnosticsModule::shutdown() {}
const char *DiagnosticsModule::getName() const { return "rogomesh_diagnostics"; }

ProcessMessage DiagnosticsModule::handleReceived(const meshtastic_MeshPacket &mp)
{
    LOG_DEBUG("RogoMesh diagnostics module received packet\n");
    return ProcessMessage::CONTINUE;
}
