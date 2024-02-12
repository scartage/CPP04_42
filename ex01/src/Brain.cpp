#include "Brain.hpp"
#include <stdexcept> // Para std::out_of_range

Brain::Brain()
{
    for (int i = 0; i < 100; i++){
        _ideas[i] = "no idea";
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
    return *this;
}

void Brain::addIdea(const std::string& idea){
    for (int i = 0; i < 100; i++){
        if (_ideas[i] == "no idea"){
            _ideas[i] = idea;
            std::cout << "idea añadida: " << idea << std::endl;
            return ;
        }
    }
    std::cout << "El cerebro esta lleno de ideas!!" << std::endl;
}

std::string Brain::getIdea(size_t index) const {
    if (index >= 100){
        throw std::out_of_range("index esta fuera de rango");
    }
    return _ideas[index];
}