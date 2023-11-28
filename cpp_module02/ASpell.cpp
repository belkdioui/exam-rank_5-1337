#include "ASpell.hpp"
#include "ATarget.hpp"
#include <string>

std::string ASpell::getName() const
{
    return name;
}

std::string ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch(ATarget const & ata) const 
{
    ata.getHitBySpell(*this);
}

ASpell::ASpell(std::string Name, std::string Effects):name(Name), effects(Effects){}
ASpell::~ASpell()
{}