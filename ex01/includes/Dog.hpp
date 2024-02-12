#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog& old);
    Dog& operator=(const Dog& othe);
    virtual void makeSound(void) const;

    void addIdea(const std::string& idea);
    std::string getIdea(size_t index) const;
};

#endif