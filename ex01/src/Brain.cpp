#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++){
        _ideas[i] = "no idea " + std::to_string(i);
    }
    std::cout << " [Brain constructor called] " << "BRAIN CREATED" << std::endl;
}

Brain::~Brain()
{
    std::cout << " [Brain destructor called]" << " BRAIN DELETED " << std::endl;
}

Brain::Brain(const Brain& old){
    std::cout << " [Copy Brain constructor called]" << " COPY BRAIN CREATED " << std::endl;
    *this = old;
}

Brain& Brain::operator=(const Brain& other){
    if (this != &other){
        for (int i = 0; i < 100; i++){
            this->_ideas[i] = other._ideas[i];
        }
    }
    std::cout << " [Operator Assign Brain constructor called]" << " OPERATOR ASSIGN BRAIN CREATED " << std::endl;
    return *this
}
