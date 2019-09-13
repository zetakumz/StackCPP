#include <vector>
#include "Stack.h"

Stack::Stack(){
    pilha = new std::vector<int>();
}
Stack::~Stack() {
    delete pilha;
}
void Stack::push(int valor) {
    pilha->push_back(valor);
}

void Stack::pop() {
    pilha->pop_back();
}

bool Stack::empty() {
    return pilha->size()==0;
}

int Stack::size() {
    return pilha->size();
}

int Stack::top() {
    return pilha->back();
}
