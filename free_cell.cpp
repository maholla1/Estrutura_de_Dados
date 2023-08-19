#include "free_cell.hpp"
#include <iostream>
using namespace std;

Stack::Stack()
{
    Entry[top] = 0;
}

// Stack::~Stack(){

//     cout << "Chamado destrutor da pilha" << endl;
// }

bool Stack::Full()
{
    return Entry[top] = MaxStack;
}

bool Stack::Empty()
{
    return top == 0;
}

void Stack::Push(int x)
{

    if (Full())
    {
        cout << "A pilha esta cheia! Elemento " << x << " nao inserido." << endl;
        return; // encerra apenas a função
    }
    top++;
    Entry[top] = x;
    cout << "Elemento " << x << " inserido." << endl;
}

void Stack::Pop(int &x)
{

    if (Empty())
    {
        cout << "A pilha esta vazia! Elemento nao pode ser removido." << endl;
        return;
    }
    x = Entry[top];
    top--;
}

void Stack::Top(int &x)
{

    if (Empty())
    {
        cout << "A pilha esta vazia! Nao ha elemento no topo." << endl;
        return;
    }
    x = Entry[top];
}