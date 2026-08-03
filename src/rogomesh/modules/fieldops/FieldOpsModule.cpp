#include "FieldOpsModule.h"
#include "rogomesh/core/RogoContext.h"

FieldOpsModule::FieldOpsModule() : SinglePortModule("rogomesh_fieldops", meshtastic_PortNum_TEXT_MESSAGE_APP)
{
    RogoContext::instance().registerService("rogomesh_fieldops", this);
}

void FieldOpsModule::begin() {}
void FieldOpsModule::update() {}
void FieldOpsModule::shutdown() {}
const char *FieldOpsModule::getName() const { return "rogomesh_fieldops"; }

ProcessMessage FieldOpsModule::handleReceived(const meshtastic_MeshPacket &mp)
{
    LOG_DEBUG("RogoMesh field ops module received packet\n");
    return ProcessMessage::CONTINUE;
}
