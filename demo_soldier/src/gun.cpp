#include "gun.h"
#include <iostream>
using namespace std;
gun::gun()
{
    _bullets = 0;
}

gun::gun(int num) : _bullets(num)
{
}

gun::~gun()
{
}
void gun::shoot()
{
    if (_bullets > 0)
    {
        _bullets--;
        cout << "射击成功，剩余子弹：" << _bullets << endl;
    }
    else
    {

          cout << "没有子弹了，请先装弹。"  << endl;
    }
}

void gun::reload(int num)
{
    _bullets += num;
    if (_bullets > 0)
    {
        cout << "装弹成功，剩余子弹：" << _bullets << endl;
    }
}