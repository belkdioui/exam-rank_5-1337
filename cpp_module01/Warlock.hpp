#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include "ASpell.hpp"
#include <iostream>
#include <map>
class Warlock{

public:
    Warlock(const std::string& Name, const std::string& Title);
    ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string & Title);
    void introduce() const;
    void learnSpell(ASpell * spel);
    void forgetSpell(std::string name_spel);
    void launchSpell(std::string spel_name, const ATarget& tar);


private:
    Warlock();
    Warlock& operator=(const Warlock& obj);
    Warlock(const Warlock& obj);
    std::string name;
    std::string title;
    std::map<std::string, ASpell*> store_spel;

};

#endif