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
    int k;
    for( int i=0;i<n;i++ )
    {
        k = i;
        for(int j=i+1; j<n;j++)
        {
            if(tab[j]<tab[k])
            {
                k=j;
            }
        }
        swap(tab[k], tab[i]);
    }
}

int main()
{
    srand(time(NULL));
    int n = 30;
    int *tab = new int[n];
    generujTablice(tab, n, 0, 99);
    wypiszTablice(tab, n);
    sortuj(tab, n);
    wypiszTablice(tab, n);
    delete [] tab;
    return 0;
};