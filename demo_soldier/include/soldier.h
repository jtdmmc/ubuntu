#pragma once

#include "gun.h"
class soldier
{
private:
    gun*_gunPtr;

public:
    soldier(/* args */);
    soldier(gun* g);
    ~soldier();

    void shoot();
    void reload(int num);
};
