#include "soldier.h"

int main(int argc, char **argv)
{

    soldier s(new gun());

    s.reload(10);
    s.shoot();
    s.shoot();
    s.shoot();
    s.shoot();
    s.shoot();
    s.shoot();
    return 0;
}