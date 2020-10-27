#include "Stack.h"

Stack::Stack(){
    pilha = new std::vector<int>();
}
Stack::~Stack() {
    delete pilha;
}
//O(1) in most times,O(n) if need change memory alocation
void Stack::push(int valor) {
    pilha->push_back(valor);
}
//O(1)
void Stack::pop() {
    if(!pilha->empty()){
        return pilha->pop_back();
    }
    std::cout << "Sem elementos\n";
}
//O(1)
bool Stack::empty() {
    return pilha->size()==0;
}

//O(1)
int Stack::size() {
    return pilha->size();
}
//O(1)
int Stack::top() {
    if(!pilha->empty()){
        return pilha->back();
    }
    std::cout << "Sem elementos\n";
}
