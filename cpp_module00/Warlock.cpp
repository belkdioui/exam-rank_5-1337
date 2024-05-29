#include "Warlock.hpp"

const std::string & Warlock::getName() const
{
    return name;
}
const std::string & Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle (const std::string & Title)
{
    title = Title;
}

Warlock::Warlock(const std::string & Name, const std::string & Title):name(Name), title(Title)
{
    std::cout<<name<<": This looks like another boring day."<<std::endl;
}

Warlock::~Warlock()
{
    std::cout<<name<<": My job here is done!"<<std::endl;
}

void Warlock::introduce() const
{
    std::cout<<name<<": I am "<<name<<", "<<title<<"!"<<std::endl;
}

