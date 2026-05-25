#pragma once
#include <map>
#include <memory>
#include <vector>
#include <string>

class AnimalType;
class Animal;
class Diet;
class Human;

class Factory {

public:
    AnimalFactory() = default;

    Human* generateHuman(std::string name) { return new Human(name); }
    Animal* generateAnimal(AnimalType type);
    Animal* generateAnimal(Diet diet);

private:


};
