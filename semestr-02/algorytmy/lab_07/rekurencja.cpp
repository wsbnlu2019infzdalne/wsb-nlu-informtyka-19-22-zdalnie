/*
@author: Paweł Michalik
@info: Rekurencja
@date: 09.05.2020
*/
#include <iostream>

using namespace std;
/// a1 = 3.5
/// an = an-1 +0.5
float ciag(int n)
{
    if(n == 1)
    {
        return 3.5;
    }
    else
    {
        return ciag(n-1) + 0.5;
    }
}
//float zadanie1 (float arg){
//    return --arg?zadanie1(arg)+0.5:3.5;
//}
/// n!=(n-1)!*n;
int silnia(int n)
{
    if(n == 1)
        return 1;
    else
        return silnia(n-1)*n;
};

// 1, 1, 2, 3, 5, 8, 13, 21,

int fib(int n)
{
    if(n<=2)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}

// x^n
double xDoN(double x,unsigned n)
{
    if (n==0)
        return 1;
    else
        return x*xDoN(x,n-1);
}

int main()
{
    cout << ciag(5) << endl;
    cout << silnia(5) << endl;
    cout << fib(6) << endl;
    cout << xDoN(2, 5) << endl;
};