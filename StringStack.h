#ifndef _StringStack_
#define _StringStack_
#include <string>
#include <vector>
#include "TrueStack.h"

class StingStack : public TrueStack
{
    private:
    std::vector stack;
    public:
    std::string pop();
    void push(std::string);
    bool isEmpty();
}