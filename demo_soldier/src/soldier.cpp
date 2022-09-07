#include "soldier.h"
#include "gun.h"
#include <iostream>
using namespace std;

soldier::soldier()
{
}
soldier::soldier(gun *g) : _gunPtr(g)
{
}
soldier::~soldier()
{
    if (_gunPtr != nullptr)
    {
        delete _gunPtr;
        _gunPtr = nullptr;
    }
}

void soldier::shoot()
{
    if (_gunPtr)
    {
        _gunPtr->shoot();
    }
}

void soldier::reload(int num)
{
    if (_gunPtr)
    {
        _gunPtr->reload(num);
    }
}
