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
    // alternatywne podejscie
//    int temp;
//    int j;
//    for(int i=1; i<n; i++ )
//    {
//        temp = tab[i];
//        for(j=i-1; j>=0 and tab[j]>temp;j--)
//        {
//            tab[j+1]=tab[j];
//        }
//        tab[j+1]=temp;
//    }
    for (int i = 1; i < n; i++) {
        int porownywanyElement = tab[i];
        int j = i - 1;

        while (porownywanyElement < tab[j] && j >= 0) {
            tab[j + 1] = tab[j];
            --j;
        }
        tab[j + 1] = porownywanyElement;
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