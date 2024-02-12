#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"
#define RED "\x1B[31M"
#define BGRED "\x1B[41m"
#define GREEN "\x1B[32m"

// ahora esta clase es abstracta, ya que tiene un metodo puramente virtual
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
    virtual void makeSound(void) const = 0;
};

#endif