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
    if(!pilha->empty()){
        return pilha->pop_back();
    }
    std::cout << "Sem elementos\n";
}

bool Stack::empty() {
    return pilha->size()==0;
}

int Stack::size() {
    return pilha->size();
}

int Stack::top() {
    if(!pilha->empty()){
        return pilha->back();
    }
    std::cout << "Sem elementos\n";
}
