#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{
    // ASpell("Fireball", "Fireballed");
}

Fireball * Fireball::clone() const
{
    return new Fireball;
}

Fireball::~Fireball()
{
}