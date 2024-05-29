#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"

class TargetGenerator{
    
    private:
        TargetGenerator (const TargetGenerator &  obj);
        TargetGenerator operator = (const TargetGenerator &  obj);
        std::map<std::string, ATarget *> store_book;

    public:
    
        TargetGenerator();
        void learnTargetType(ATarget * asp);
        void forgetTargetType(const std::string & name);
        ATarget* createTarget(const std::string & name);
        ~TargetGenerator();
};

#endif