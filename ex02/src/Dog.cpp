#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << " -- [Constructor Dog] -- " <<  _type << " called" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << " -- [Destructor Dog] -- " << _type << " called" << std::endl;
}

Dog::Dog(const Dog& old) : Animal(old){
    std::cout << " [Copy DOG Constructor] " << _type << " called" << std::endl;
    _brain = new Brain(*old._brain);
}

Dog& Dog::operator=(const Dog& other){
    if (this != &other){
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    std::cout << " [DOG Operator Assignament Constructor] " << _type << " called" << std::endl;
    return *this;
}

void Dog::makeSound(void) const{
     std::cout << " !! [Dog func sound] !!" << " Woof Woof WOFF " << std::endl;
}

// delegamos esto a brain
void Dog::addIdea(const std::string& idea){
    _brain->addIdea(idea);
}

std::string Dog::getIdea(size_t index) const{
    return _brain->getIdea(index);
}
