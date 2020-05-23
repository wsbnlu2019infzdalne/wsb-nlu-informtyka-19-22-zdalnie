/*
@author: Paweł Michalik
@info: Implementation of fifo using array
@date: 09.05.2020
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int n;
void generujTablice(int *tab, int n, int min, int max)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        tab[i] = rand() % (max-min+1) + min;
    }
}
void wypiszTablice(int *tab, int n)
{
    for(int i =0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void sortuj(int *tab, int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 0; j < n - i - 1; ++j)
        {
            if (tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int main()
{

    int n = 30;
    int *tab = new int[n];
    generujTablice(tab, n, 0, 99);
    wypiszTablice(tab, n);
    sortuj(tab, n);
    wypiszTablice(tab, n);
    delete [] tab;
    return 0;
};