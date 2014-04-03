#include "coordinates.h"

Coordinates::Coordinates()
{
}

Coordinates::Coordinates(float x, float y)
{
    _x = x;
    _y = y;
}

float Coordinates::GetCoorX()
{
    return _x;
}

float Coordinates::GetCoorY()
{
    return _y;
}
