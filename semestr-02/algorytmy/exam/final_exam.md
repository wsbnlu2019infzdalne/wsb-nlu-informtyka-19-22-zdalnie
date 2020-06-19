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





