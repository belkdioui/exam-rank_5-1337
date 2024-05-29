#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
    // ASpell("Polymorph", "Polymorphed");
}

Polymorph * Polymorph::clone() const
{
    return new Polymorph;
}

Polymorph::~Polymorph()
{
}