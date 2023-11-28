#pragma once
#include<iostream>

class Warlock
{
    private:
        Warlock();
        Warlock(const Warlock& obj);
        Warlock &operator=(const Warlock& obj);
        std::string name;
        std::string title;
    public:
        Warlock(const std::string& , const std::string&);
        ~Warlock();
        const std::string & getName() const;
        const std::string & getTitle() const;
        void setTitle(const std::string &);
        void introduce() const ;

};