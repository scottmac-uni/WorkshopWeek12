#include "Factory.h"
#include "AnimalType.h"
#include "Diet.h"
#include "Lion.h"
#include "Elephant.h"
#include "Giraffe.h"
#include "Hyena.h"
#include "Hippo.h"

Animal* Factory::generateAnimal(AnimalType type) {
    switch (type) {
    case AnimalType::LION:
        return Lion();
    case AnimalType::HIPPO:
        return Hippo();
    case AnimalType::ELEPHANT:
        return Elephant();
    case AnimalType::GIRAFFE:
        return Giraffe();
    case AnimalType::HYENA:
        return Hyena();
    }
}

Animal* Factory::generateAnimal(Diet diet) {

    if (diet == Diet::CARNIVORE) {
        int random = rand() % 2;
        if (random == 0)
            return new Lion();
        else
            return new Hyena();
    }

    else if (diet == Diet::HERBIVORE) {
        int random = rand() % 3;
        switch (random) {
        case 0:
            return new Hippo();

        case 1:
            return new Elephant();

        case 2:
            return new Giraffe();
        }
    }
    return nullptr;
}