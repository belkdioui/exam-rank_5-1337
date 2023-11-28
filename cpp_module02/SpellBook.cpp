#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell*>::iterator it=_SpellBook.begin(); it != _SpellBook.end(); it++) {
        delete it->second;
    }
    _SpellBook.clear();
}

void SpellBook::learnSpell(ASpell* asp)
{
    if (asp)
    {
        _SpellBook[asp->getName()]=asp->clone();
    }
}

void SpellBook::forgetSpell(std::string const & name)
{
    std::map<std::string, ASpell*>::iterator it=_SpellBook.find(name);
    if(it != _SpellBook.end())
    {
        delete it->second;
        _SpellBook.erase(it);
    }
}

ASpell * SpellBook::createSpell(std::string const & name)
{
    ASpell * tmp = NULL;
    if(_SpellBook.find(name) != _SpellBook.end())
        tmp = _SpellBook[name];
    return tmp;
}