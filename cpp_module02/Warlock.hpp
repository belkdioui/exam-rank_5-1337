#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock{
    
    private:
        std::string name;
        std::string title;
        SpellBook spelbook;

    public:
        Warlock(const std::string & Name, const std::string & Title);
        const std::string & getName() const;
        const std::string & getTitle() const;
        void setTitle (const std::string & Title);
        void introduce() const;
        void learnSpell(ASpell * asp);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, const ATarget & ata);
        ~Warlock();
};

#endif