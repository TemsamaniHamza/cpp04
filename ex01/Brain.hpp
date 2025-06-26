#ifndef Brain_hpp
#define Brain_hpp

#include "Animal.hpp"

class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(std::string type);
        ~Brain();
        // Brain& operator=(const Brain& obj);
        // Brain(const Brain&cpy);
};

#endif
