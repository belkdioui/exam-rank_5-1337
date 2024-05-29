#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell * asp)
{
    if(asp)
    {
        if(store_book.find(asp->getName()) == store_book.end())
            store_book[asp->getName()] = asp;
    }
}

void SpellBook::forgetSpell(const std::string & name)
{
        if(store_book.find(name) != store_book.end())
            store_book.erase(name);
}

ASpell* SpellBook::createSpell(const std::string &name)
{
    ASpell *tmp = NULL;
    if(store_book.find(name) != store_book.end())
    {
        tmp = store_book.find(name)->second;
    }
    return tmp;
}

SpellBook::SpellBook()
{
    
}

SpellBook::~SpellBook()
{

}