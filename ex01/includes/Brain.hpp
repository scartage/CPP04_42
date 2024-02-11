#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
    std::string _ideas[100];
public:
    Brain();
    virtual ~Brain();
    Brain(const Brain& old);
    Brain& operator=(const Brain& other);
};

#endif