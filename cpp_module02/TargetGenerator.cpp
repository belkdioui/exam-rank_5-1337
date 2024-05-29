#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget * asp)
{
    if(asp)
    {
        if(store_book.find(asp->getType()) == store_book.end())
            store_book[asp->getType()] = asp;
    }
}

void TargetGenerator::forgetTargetType(const std::string & name)
{
        if(store_book.find(name) != store_book.end())
            store_book.erase(name);
}

ATarget* TargetGenerator::createTarget(const std::string &name)
{
    ATarget *tmp = NULL;
    if(store_book.find(name) != store_book.end())
    {
        tmp = store_book.find(name)->second;
    }
    return tmp;
}

TargetGenerator::TargetGenerator()
{
    
}

TargetGenerator::~TargetGenerator()
{

}