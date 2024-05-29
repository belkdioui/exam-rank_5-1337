#include "ATarget.hpp"

const std::string & ATarget::getType() const
{
    return type;
}


ATarget::ATarget(const std::string & Type):type(Type)
{
}


void ATarget::getHitBySpell(const ASpell & asp) const
{
    std::cout<<type<<" has been "<<asp.getEffects()<<"!"<<std::endl;
}

ATarget::~ATarget()
{
    
}