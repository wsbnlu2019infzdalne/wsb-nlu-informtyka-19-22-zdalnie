/*
@author: Paweł Michalik
@info: Implementation of stack using array
@date: 09.05.2020
*/
#include <iostream>
#include <string>
using namespace std;
const int LIMIT = 30;

/// Stack implementation.
struct Stack
{
    int tab[LIMIT];
    int top;
};

void create(Stack &s)
{
    s.top = -1;
}

bool isEmpty(const Stack &s)
{
    return s.top == -1;
}

bool isFull(const Stack &s)
{
    return s.top == LIMIT-1;
}

void push(Stack &s, int x)
{
    if (!isFull(s))
    {
        s.top++;
        s.tab[s.top] = x;
    }
}

int top(const Stack &s)
{
    return s.tab[s.top];
}

void pop(Stack &s)
{
    if (!isEmpty(s)) {
        s.top--;
    }
}
/// Helper functions to display stack and it's top.
void showStack(Stack &s)
{
    string separator;
    if (!isEmpty(s)) {
        for(int i = 0; i <= s.top; i++)
        {
            if(i == s.top)
            {
                separator = "";
            }
            else
            {
                separator = " --> ";
            }
            cout << s.tab[i] <<  separator;
        }
        cout << endl;
    }
}

void showTop(Stack &s)
{
    if (!isEmpty(s)) {
        cout << "top: " << top(s) << endl;
    }
}

int main(){
    Stack s{};
    create(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    showTop(s);
    showStack(s);
    pop(s);
    showTop(s);
    showStack(s);
}

