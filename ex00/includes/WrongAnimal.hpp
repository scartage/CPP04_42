#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    ~WrongAnimal();

    WrongAnimal(const WrongAnimal& old);
    WrongAnimal& operator=(const WrongAnimal& other);

    std::string getType(void) const {return _type;}
    void WrongSound(void) const;
};

#endif