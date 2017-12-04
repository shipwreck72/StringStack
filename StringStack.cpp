#include <vector>
#include "StringStack.h"
    
std::string pop(){
    return std::string word = stack.pop();
}

void StringStack::push(std::string word){
    stack.push_back(word);
}

bool isEmpty(){
    return stack.empty();
}