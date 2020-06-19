### 1. Podstawy analizy alorytmów. 
#### 1.1 Jaka jest złożoność poniższego fragmentu programu?

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

##### Gdzie "T" oznaczna złożoność Theta

##### Odpowiedź:
T( n * log n )  czyli (b)

##### Uzasadnienie:
Petla zewnętrzna obróci się `n` razy.
Natomiast w dugiej pętli mamy logarytmiczną funkcję `n`, malejącą z asymptotą `X` w `0`.
Dzielimy `j` przez `2` przez co `j` maleje szybko czyli `log n`.

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 9 ](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)

#### 1.2 Fragment programu:
```
for (i=1; i<=n; i++) 
    a[i]=2*i+1 ;
```
ma złożoność (wybierz najbardziej precyzyjną formułę)
* (a) T(n) 
* (b) O(n) 
* (c) T(n2) 
* (d) OMG(n) 
* (e) O(n log n)

##### Gdzie 
* "T" oznaczna złożoność Theta.
* "O" oznaczna złożoność duze O
* "OMG" oznaczna złożoność Omega

##### Odpowiedź:
T(n) czyli (a).

##### Uzasadnienie: 
Odrzucam **c** i **e** ponieważ jest tylko jedna pętla więc nie mam mowy o iloczynie.
O(n) oszacowana od góry z założenia 
, prawa granica przestrzeni funkcji.
OMG(n) jest z załozenia niedoszacowana, lewa granica .


T(n) będzię więc najlepszą odpowiedzią bo znajduje sie w przestrzeni pomiędzy 
OMG(n) < T(n) < O(n). 

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 6 ](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)

#### 1.3 Instrukcje dominujące w algorytmie, to
(a) instrukcje, które są zawsze wykonywane
(b) instrukcje, których jest najwięcej w algorytmie
(c) instrukcje rozpoczynające każdą procedurę
(d) instrukcje, których liczba wykonań decyduje o rzędzie złożoności
(e) instrukcje, które są zawsze poprawne

##### Odpowiedź:
(d) instrukcje, których liczba wykonań decyduje o rzędzie złożoności

##### Uzasadnienie: 
Instrukcje dominujące w algorytmie to takie, że liczba wszystkich
wykonywanych instrukcji elementarnych jest proporcjonalna do t(d).

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 4](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)
