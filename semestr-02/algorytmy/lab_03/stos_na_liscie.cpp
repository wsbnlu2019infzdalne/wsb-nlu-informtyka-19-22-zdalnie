#include <iostream>
using namespace std;

typedef int Item;
struct node
{
    Item  info;
    node *next;
};
typedef node *link;
link lista;

void create(link &lista)
{
    lista = new node;
    lista->next = NULL;
}
//wstawienie x za elementem wskazywanym przez p
void wstaw(link p, Item x)
{
    link temp = new node;
    temp->info = x;
    temp->next = p->next;
    p->next=temp;
}
//wypisuje liste zaczynajπc od elementu wskazywanego przez glowe
void wypisz(link lista)
{
    cout << "Zawartosc listy: ";
    link p = lista-> next;
    while(p!=NULL)
    {
        cout<< p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}

//sprawdza czy x jest na liscie (funkcja iteracyjna)
bool jest_iter(link lista, Item x)
{
    link p =lista->next;
    while(p&& p->info!=x)
    {
        p =p->next;
    }
    return p;
}
//usun element za elementem wskazywanym przez p
void usun(link p)
{
    if (p!=NULL)
    {
        link temp=p->next;
        p->next=p->next->next;
        delete temp;
    }
}

void usun_wszystkie(link p)
{
    while(p->next!=NULL)
    {
        usun(p);
    }
}

void usun_liste(link lista)
{
    usun_wszystkie(lista);
    delete lista;
}

void wstaw_na_koniec(link lista, int x)
{
    link p = lista;
    while(p->next)
    {
        p=p->next;
    };
    wstaw(p, x);
}

bool isEmpty(link stack)
{
    if(stack->next)
    {
        return false;
    } else {
        return true;
    }
    /// return stack->next?false: true;
    /// return
}
/// stack implementation

void push(link stack, int x)
{
    wstaw(stack, x);
}

void pop(link stack) {
    if (!isEmpty(stack)) {
        usun(stack);
    }
}

//  element z wierzhcolka stosu
int top(link stack)
{
    if (!isEmpty(stack)) {
       return stack->next->info;
    }
}

void dec2bin(int n)
{
    link stosReszt;
    create(stosReszt);
    while(n>0)
    {
        push(stosReszt, n%2);
        n=n/2;
    }
    while (!isEmpty(stosReszt))
    {
        cout << top(stosReszt);
        pop(stosReszt);
    }
    cout << endl;
    delete stosReszt;
}

int main()
{
    int n;
    cin >> n;
    cout << "Podaj liczbe do konwersji z DEC to BIN: " << endl;
    dec2bin(n);
    /*
    link stos;
    create(stos);
    push(stos, 1);
    for(int i = 2; i <= 10; i++ )
    {
        push(stos, i);
    }
    while(!isEmpty(stos))
    {
        cout << top(stos) << " | ";
        pop(stos);
    }
    cout << endl;
    delete stos;
    */
}

