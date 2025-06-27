#ifndef Animal_hpp
#define Animal_hpp

#include <iostream>
#include <string>


class Animal {
    protected : 
        std::string type;
    public :
        Animal();
        Animal(std::string type);
        ~Animal();
        Animal& operator=(const Animal& obj);
        Animal(const Animal&cpy);
        virtual void makeSound() const = 0;
        std::string getType() const;
};


#endif