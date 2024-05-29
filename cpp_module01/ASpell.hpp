#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell{
    
    private:
        std::string name;
        std::string effects;

    public:
        ASpell(const std::string & Name, const std::string & Effects);
        std::string getName() const;
        std::string getEffects() const;
        void launch (const ATarget & ata) const;
        virtual ASpell * clone() const = 0;
        virtual ~ASpell();
};

#endif