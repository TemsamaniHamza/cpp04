#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default [Brain] is constructed\n";
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Default ideas";
    }
}

Brain::Brain(std::string type){
    std::cout << type << " [Brain] is constructed\n";
}

Brain::~Brain() {
    std::cout << " [Brain] is destructed\n";
}

// Brain &Brain::operator=(const Brain &obj) {
//     std::cout << "copy Brain opertaor is called\n";
//     this->type = obj.type;
//     return *this;
// }

// Brain::Brain(const Brain &cpy) {
//     std::cout << "copy Brain operator is called\n";
//     *this = cpy;
// }

// void Brain::makeSound() const
// {
//     std::cout << "meow meow MEOOOOOW\n";
// }