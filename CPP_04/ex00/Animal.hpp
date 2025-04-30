#ifndef ANIMAL_H
# define ANIMAL_H
#include <string>
#include <iostream>

class Animal
{
    protected:
    std::string type;

    public:
    Animal();
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);
    std::string getType() const;
    virtual void makeSound() const;
    ~Animal();

};

#endif