#pragma once

const int MaxStack=100;

class Stack{

    public:
    Stack();
    ~Stack();
    bool Full();
    bool Empty();
    void Push(int x);
    void Pop(int &x);
    void Top(int &x);


    private:
    int top;
    int Entry[MaxStack+1];
};