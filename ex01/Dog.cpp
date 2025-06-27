#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "[Dog] default constructer called\n";
}

Dog::Dog(std::string type) : Animal(type) 
{
    this->brain = new Brain();
    std::cout << type << " [Dog] is constructed\n";
}

Dog::~Dog() {
    delete this->brain;
    std::cout << type << " [Dog] is destructed\n";
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << "copy Dog opertaor is called\n";
    for(int i = 0; i < 100; i++)
    {
        this->brain->setBrain(i, obj.brain->getBrain(i));
    }
    this->type = obj.type;
    return *this;
}

Dog::Dog(const Dog &cpy) {
    std::cout << "copy constructor Dog is called\n";
    *this = cpy;
}

void Dog::makeSound() const
{
    std::cout << "BARK BARK BARK BARK BAAAAARK\n";
}
