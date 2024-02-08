#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    virtual ~Animal();

    Animal(const Animal& old);
    Animal& operator=(const Animal& other);
    std::string getType(void) const;
    virtual void makeSound(void) const;
};

#endif