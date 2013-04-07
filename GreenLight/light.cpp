#include "light.h"
#include "coordinates.h"

Light::Light()
{
    _intersection = new Coordinates(0.0f,0.0f);
}

Light::~Light()
{
    delete _intersection;
}

void Light::SetId(string id)
{
    _id = id;
}

void Light::SetDescription(string description)
{
    _description = description;
}

void Light::SetCoordinates(Coordinates intersection)
{
    _intersection = &intersection;
}

string Light::GetId()
{
    return _id;
}

string Light::GetDescription()
{
    return _description;
}

Coordinates* Light::GetCoordinates()
{
    return _intersection;
}
