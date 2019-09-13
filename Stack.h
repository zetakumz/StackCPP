#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

class Stack {
    std::vector<int> *pilha;
    public:
        Stack();
        ~Stack();
        void push(int valor);
        void pop();
        bool empty();
        int top();
        int size();
};
#endif