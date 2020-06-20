

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
* (b) ma średnią złożoność T(n log n)  `// "T" oznaczna złożoność Theta`
* (c) działa w czasie liniowym 
* (d) szybko sortuje ciągi prawie posortowane 
* (e) wykonuje najmniej zamian

##### Odpowiedź: 
###### (d) szybko sortuje ciągi prawie posortowane 

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
* (d) zachowywanie wzajemnego uporządkowania kluczy jednakowych
* (e) metoda odporna na błędy przekłamania

##### Odpowiedź: 
###### (d) zachowywanie wzajemnego uporządkowania kluczy jednakowych

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
* (c) mała liczba zamian
* (d) mała liczba porównań
* (e) odporność na przekłamania

##### Odpowiedź: 
###### (c) mała liczba zamian

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
* (e) metody wstawiania

##### Odpowiedź: 
###### (e) metody wstawiania

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
* (b) duża pamięć robocza
* (c) niemożność zaprogramowania bez użycia rekurencji
* (d) niestabilność
* (e) żadne z pozostałych

##### Odpowiedź: 
###### (b) duża pamięć robocza

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
* (c) O(n log n) 
* (d) O(n2)
* (e) O(n log(log n))

##### Odpowiedź: 
###### (c) O(n log n) 

##### Uzasadnienie: 
```
Ważna własność nr 4: A(n) ≈ 1.4 n lg n
(dowód dość trudny, np. z wykorzystaniem liczb harmonicznych).
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
(a) 4 i 2 
(b) 3 i 3
(c) 2 i 4 
(d) 1 i 5
(e) 0 i 6

##### Odpowiedź: 
###### (b) 3 i 3

##### Uzasadnienie: 
tablica z nieparzystą ilością elementów --> L=P=(n−1)/2

tablica z nieparzystą ilością elementów --> L=n/2, P=(n/2) - 1

##### Na podstawie:
[WWW](https://pl.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/analysis-of-quicksort)
________________________________________________________________________________________

#### 3.4. Quicksort jest algorytmem skonstruowanym techniką
(a) programowania dynamicznego
(b) dziel i zwyciężaj
(c) zachłanną
(d) nawrotów (backtracking)
(e) żadną z pozostałych

##### Odpowiedź: 
###### (b) dziel i zwyciężaj

##### Uzasadnienie:
```
Quicksort algorytm typu "dziel i zwyciężaj”
```

##### Na podstawie:
[ślusarek wykład 1 prezentacja 03, od slajd 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234330-prezentacja_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.5. Algorytm quicksort działa w czasie
* (a) T(n), dla niektórych danych wejściowych
* (b) T(n log n) dla danych posortowanych
* (c) T(n log n), w najlepszym razie
* (d) T(n2) jeśli wszystkie klucze są jednakowe
* (e) T(n log n), w najgorszym razie

##### Gdzie "T" oznaczna złożoność Theta

##### Odpowiedź: 
###### (d) T(n2) jeśli wszystkie klucze są jednakowe

##### Uzasadnienie: 
Własność nr 3: Złożoność pesymistyczna algorytmu quicksort
jest kwadratowa:

PES(n) = 1/2 n2 + O(n) = T(n2) // gdzie PES(n) oznacza złożoność pesymistyczną

##### Na podstawie:
[ślusarek wykład 1 prezentacja 02, od slajd 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234328-prezentacja_02.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.6. Algorytmem quicksort sortujemy ciąg 8-elementowy postaci:
4, 3, 4, 4, 4, 5, 5, 5.
Po pierwszym wykonaniu funkcji Partition rozmiary lewego i prawego podzadania wynoszą
odpowiednio
* (a) 4 i 3 
* (b) 3 i 4
* (c) 5 i 3 
* (d) 1 i 6

##### Odpowiedź: 
###### (a) 4 i 3 

##### Uzasadnienie: 
tablica z nieparzystą ilością elementów --> L=P=(n−1)/2

tablica z nieparzystą ilością elementów --> L=n/2, P=(n/2) - 1

##### Na podstawie:
[WWW](https://pl.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/analysis-of-quicksort)
________________________________________________________________________________________

#### 3.7. Modyfikacja quicksort-u, polegająca na losowaniu elementu dzielącego powoduje, że
(a) jedno podzadanie jest zawsze puste
(b) podział jest zawsze na równej wielkości podzadania
(c) nigdy nie występuje przypadek pesymistyczny
(d) oczekiwana liczba porównań nie zależy od danych wejściowych
(e) złożoność algorytmu się zmniejsza

##### Odpowiedź: 
###### (c) nigdy nie występuje przypadek pesymistyczny

##### Uzasadnienie: 
```
(a) randomizacja: w każdym podzadaniu, przed przystąpieniem do podziału zawsze na
początku losuj jeden element i zamień go z lewym elementem. To zapewnia, że wszystkie
możliwe wielkości podzadań są jednakowo prawdopodobne;  

 --> dodatkowa zaleta: nikt nie jest w stanie skonstruować ciągu który jest na pewno przypadkiem pesymistycznym.  <--
