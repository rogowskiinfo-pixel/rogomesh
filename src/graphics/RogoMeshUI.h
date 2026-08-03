#pragma once

#include <OLEDDisplay.h> #include <OLEDDisplayUi.h>

namespace graphics {

class RogoMeshUI { public: static void drawSystem(OLEDDisplay display,
OLEDDisplayUiState state, int16_t x, int16_t y); };

}
