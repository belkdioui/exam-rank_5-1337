#include "ASpell.hpp"

std::string ASpell::getName() const
{
    return name;
}
std::string ASpell::getEffects() const
{
    return effects;
}

ASpell::ASpell(const std::string & Name, const std::string & Effects):name(Name), effects(Effects)
{
}

void ASpell::launch(const ATarget & ata) const
{
    ata.getHitBySpell(*this);
}

ASpell::~ASpell()
{
    
}