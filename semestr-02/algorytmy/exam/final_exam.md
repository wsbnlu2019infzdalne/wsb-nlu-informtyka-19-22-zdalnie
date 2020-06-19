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
###### (b) T(n log n)

##### Uzasadnienie:
Petla zewnętrzna obróci się `n` razy.
Natomiast w dugiej pętli mamy logarytmiczną funkcję `n`, malejącą z asymptotą `X` w `0`.
Dzielimy `j` przez `2` przez co `j` maleje szybko czyli `log n`.

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 9 ](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

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
###### (a) T(n) 

##### Uzasadnienie: 
Odrzucam **c** i **e** ponieważ jest tylko jedna pętla więc nie mam mowy o iloczynie.
O(n) oszacowana od góry z założenia 
, prawa granica przestrzeni funkcji.
OMG(n) jest z załozenia niedoszacowana, lewa granica .


T(n) będzię więc najlepszą odpowiedzią bo znajduje sie w przestrzeni pomiędzy 
OMG(n) < T(n) < O(n). 

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 6 ](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 1.3 Instrukcje dominujące w algorytmie, to
(a) instrukcje, które są zawsze wykonywane
(b) instrukcje, których jest najwięcej w algorytmie
(c) instrukcje rozpoczynające każdą procedurę
(d) instrukcje, których liczba wykonań decyduje o rzędzie złożoności
(e) instrukcje, które są zawsze poprawne

##### Odpowiedź:
###### (d) instrukcje, których liczba wykonań decyduje o rzędzie złożoności

##### Uzasadnienie: 
Z wykładu:

```
Instrukcje dominujące w algorytmie to takie, że liczba wszystkich
wykonywanych instrukcji elementarnych jest proporcjonalna do t(d).
```

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 4](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________
________________________________________________________________________________________

### 2. Elementarne metody sortowania

#### 2.1 Sortowanie metodą wstawiania
* (a) jest niestabilne 
* (b) ma średnią złożoność T(n log n) 
* (c) działa w czasie liniowym 
* (d) szybko sortuje ciągi prawie posortowane 
* (e) wykonuje najmniej zamian

##### Odpowiedź: 
###### (d) szybko sortuje ciągi prawie posortowane 

##### Uzasadnienie: 
Z wykładu:

```
Zalety:
    Stabilność
    Średnio dwukrotnie szybszy niż inne proste metody
--> Optymalny dla ciągów prawie posortowanych <--
```
##### Na podstawie:
[ślusarek wykład 1 prezentacja 02, od slajd 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234328-prezentacja_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 2.2 Sortowanie stabilne to
* (a) metoda sortowania oparta na porównaniach kluczy
* (b) cecha wszystkich algorytmów o złożoności kwadratowej
* (c) własność metody sortowania przez wybór
* (d) zachowywanie wzajemnego uporządkowania kluczy jednakowych
* (e) metoda odporna na błędy przekłamania

##### Odpowiedź: 
###### (d) zachowywanie wzajemnego uporządkowania kluczy jednakowych

##### Uzasadnienie: 
Z wykładu:

`Metoda sortowania jest stabilna, jeśli zachowuje względną kolejność elementów o
jednakowych kluczach`

##### Na podstawie:
[ślusarek wykład 1 notatki 02, od str 1](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 2.3 Zaletą sortowania metodą wyboru jest 
* (a) niska złożoność
* (b) stabilność
* (c) mała liczba zamian
* (d) mała liczba porównań
* (e) odporność na przekłamania

##### Odpowiedź: 
###### (c) mała liczba zamian

##### Uzasadnienie: 
Z wykładu:
```
Zalety:
- Wykonuje tylko n-1 zamian (istotne dla długich rekordów)
```
##### Na podstawie:
[ślusarek wykład 1 notatki 02, od str 3](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 2.4 Do efektywnego sortowania ciągów prawie uporządkowanych należy użyć
* (a) dowolnego szybkiego algorytmu sortowania
* (b) najlepiej heapsort lub mergesort
* (c) quicksort
* (d) metody wyboru
* (e) metody wstawiania

##### Odpowiedź: 
###### (e) metody wstawiania

##### Uzasadnienie: 
Z wykładu:

```
Zalety:
    Stabilność
    Średnio dwukrotnie szybszy niż inne proste metody
--> Optymalny dla ciągów prawie posortowanych <--
```
##### Na podstawie:
[ślusarek wykład 1 prezentacja 02, od slajd 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234328-prezentacja_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________
________________________________________________________________________________________

### 3. Sortowanie metodą "dziel i zwyciężaj"
#### 3.1 Główną wadą algorytmu mergesort jest
(a) duża pesymistyczna złożoność
(b) duża pamięć robocza
(c) niemożność zaprogramowania bez użycia rekurencji
(d) niestabilność
(e) żadne z pozostałych

#### 3.2. Średnia złożoność algorytmu quicksort wynosi
(a) około 0,27 n (b) około 1,4 log n
(c) O(n log n) (d) O(n2)
(e) O(n loglog n)
#### 3.3. Algorytmem quicksort sortujemy ciąg 7-elementowy postaci: 4, 3, 4, 5, 1, 6, 2. Po pierwszym
wykonaniu funkcji Partition rozmiary lewego i prawego podzadania wynoszą odpowiednio
(a) 4 i 2 (b) 3 i 3
(c) 2 i 4 (d) 1 i 5
(e) 0 i 6
#### 3.4. Quicksort jest algorytmem skonstruowanym techniką
(a) programowania dynamicznego
(b) dziel i zwyciężaj
(c) zachłanną
(d) nawrotów (backtracking)
(e) żadną z pozostałych
#### 3.5. Algorytm quicksort działa w czasie
(a) Q(n), dla niektórych danych wejściowych
(b) Q(n log n) dla danych posortowanych
(c) Q(n log n), w najlepszym razie
(d) Q(n2
) jeśli wszystkie klucze są jednakowe
(e) Q(n log n), w najgorszym razie
#### 3.6. Algorytmem quicksort sortujemy ciąg 8-elementowy postaci:
4, 3, 4, 4, 4, 5, 5, 5.
Po pierwszym wykonaniu funkcji Partition rozmiary lewego i prawego podzadania wynoszą
odpowiednio
(a) 4 i 3 (b) 3 i 4
(c) 5 i 3 (d) 1 i 6

#### 3.7. Modyfikacja quicksort-u, polegająca na losowaniu elementu dzielącego powoduje, że
(a) jedno podzadanie jest zawsze puste
(b) podział jest zawsze na równej wielkości podzadania
(c) nigdy nie występuje przypadek pesymistyczny
(d) oczekiwana liczba porównań nie zależy od danych wejściowych
(e) złożoność algorytmu się zmniejsza
#### 3.8. Złożoność pewnego algorytmu skonstruowanego metodą "dziel i zwyciężaj" jest opisana
równaniem rekurencyjnym:
T(1) = 1
T(n) = 2T(n/2) + 3n, dla n>1.
Złożoność tego algorytmu wynosi:
(a) O(n3
) (b) O(log n)
(c) O(n log n) (d) O(n5
)

(e) O(n loglog n)