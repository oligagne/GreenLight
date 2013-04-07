#ifndef LIGHT_H
#define LIGHT_H

#include <string>
#include "coordinates.h"
using namespace std;

class Coordinates;

class Light
{
public:
    Light();
    ~Light();

public:
    void SetId(string id);
    void SetDescription(string description);
    void SetCoordinates(Coordinates intersection);

    string GetId();
    string GetDescription();
    Coordinates* GetCoordinates();

private:
    string _id;
    string _description;
    Coordinates* _intersection;

};

#endif // LIGHT_H
