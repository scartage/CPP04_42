#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat& old);
    Cat& operator=(const Cat& other);
    virtual void makeSound(void) const;
};

#endif