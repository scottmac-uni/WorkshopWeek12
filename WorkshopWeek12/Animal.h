#pragma once
#include "Entity.h"

class Animal : public Entity
{
public:
    enum Diet { HERBIVORE, CARNIVORE };
    virtual ~Animal();
};