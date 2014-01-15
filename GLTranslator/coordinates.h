#ifndef COORDINATES_H
#define COORDINATES_H

class Coordinates
{
public:
    Coordinates(float x, float y);

public:
    float GetCoorX();
    float GetCoorY();

private:
    float _x;
    float _y;
};

#endif // COORDINATES_H
