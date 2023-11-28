#include "Warlock.hpp"
#include "ASpell.hpp"

Warlock::Warlock(const std::string& Name, const std::string& Title):name(Name), title(Title)
{
    std::cout<<getName()<<": This looks like another boring day."<<std::endl;
}
Warlock::~Warlock()
{
    std::cout<<getName()<<": My job here is done!"<<std::endl;
}

const std::string& Warlock::getName() const
{return name;}

const std::string& Warlock::getTitle() const
{return title;}

void Warlock::setTitle(const std::string & Title)
{
    title = Title;
}

void Warlock::introduce() const
{
    std::cout<<this->getName()<<": I am "<<getName()<<", "<<getTitle()<<"!"<<std::endl;
}

void Warlock::learnSpell(ASpell * spel)
{
    _spelbook.learnSpell(spel);
}
void Warlock::forgetSpell(std::string name_spel)
{
    _spelbook.createSpell(name_spel);
}

void Warlock::launchSpell(std::string spel_name, const ATarget& tar)
{
    if (_spelbook.createSpell(spel_name)) 
    {
        _spelbook.createSpell(spel_name)->launch(tar);
    }
}