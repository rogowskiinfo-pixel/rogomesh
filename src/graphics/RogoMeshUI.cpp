#include "RogoMeshUI.h"
#include "graphics/ScreenFonts.h"

namespace graphics
{

void RogoMeshUI::drawSystem(OLEDDisplay *display, OLEDDisplayUiState *state, int16_t x, int16_t y)
{
    (void)state;
    if (display == nullptr)
        return;

    display->setTextAlignment(TEXT_ALIGN_CENTER);
    display->setFont(FONT_MEDIUM);
    display->drawString(64 + x, y + 6, "RogoMesh");

    display->setFont(FONT_SMALL);
    display->drawString(64 + x, y + 26, "Sprint 001");
}

} // namespace graphics
