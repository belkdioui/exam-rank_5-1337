#include "ATarget.hpp"
#include "ASpell.hpp"

const std::string &ATarget::getType() const
{
    return type;
}
ATarget::ATarget(std::string Type):type(Type){}
void ATarget::getHitBySpell(ASpell const & spel) const
{
    std::cout<<getType()<<" has been "<<spel.getEffects()<<"!"<<std::endl;
}

ATarget::~ATarget(){}