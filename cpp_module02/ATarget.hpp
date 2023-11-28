#ifndef ATARGET_HPP
#define ATARGET_HPP

#include<iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
    private:
        ATarget();
        ATarget(const ATarget& obj);
        ATarget& operator=(const ATarget& obj);

    protected:
        std::string type;
    
    public:
        virtual ~ATarget();
        const std::string & getType() const;
        ATarget(std::string Type);
        void getHitBySpell(ASpell const & spel) const;
        virtual ATarget * clone() const = 0 ;

};

#endif