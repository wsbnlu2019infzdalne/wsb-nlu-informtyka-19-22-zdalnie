### 1. Podstawy analizy alorytmów. 
#### 1.1 Jaka jest złożoność poniższego fragmentu programu?

```c++
for (i=1; i<=n; i++)
    for (j=n; j>1;j=j/2) 
        a[i][j]=i+j;
```
* (a) Θ(n) 
* ### (b) Θ(n log n) 
* (c) Θ(n^2) 
* (d) Θ(log n) 
* (e) Θ(n * log(log n))

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
* ### (a) Θ(n) 
* (b) O(n) 
* (c) Θ(n2) 
* (d) Ω(n) 
* (e) O(n log n)

##### Uzasadnienie: 
Odrzucam **c** i **e** ponieważ jest tylko jedna pętla więc nie mam mowy o iloczynie.
O(n) oszacowana od góry z założenia 
, prawa granica przestrzeni funkcji.
Ω(n) jest z załozenia niedoszacowana, lewa granica .


Θ(n) będzię więc najlepszą odpowiedzią bo znajduje sie w przestrzeni pomiędzy 
Ω(n) < Θ(n) < O(n). 

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 6 ](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 1.3 Instrukcje dominujące w algorytmie, to
* (a) instrukcje, które są zawsze wykonywane
* (b) instrukcje, których jest najwięcej w algorytmie
* (c) instrukcje rozpoczynające każdą procedurę
* ### (d) instrukcje, których liczba wykonań decyduje o rzędzie złożoności
* (e) instrukcje, które są zawsze poprawne

##### Uzasadnienie: 
```
Instrukcje dominujące w algorytmie to takie, że liczba wszystkich
wykonywanych instrukcji elementarnych jest proporcjonalna do t* (d).
```

##### Na podstawie:
[ślusarek wykład 1 prezentacja 01, od slajd 4](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-prezentacja_01.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________
________________________________________________________________________________________

### 2. Elementarne metody sortowania

#### 2.1 Sortowanie metodą wstawiania
* (a) jest niestabilne 
* (b) ma średnią złożoność Θ(n log n)  `// "T" oznaczna złożoność Theta`
* (c) działa w czasie liniowym 
* ### (d) szybko sortuje ciągi prawie posortowane 
* (e) wykonuje najmniej zamian

##### Uzasadnienie: 
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
* ### (d) zachowywanie wzajemnego uporządkowania kluczy jednakowych
* (e) metoda odporna na błędy przekłamania

##### Uzasadnienie: 
```
Metoda sortowania jest stabilna, jeśli zachowuje względną kolejność elementów o
jednakowych kluczach
```

##### Na podstawie:
[ślusarek wykład 1 notatki 02, od str 1](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 2.3 Zaletą sortowania metodą wyboru jest 
* (a) niska złożoność
* (b) stabilność
* ### (c) mała liczba zamian
* (d) mała liczba porównań
* (e) odporność na przekłamania

##### Uzasadnienie: 

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
* ### (e) metody wstawiania

##### Uzasadnienie: 
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
* (a) duża pesymistyczna złożoność
* ### (b) duża pamięć robocza
* (c) niemożność zaprogramowania bez użycia rekurencji
* (d) niestabilność
* (e) żadne z pozostałych

##### Uzasadnienie: 
```
Ponieważ scalanie jest związane z przepisywaniem wymaga to dodatkowej roboczej tablicy
wielkości tej samej co tablica a[].
```

##### Na podstawie:
[ślusarek wykład 1 notatki 03, str 3](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.2. Średnia złożoność algorytmu quicksort wynosi
* (a) około 0,27 n 
* (b) około 1,4 log n
* ### (c) O(n log n) 
* (d) O(n2)
* (e) O(n log(log n))

##### Uzasadnienie: 
```
Ważna własność nr 4: A(n) ≈ 1.4 n lg n
* (dowód dość trudny, np. z wykorzystaniem liczb harmonicznych).
Można wykazać, że odchylenie standardowe od wartości oczekiwanej wynosi około 0.27 * n,
zatem jest bardzo małe (liniowego rzędu, gdy tymczasem wartość oczekiwana jest rzędu n log n). Wniosek:

Ważna własność nr 5:
Jeśli na wejściu do algorytmu quicksort podana jest losowa permutacja danych, to z bardzo
dużym prawdopodobieństwem algorytm wykonuje w przybliżeniu 1.4 n lg n porównań
(inaczej: prawdopodobieństwo że algorytm będzie wykonywał dużo więcej lub dużo mniej 
niż 1.4 n lg n porównań jest bardzo małe).
```
1.4 n  n czyli w zasadzie n logn --> O(n log n) 

##### Na podstawie:
[ślusarek wykład 1 notatki 03, str 7](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.3. Algorytmem quicksort sortujemy ciąg 7-elementowy postaci: 4, 3, 4, 5, 1, 6, 2. Po pierwszym
wykonaniu funkcji Partition rozmiary lewego i prawego podzadania wynoszą odpowiednio
* (a) 4 i 2 
* ### (b) 3 i 3
* (c) 2 i 4 
* (d) 1 i 5
* (e) 0 i 6

##### Uzasadnienie: 
tablica z nieparzystą ilością elementów --> L=P=(n−1)/2

tablica z nieparzystą ilością elementów --> L=n/2, P=(n/2) - 1

##### Na podstawie:
[WWW](https://pl.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/analysis-of-quicksort)
________________________________________________________________________________________

#### 3.4. Quicksort jest algorytmem skonstruowanym techniką
* (a) programowania dynamicznego
* ### (b) dziel i zwyciężaj
* (c) zachłanną
* (d) nawrotów * (backtracking)
* (e) żadną z pozostałych

##### Uzasadnienie:
```
Quicksort algorytm typu "dziel i zwyciężaj”
```

##### Na podstawie:
[ślusarek wykład 1 prezentacja 03, od slajd 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234330-prezentacja_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.5. Algorytm quicksort działa w czasie
* (a) Θ(n), dla niektórych danych wejściowych
* (b) Θ(n log n) dla danych posortowanych
* (c) Θ(n log n), w najlepszym razie
* ### (d) Θ(n2) jeśli wszystkie klucze są jednakowe
* (e) Θ(n log n), w najgorszym razie

##### Uzasadnienie: 
Własność nr 3: Złożoność pesymistyczna algorytmu quicksort
jest kwadratowa:

T(n) = 1/2 n2 + O(n) = Θ(n2) 

##### Na podstawie:
[ślusarek wykład 1 prezentacja 02, od slajd 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234328-prezentacja_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.6. Algorytmem quicksort sortujemy ciąg 8-elementowy postaci:
4, 3, 4, 4, 4, 5, 5, 5.
Po pierwszym wykonaniu funkcji Partition rozmiary lewego i prawego podzadania wynoszą
odpowiednio
* ### (a) 4 i 3 
* (b) 3 i 4
* (c) 5 i 3 
* (d) 1 i 6

##### Uzasadnienie: 
tablica z nieparzystą ilością elementów --> L=P=(n−1)/2

tablica z nieparzystą ilością elementów --> L=n/2, P=(n/2) - 1

##### Na podstawie:
[WWW](https://pl.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/analysis-of-quicksort)
________________________________________________________________________________________

#### 3.7. Modyfikacja quicksort-u, polegająca na losowaniu elementu dzielącego powoduje, że
* (a) jedno podzadanie jest zawsze puste
* (b) podział jest zawsze na równej wielkości podzadania
* ### (c) nigdy nie występuje przypadek pesymistyczny
* (d) oczekiwana liczba porównań nie zależy od danych wejściowych
* (e) złożoność algorytmu się zmniejsza

##### Uzasadnienie: 
```
* (a) randomizacja: w każdym podzadaniu, przed przystąpieniem do podziału zawsze na
początku losuj jeden element i zamień go z lewym elementem. To zapewnia, że wszystkie
możliwe wielkości podzadań są jednakowo prawdopodobne;  

 --> dodatkowa zaleta: nikt nie jest w stanie skonstruować ciągu który jest na pewno przypadkiem pesymistycznym.  <--
```

##### Na podstawie:
[ślusarek wykład 1 notatki 03, str 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.8. Złożoność pewnego algorytmu skonstruowanego metodą "dziel i zwyciężaj" jest opisana
równaniem rekurencyjnym:
Θ(1) = 1
Θ(n) = 2Θ(n/2) + 3n, dla n>1.
Złożoność tego algorytmu wynosi:
* (a) O(n3) 
* (b) O(log n)
* ### (c) O(n log n) 
* (d) O(n5)
* (e) O(n log(log n))

##### Uzasadnienie: 

```
Rozwiązujemy równanie rekurencyjne na Θ(n), metodą iteracji:
Θ(n) = 2 Θ(n/2) + n = 2 ( 2 Θ(n/4) + n/2) + n
= 2 ( 2 ( 2 Θ(n/8) + n/4 ) + n/2 ) + n
= 2 ( . . . 2 ( 2 ( 2 Θ(1) + 2 ) + 4 ) + . . . ) + n/2 ) + n
= 2^log(n) * Θ(1) + n * lg n = n log(n)
```
n log(n) dla quick sorta oraz dla sortowania przez scalanie

##### Na podstawie:
[ślusarek wykład 1 notatki 03, str 5](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________
________________________________________________________________________________________

### 4. Kopiec

#### 4.1 Kopiec to efektywna realizacja
* (a) stosu 
* (b) kolejki 
* ### (c) kolejki priorytetowej 
* (d) słownika 
* (e) listy

##### Uzasadnienie: 
```
Kopiec (stóg) * (ang. heap)
• struktura służąca do realizacji kolejki priorytetowej, czyli struktury z
operacjami:
```

##### Na podstawie:
[ślusarek wykład 2 prezentacja 04, slide 2](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 4.2 Zawartość tablicy a[1]...a[6] to {1,6,7,2,4,3}. W rezultacie wykonania 'downheap* (a,1,6)' * (czyli
przesianie od korzenia w dół) zawartość tablicy jest
* (a) {1,6,7,2,4,3} 
* (b) {7,6,1,2,4,3}
* ### (c) {7,6,3,2,4,1} 
* (d) {7,6,4,3,2,1}
* (e) {7,4,6,1,2,3}

##### Uzasadnienie: 
kopiec: {1,6,7,2,4,3} --> https://prnt.sc/t329wz
operacja heapdown - Teta(log(n))
```
Na każdym poziomie dwa porównania: wybór większego z następników oraz porównanie z
poprzednikiem. 

Nawigacja w kopcu – bardzo łatwa:
• poprzednikiem a[i] jest a[  i/2 ],
• lewym następnikiem a[i] jest a[ 2*i ],
• prawym następnikiem a[i] jest a[ 2*i+1 ].
```
[1] L = 6 < P=7, zamiana 1 z 7
[2] L = 3, P brak, zamiana 1 z 3 
koniec a = {7, 6, 3, 2, 4, 1}

##### Na podstawie:
[WWW](hhttps://webdocs.cs.ualberta.ca/~holte/T26/heap-sift-down.html)
[strona do wiuzalizacji kopca](http://btv.melezinek.cz/binary-heap.html)
________________________________________________________________________________________


#### 4.3 Aby wypisać zawartość kopca w kolejności malejącej należy
* ### (a) wykonać n razy delete_max()
* (b) wypisać klucze poziomami, startując od korzenia
* (c) wypisać kopiec w porządku inorder
* (d) wypisać kopiec w porządku preorder
* (e) wypisać kopiec w porządku postorder

##### Uzasadnienie: 
Kopiec wielkosci n

przykąłdowy wykonie mógłby wyglądac tak:

[1]
* wypisanie korzenia
* zamiana korzenia z ostatnim elementem kopca i usunięcie ostatniego elementu przez n--
* downheap 

[2]
* wypisanie korzenia
* zamiana korzenia z ostatnim elementem kopca i usunięcie ostatniego elementu przez n--
* downheap 

  .......
  
[n]
* wypisanie korzenia
* korzenia przez n--
  
##### Na podstawie:
[ślusarek wykład 2 notatki 04, str 3](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)

________________________________________________________________________________________


#### 4.4 Kolejka priorytetowa to struktura danych
* (a) stanowiąca połączenie kolejki i stosu
* (b) oferująca operacje search, insert, delete
* (c) będąca posortowaną listą
* ### (d) pozwalająca usuwać największy element i wstawiać nowe elementy
* (e) żadne z pozostałych

##### Uzasadnienie: 
```
Kopiec to struktura służąca do realizacji kolejki priorytetowej, czyli struktury danych z
operacjami:
- --> insert (Q, e) wstaw element e do kolejki Q <--
- max (Q) podaj wartość największego elementu w kolejce Q
- --> deletemax (Q) usuń największy element z kolejki Q <--
```

##### Na podstawie:
[ślusarek wykład 2 notatki 04, str 1](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________


#### 4.5 Spośród następujących metod (w klasie algorytmów sortujących przez porównania):
1. heapsort (metoda kopca),
2. quicksort,
3. mergesort (scalanie),
optymalny rząd złożoności pesymistycznej posiadają
* (a) 2 i 3 
* (b) wszystkie
* ### (c) 1 i 3 
* (d) tylko 1.
* (e) tylko 3

##### Uzasadnienie: 
```
Podsumowanie. Pod względem liczby wykonywanych porównań:
• Mergesort jest optymalny (z dokładnością do składnika wielkości O(n)) w przypadku
pesymistycznym i średnim
• Quicksort w przypadku średnim jest ok. 1.4 razy gorszy niż optimum; >>> w przypadku
pesymistycznym ma rząd złożoności taki jak proste algorytmy sortowania: Θ(n2) <<<
• Heapsort jest w przypadku pesymistycznym i średnim około 2 razy gorszy niż optimum.
```

##### Na podstawie:
[ślusarek wykład 2 notatki 04, str 5](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________


#### 4.6 Które spośród tych metod sortowania są stabilne?
1 - heapsort
2 - quicksort,
3 - countsort (metoda zliczania)
* (a) wszystkie, 
* (b) 1 i 3
* (c) tylko 1 
* (d) żadna.
* ### (e) tylko 3

##### Uzasadnienie: 
```
Podobnie jak quicksort, heapsort jest niestabilny.
```
WIKIPEDIA: "gwarantuje stabilność i nie wymaga dodatkowego założenia. Potrzebuje natomiast O(n) dodatkowej pamięci"


##### Na podstawie:
[ślusarek wykład 1 notatki 03, str 5](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
[WIKI: sortowanie przez zliczanie](https://pl.wikipedia.org/wiki/Sortowanie_przez_zliczanie)
________________________________________________________________________________________

#### 4.7 Dolne ograniczenie na złożoność pesymistyczną i średnią sortowania przez porównania kluczy
wynosi odpowiednio
* ### (a) Ω(n log n) i Ω(n log n)
* (b) Ω(n log n) i Ω(log n)
* (c) Ω(n log n) i Ω(n)
* (d) Ω(n2) i Ω(n log n)
* (e) Ω(n log n) i Ω(n loglog n)

##### Uzasadnienie: 
```
Twierdzenie 2: Każdy algorytm sortujący metodą porównań w przypadku
średnim wykonuje co najmniej n lg n porównań.

A zatem, w modelu drzew decyzyjnych, dolne ograniczenie na złożoność
średnią jest takie samo jak dla złożoności pesymistycznej.
```

##### Na podstawie:
[ślusarek wykład 2 prezentacja 04, slajd 15](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-22032020175143-prezentacja_04.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________
________________________________________________________________________________________

## Nie opracowane:

### 5. Metody pozycyjne sortowania

1. Złożoność pesymistyczna sortowania przez zliczanie * (countsort)
* ### (a) jest liniowa względem liczby elementów i zakresu wartości kluczy
* (b) jest optymalna i wynosi Θ(n log n)
* (c) jest rzędu kwadratowego
* (d) nie zależy od wartości kluczy
* (e) jest rzędu n loglog n

2. Złożoność sortowania metodą zliczania n kluczy o wartościach z przedziału [0..m-1] wynosi
* (a) Θ(n log n) 
* (b) Θ(n m)
* (c) Θ(n2) 
* ### (d) Θ(n+m)
* (e) Θ(n loglog n)

3. Złożoność pamięciowa sortowania metodą zliczania n kluczy o wartościach z przedziału [0..m-
1] wynosi
* (a) Θ(n) 
* (b) Θ(n m)
* (c) Θ(m) 
* ### (d) Θ(n+m)
* (e) Θ(n2)

4. Po pierwszej z trzech faz algorytmu radixsort dla tablicy trzycyfrowych kluczy
{(1,2,4),(2,2,2),(1,1,4),(4,4,1)}
klucz (1,2,4) będzie w kolejności na miejscu (licząc od zera)
* (a) 0 
* (b) 1
* ### (c) 2 
* (d) 3
* (e) 2 lub 3
________________________________________________________________________________________

### 7. Wyszukiwanie w tablicy

1. Oczekiwana liczba iteracji podczas wyszukiwania interpolacyjnego w tablicy 1 000 000 -
elementowej wynosi około:
* (a) 500 000 
* (b) 100 000 
* ### (c) 5 
* (d) 20 
* (e) 100

2. Złożoność pesymistyczna i średnia wyszukiwania połówkowego "bisekcja – 1 porównanie"
wynosi odpowiednio:
* (a) Θ(n) i Θ(log n)
* ### (b) Θ(log n) i Θ(log n)
* (c) Θ(n) i Θ(log log n)
* (d) Θ(log n) i Θ(n)
* (e) Θ(log n) i Θ(log log n)

3. Szukamy X=1000 w tablicy A[1000], posortowanej rosnąco, z wartościami na końcach 0 i
10000. Metoda interpolacyjna w pierwszym kroku porówna X z elementem A[p], p w przybliżeniu
równa się
* (a) 1 
* (b) 50
* ### (c) 100 
* (d) 1000
* (e) 900

4. Oczekiwana liczba porównań dla wyszukiwania algorytmem "bisekcja 1 porównanie" (w
tablicy długości 64000 dla metody połówkowej oraz interpolacyjnej wynosi odpowiednio (około)
* ### (a) 16 i 4 
* (b) 16 i 16
* (c) 32000 i 16
* (d) 4 i 16
* (e) 32000 i 4

5. Zawartość tablicy a[0..8] to {1,3,5,5,5,5,10,10,13}. Wyszukujemy metodą połówkową
* (binsearch - lowerbound) wartości X=4. W wyniku otrzymujemy indeks:
* (a) 4 
* ### (b) 2 
* (c) 3 
* (d) 5 
* (e) 6
________________________________________________________________________________________


### 8. Drzewa BST
1. Do początkowo pustego drzewa BST wstawiamy kolejno 8, 16, 10, 5, 2 Poprzednikiem
węzła 10 jest:
* (a) żaden – 10 jest korzeniem 
* ### (b) 16 
* (c) 10 
* (d) 5 
* (e) 2

2. Aby otrzymać zawartość drzewa BST w kolejności rosnącej należy przeglądnąć drzewo w
porządku 
* (a) preorder 
* ### (b) inorder 
* (c) postorder 
* (d) DFS 
* (e) BFS

3. Dla początkowo pustego drzewa BST wykonujemy n operacji wstawienia, dla kluczy równych
1, 2, ... , n, w tej kolejności. W sumie wszystkie operacje kosztują
* (a) Θ(n) 
* (b) Θ(log n)
* ### (c) Θ(n2) 
* (d) Θ(n log n) 
* (e) Θ(n loglog n)

4. Do początkowo pustego drzewa BST wstawiamy kolejno 10, 5, 12, 8, 3. Poprzednikiem węzła
8 w tak skonstruowanym drzewie jest:
* (a) żaden (8 jest korzeniem) 
* (b) 12 
* (c) 10 
* ### (d) 5 
* (e) 3

5. Do początkowo pustego drzewa BST wstawiamy n różnych kluczy, w losowej kolejności.
Złożoności pesymistyczna i średnia całego ciągu operacji wynoszą odpowiednio
* (a) Θ(n) i Θ(n) 
* (b) Θ(n2) i Θ(n)
* ### (c) Θ(n2) i Θ(n log n) 
* (d) Θ(n log n) i Θ(n log n)
* (e) Θ(n2) i Θ(n2)

6. W n-wierzchołkowym drzewie BST reprezentowanym w standardowy sposób za pomocą
wskaźników liczba pustych wskaźników (NULL) we wszystkich wierzchołkach wynosi
* (a) n-1 
* (b) n 
* ### (c) n+1 
* (d) 2n+1 
* (e) 2n - 1

________________________________________________________________________________________

### 10. Haszowanie
1. W haszowaniu, "kolizja" oznacza, że
* (a) w słowniku mogą być elementy o jednakowej wartości funkcji haszującej
* (b) wartość funkcji haszującej wypada poza zakres tablicy
* ### (c) w słowniku są elementy o jednakowej wartości funkcji haszującej
* (d) zabrakło pamięci aby wstawić kolejny element
* (e) żadne z pozostałych

2. Obsługa kolizji jest przez adresowanie liniowe.
Funkcja haszująca ma postać: h(x)=x mod 6. Wstawiono kolejno 10, 18, 13, 23, 17. Klucz 17 jest
na pozycji
* (a) 4 
* (b) 5 
* (c) 0 
* ### (d) 2 
* (e) 3

3. Obsługa kolizji jest przez wtórną funkcję haszującą.
Funkcja haszująca (pierwotna): h(x)=x mod 7; wtórna: g(x) = 6 – x mod 5.
Wstawiono kolejno 9, 19, 23. Klucz 23 jest na pozycji
* (a) 0 
* ### (b) 1 
* (c) 4 
* (d) 3 
* (e) 6
4. Jaka jest średnia złożoność wyszukiwania klucza w tablicy haszowanej, w dowolnej z
poznanych metod usuwania kolizji (zakładając nie większe niż 50% wypełnienie):
* (a) Θ(log n) 
* ### (b) stała 
* (c) Θ(log log n) 
* (d) Θ(n) 
* (e) Θ(n log n)

5. Przepis pierwotnej funkcji haszującej to h(x)=x mod 7;
wtórnej h'(x) = 4 – x mod 4.
Wstawiono kolejno 9, 18, 30. Klucz 30 jest na pozycji
* (a) 0 
* (b) 2 
* (c) 4 
* ### (d) 6
* (e) 1

6. W metodzie haszowania operacja usuwania elementu jest realizowalna efektywnie
* (a) w każdej z metod usuwania kolizji
* (b) w metodzie haszowania podwójnego
* ### (c) w metodzie łańcuchowania
* (d) w żadnej z metod
* (e) w metodzie adresacji liniowej
________________________________________________________________________________________


### 11. Przegląd grafu
1. Algorytm przeglądu grafu w głąb jest przykładem konstrukcji opartej na technice
* (a) zachłannej 
* ### (b) nawrotów * (backtracking) 
* (c) programowania dynamicznego
* (d) dziel i zwyciężaj 
* (e) połówkowej

2. Algorytmy BFS i DFS oparte są na wykorzystaniu, odpowiednio, następujących struktur
danych:
* (a) stosu, stosu
* (b) kolejki, kolejki
* ### (c) kolejki, stosu
* (d) kolejki priorytetowej, kolejki
* (e) stosu, kolejki priorytetowej

3. Koszt pamięciowy reprezentacji grafu G=(V,E), V=n,E=m, za pomocą tablicy sąsiedztwa
oraz list następników wynosi odpowiednio
* (a) O(n2) i O(nm) 
* (b) O(n+m) i O(n2)
* ### (c) O(n2) i O(n+m) 
* (d) O(n) i O(m)
* (e) O(n+m) i O(n m)

4. Sortowanie topologiczne acyklicznego grafu zorientowanego można obliczyć
* (a) przeglądając BFS i obliczając odległości
* (b) przeglądając DFS i porządkując rosnąco numerami postorder f[v]
* (c) przeglądając DFS i porządkując rosnąco numerami preorder d[v]
* ### (d) przeglądając DFS i porządkując malejąco numerami postorder f[v]
* (e) przeglądając BFS i obliczając głębokości

5. Najszybsza metoda obliczania odległości pomiędzy dwoma ustalonymi wierzchołkami
spójnego niezorientowanego grafu (wagi krawędzi równe 1) to
* (a) algorytm Dijkstry
* (b) algorytm Forda-Bellmana,
* ### (c) algorytm BFS
* (d) algorytm DFS z numeracją f[v]
* (e) algorytm DFS z numeracją d[v]

6. Spośród wszystkich możliwych drzew rozpinających o ustalonym korzeniu s dla grafu
niezorientowanego G, drzewo BFS
* (a) jest najwyższe
* ### (b) jest najniższe
* (c) ma na ogół mniejszą liczbę krawędzi niż inne drzewa
* (d) ma na ogół większą liczbę krawędzi niż inne drzewa
* (e) żadna z pozostałych odpowiedzi

7. Aby sprawdzić czy graf zorientowany jest acykliczny
* (a) stosujemy BFS i sprawdzamy krawędzie poprzeczne
* (b) stosujemy DFS i sprawdzamy krawędzie poprzeczne
* ### (c) stosujemy DFS i sprawdzamy krawędzie wsteczne
* (d) stosujemy BFS i sprawdzamy stopnie wierzchołków
* (e) stosujemy BFS i sprawdzamy krawędzie wzfdłużne

8. Spójne składowe dowolnego grafu niezorientowanego można obliczyć w czasie
* ### (a) O(n+m) 
* (b) O(n) 
* (c) O(n m) 
* (d) O(n2) 
* (e) O(n2m)

9. Najlepszy czas w jakim można posortować graf topologicznie jest rzędu dokładnie
* ### (a) n+m 
* (b) n log n 
* (c) m log m 
* (d) n2
* (e) loglog n
________________________________________________________________________________________


### 12. Najkrótsze ścieżki
1. Zbiór wierzchołków grafu zorientowanego to V={0,1,2,3}, zbiór krawędzi, w postaci (od, do,
waga), to E={ (0,1,2),(0,3,5),(1,2,1),(2,3,0),(3,1,4)}. W algorytmie Dijkstry najkrótszych ścieżek z
ustalonego źródła 0 kolejność, w jakiej wierzchołki otrzymują ostateczną wartość odległości jest
* ### (a) 1,2,3 
* (b) 3,1,2 
* (c) 2,1,3 
* (d) 1,3,2 
* (e) 2,3,1

2. W pewnym momencie obliczania najkrótszych ścieżek algorytmem Forda-Bellmana w grafie
zorientowanym zachodzi D[u]=17, D[v]=33, a waga krawędzi (u,v) wynosi -8. Algorytm wykonuje
Relax(u, v). Otrzymujemy:
* (a) błąd - waga krawędzi ujemna 
* (b) D[u] = 25 
* (c) D[v] = 27 
* ### (d) D[v] = 9 `// D[u] - waga krawedzi(u, v)) czyli 17 -8 = 9` 
* (e) D[v] = 50

3. W pewnym momencie obliczania najkrótszych ścieżek algorytmem Dijkstry w grafie
zorientowanym zachodzi D[u]=10, D[v]=25, a waga krawędzi (u,v) wynosi 0. Algorytm wykonuje
Relax(u, v). Otrzymujemy:
* (a) błąd - waga krawędzi zerowa 
* (b) D[u] = 25 
* (c) D[v] = 25 
* ### (d) D[v] = 10 
* (e) D[u] = 35

4. W przypadku gdy graf zadany jest przez tablicę sąsiedztwa algorytm Dijkstry znajdowania
najkrótszych ścieżek ma złożoność
* (a) Θ(nm) 
* (b) Θ(n+m) 
* ### (c) Θ(n2) 
* (d) Θ(m log n) 
* (e) Θ(m loglog n)

5. Złożoność algorytmu Forda-Bellmana dla reprezentacji grafu przez listy sąsiedztwa wynosi
* (a) Θ(n2) 
* (b) Θ(n2log n) 
* (c) Θ(n + m) 
* ### (d) Θ(m n) 
* (e) Θ(m loglog n)
________________________________________________________________________________________

### 13. Minimalne drzewo rozpinające
1. Zbiór wierzchołków grafu niezorientowanego to V={0,1,2,3}, zbiór krawędzi w postaci (od, do,
waga) to E= {(0,1,10),(0,2,25),(1,2,20),(1,3,12),(2,3,25)}. W algorytmie Jarnika-Prima (start w
wierzchołku 0) kolejność dodawanych do drzewa rozpinającego krawędzi jest
* (a) (0,1),(1,2),(1,3) 
* (b) (0,1),(1,3),(0,2)
* (c) (0,1),(0,2),(1,3) 
* ### (d) (0,1),(1,3),(1,2)
* (e) (0,2),(0,1),(1,3)

2. Złożoność algorytmu Kruskala
* (a) jest niewielomianowa
* (b) jest liniowa
* ### (c) zależy od złożoności sortowania
* (d) nie zależy od liczby krawędzi w grafie
* (e) jest rzędu n3

3. Klasyczne algorytmy znajdowania MST oparte są o technikę
* (a) dziel i zwyciężaj
* ### (b) zachłanną
* (c) programowania dynamicznego
* (d) nawrotów
* (e) bisekcji

4. Algorytm Jarnika-Prima znajdowania najkrótszych ścieżek w wersji wykorzystującej kopiec
(kolejkę priorytetową) ma złożoność
* (a) Θ(nm) 
* (b) Θ(n+m) 
* (c) Θ(n log n) 
* ### (d) Θ(m log n) 
* (e) Θ(m loglog n)