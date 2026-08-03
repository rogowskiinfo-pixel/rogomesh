#pragma once

class OLEDDisplay;

class RogoMeshUI
{
public:
    static void begin();
    static void draw(OLEDDisplay *display);
};