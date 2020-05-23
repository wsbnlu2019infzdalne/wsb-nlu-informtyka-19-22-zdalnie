/*
@author: Paweł Michalik
@info: Implementation of fifo using array
@date: 09.05.2020
*/
#include <iostream>
#include <string>
using namespace std;
const int LIMIT = 31;

/// Stack implementation.
struct Fifo
{
    int tab[LIMIT];
    int front; /// index of first element
    int rear; /// index of last element

};

//Tworzy kolejke pusta
void makeNull(Fifo &Q)
{
    Q.front = 0;
    Q.rear = -1;
}

//Sprawdza czy Fifo jest pusta
bool empty(const Fifo &Q)
{
    return (Q.rear+1)%LIMIT == Q.front;
}

//Sprawdza czy Fifo jest pelna
bool full(const Fifo &Q)
{
    return (Q.rear+2)%LIMIT == Q.front;
}

//Wstawia element x na koniec kolejki Q
void enqueue(Fifo &Q, int x)
{
    if (!full(Q))
    {
        Q.rear=(Q.rear+1)%LIMIT;
        Q.tab[Q.rear] = x;
    }
}

//Usuwa element z pocz¹tku kolejki
void dequeue(Fifo &Q)
{
    if (!empty(Q))
    {
        Q.front = (Q.front+1)%LIMIT;
    }
}

//Zwraca element z poczatku kolejki
int first(Fifo &Q)
{
    return Q.tab[Q.front];
}

//wypisuje kolejke
void print(Fifo Q)
{
    if (!empty(Q))
    {
        for(int i = Q.front; i != (Q.rear + 1) % LIMIT ; i = (i + 1) % LIMIT)
        {
            cout << Q.tab[i] <<  " ";
        }
        cout << endl;
    }
}

int main()
{
    Fifo f;
    makeNull(f);
    for(int i = 0; i <31; i++ )
    {
        enqueue(f, i);
    }
    print(f);
    for(int i = 0; i <8; i++ )
    {
        dequeue(f);
    }
    print(f);
    for(int i = 0; i <4; i++ )
    {
        enqueue(f, i);
    }
    print(f);
    return 0;
}