```

##### Na podstawie:
[ślusarek wykład 1 notatki 03, str 8](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 3.8. Złożoność pewnego algorytmu skonstruowanego metodą "dziel i zwyciężaj" jest opisana
równaniem rekurencyjnym:
T(1) = 1
T(n) = 2T(n/2) + 3n, dla n>1.
Złożoność tego algorytmu wynosi:
* (a) O(n3) 
* (b) O(log n)
* (c) O(n log n) 
* (d) O(n5)
* (e) O(n log(log n))

##### Odpowiedź: 
###### (c) O(n log n) 

##### Uzasadnienie: 

```
Rozwiązujemy równanie rekurencyjne na T(n), metodą iteracji:
T(n) = 2 T(n/2) + n = 2 ( 2 T(n/4) + n/2) + n
= 2 ( 2 ( 2 T(n/8) + n/4 ) + n/2 ) + n
= 2 ( . . . 2 ( 2 ( 2 T(1) + 2 ) + 4 ) + . . . ) + n/2 ) + n
= 2^log(n) * T(1) + n * lg n = n log(n)
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
* (c) kolejki priorytetowej 
* (d) słownika 
* (e) listy

##### Odpowiedź: 
###### (c) kolejki priorytetowej 

##### Uzasadnienie: 
```
Kopiec (stóg) (ang. heap)
• struktura służąca do realizacji kolejki priorytetowej, czyli struktury z
operacjami:
```

##### Na podstawie:
[ślusarek wykład 2 prezentacja 04, slide 2](https://docs.google.com/viewer?url=https%3A%2F%2Fwsb-nlu.clouda.edu.pl%2FContent%2Fpliki%2FmaterialyJednostka%2Fslusarek-06032020234329-notatki_03.pdf&embedded=true&chrome=false&dov=1)
________________________________________________________________________________________

#### 4.2 Zawartość tablicy a[1]...a[6] to {1,6,7,2,4,3}. W rezultacie wykonania 'downheap(a,1,6)' (czyli
przesianie od korzenia w dół) zawartość tablicy jest
* (a) {1,6,7,2,4,3} 
* (b) {7,6,1,2,4,3}
* (c) {7,6,3,2,4,1} 
* (d) {7,6,4,3,2,1}
* (e) {7,4,6,1,2,3}

##### Odpowiedź: 
###### (c) {7,6,3,2,4,1} 

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
* (a) wykonać n razy delete_max()
* (b) wypisać klucze poziomami, startując od korzenia
* (c) wypisać kopiec w porządku inorder
* (d) wypisać kopiec w porządku preorder
* (e) wypisać kopiec w porządku postorder

##### Odpowiedź: 
###### (a) wykonać n razy delete_max()

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
* (d) pozwalająca usuwać największy element i wstawiać nowe elementy
* (e) żadne z pozostałych

##### Odpowiedź: 
###### (d) pozwalająca usuwać największy element i wstawiać nowe elementy

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
* (c) 1 i 3 
* (d) tylko 1.
* (e) tylko 3

##### Odpowiedź: 
###### (c) 1 i 3 

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
(a) wszystkie, 
(b) 1 i 3
(c) tylko 1 
(d) żadna.
(e) tylko 3

##### Odpowiedź: 
###### (e) tylko 3

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
* (a) OMG(n log n) i OMG(n log n)
* (b) OMG(n log n) i OMG(log n)
* (c) OMG(n log n) i OMG(n)
* (d) OMG(n2) i OMG(n log n)
* (e) OMG(n log n) i OMG(n loglog n)

##### Odpowiedź: 
###### (a) OMG(n log n) i OMG(n log n)

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
