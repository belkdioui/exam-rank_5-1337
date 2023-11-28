#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        SpellBook(const SpellBook& obj);
        SpellBook operator=(const SpellBook& obj);
        std::map<std::string, ASpell*>_SpellBook;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* );
        void forgetSpell(std::string const &);
        ASpell * createSpell(std::string const &);
};

#endif