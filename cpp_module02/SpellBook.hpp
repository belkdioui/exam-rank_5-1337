#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class SpellBook{
    
    private:
        SpellBook (const SpellBook &  obj);
        SpellBook operator = (const SpellBook &  obj);
        std::map<std::string, ASpell *> store_book;

    public:
    
        SpellBook();
        void learnSpell(ASpell * asp);
        void forgetSpell(const std::string & name);
        ASpell* createSpell(const std::string & name);
        ~SpellBook();
};

#endif