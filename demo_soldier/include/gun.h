#pragma once

class gun
{
public:
    gun();
    gun(int num);
    ~gun();

    void shoot();
    void reload(int num);

private:
     int _bullets;
};