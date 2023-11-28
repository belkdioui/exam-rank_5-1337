#ifndef ASPELL_HPP
#define ASPELL_HPP

#include<iostream>
#include <string>
#include "ATarget.hpp"
class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    
    public:
        ASpell(std::string name, std::string effects);
        std::string getName() const ;
        virtual ~ASpell();
        std::string getEffects() const;
        virtual ASpell * clone() const = 0 ;
        void launch(ATarget const & ata) const;

};

#endif