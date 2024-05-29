#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget{
    
    private:
        std::string type;

    public:
        ATarget(const std::string & Name);
        const std::string & getType() const;
        virtual ATarget * clone() const = 0;
        void getHitBySpell(const ASpell & asp) const ;
        virtual ~ATarget();
};

#endif