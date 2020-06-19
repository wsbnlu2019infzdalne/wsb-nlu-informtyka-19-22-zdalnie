### Podstawy analizy alorytmów. 
##### 1. Jaka jest złożoność poniższego fragmentu programu?

```c++
for (i=1; i<=n; i++)
    for (j=n; j>1;j=j/2) 
        a[i][j]=i+j;
```
* (a) T(n) 
* (b) T(n log n) 
* (c) T(n^2) 
* (d) T(log n) 
* (e) T(n * log(log n))

Gdzie "T" oznaczna złożoność Theta

Odpowiedź:

T( n * log n )  czyli (b)

Uzasadnienie:

Petla zewnętrzna obróci się `n` razy.
Natomiast w dugiej pętli mamy logarytmiczną funkcję `n`, malejącą z asymptotą `X` w `0`.

[ślusarek wykład 1 prezentacja 01, od slajd 9 ](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)



