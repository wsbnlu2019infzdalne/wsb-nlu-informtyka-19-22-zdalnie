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

int main()
{
    int x;
    int wybor;
    do
    {
        cout<<"[0] Koniec\n";
        cout<<"[1] Utworz liste\n";
        cout<<"[2] wstaw x\n";
        cout<<"[3] wypisz liste\n";
        cout<<"[4] sprawdz czy x jest na liscie\n";
        cout<<"[5] usun pierwszy element\n";
        cout<<"[6] usun liste \n";
        cout<<"[7] Wstaw x na koniec listy\n";
        cout<<"[8] \n\n";
        cout<<"\n";
        cin>>wybor;
        switch(wybor)
        {
            case 1 :
                create(lista);
                cout<< "Lista utworzona:"<<endl;
                break;
            case 2 :
                cout <<"Podaj x:\t";
                cin>>x;
                wstaw(lista,x);
                break;
            case 3 :
                wypisz(lista);
                break;
            case 4 :
                cout<<"Podaj x: ";
                cin>>x;
                if(jest_iter(lista,x))
                {
                    cout<<"podany element jest na liscie"<<endl;

                }
                else cout<<"Podany element nie jest na liscie"<<endl;
                break;
            case 5 :
                usun(lista);
                break;
            case 6 :
                usun_wszystkie(lista);
                cout<<"Usunieto liste";
                break;
            case 7 :
                cout<<"Podaj x: ";
                cin >> x;
                wstaw_na_koniec(lista, x);
                break;
            case 8 : ;  break;
            case 9 : ;  break;
        }

    }while(wybor);

    //system("PAUSE");

    return 0;
}

