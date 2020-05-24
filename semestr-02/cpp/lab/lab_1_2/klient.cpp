/*
Author: Pawel Michalik
Description: Student class, struct and selection of functions for data manipulation
Date: 24.04.2020
*/
#include <iostream>
using namespace std;

struct Student
{
    /*
    Student class
    */
    string name;
    string surname;
    string city;
    string telephone_no;
};

struct ClientDB
{
    /*
    Student Database class. In reality this is db of pointers to Student objects.
    */
    Student * clients[1000];
    int next_element_index = 0;
};


void setClientDetails(Student &client, string name, string surname, string city, string telephone_no) {
    /*
    Sets client details.

    @param: reference to <Student> object.
    @param: topic <string>.
    @param: surname <string>.
    @param: city <string>.
    @param: telephone_no <string>.
    */
    client.name = name;
    client.surname = surname;
    client.city = city;
    client.telephone_no = telephone_no;
}

void setClientDetails(Student *client, string name, string surname, string city, string telephone_no)
{
    /*
    Sets client details.

    @params: pointer to <Student> object.
    @param: topic <string>.
    @param: surname <string>.
    @param: city <string>.
    @param: telephone_no <string>.
    */
    client->name = name;
    client->surname = surname;
    client->city = city;
    client->telephone_no = telephone_no;

};

void setNextClientIndex(ClientDB *db, int index)
{
    db->next_element_index = index + 1;
}

void addClient(ClientDB &db, string name, string surname, string city, string telephone_no)
{
    /*
    Sets client details.

    @params: reference to <ClientDB> object.
    @param: topic <string>.
    @param: surname <string>.
    @param: city <string>.
    @param: telephone_no <string>.
    */
    if(db.next_element_index < int(sizeof(db.clients)/sizeof(*db.clients) ))
    {
        Student * client = new Student;
        setClientDetails(client, name, surname, city, telephone_no);
        db.clients[db.next_element_index] = client;
        setNextClientIndex(&db, db.next_element_index);
    }
    else
    {

        cout << "Student Database reach it's capacity. No more clients can be added. Please contact your database \
                administrator." << endl;
    }
}



void showClient(Student *client)
{
    /*
    Prints out client details.

    @params: client <Student>.
    */
    cout << "   Name: " << client->name << endl;
    cout << "   Surname: " << client->surname << endl;
    cout << "   City: " << client->city << endl;
    cout << "   Telephone Number: " << client->telephone_no << endl;

};

void showClients(ClientDB &db)
{
    /*
    Prints out all clients details, client DB capacity and how many records is already added.

    @params: &db reference to <ClientDB> object.
    */
    cout << "------------------------------------------------" << endl;
    cout << "Student Database contains " << db.next_element_index << " record(s) "
         << "[" << db.next_element_index << " / "<< sizeof(db.clients)/sizeof(*db.clients) << "]." << endl;
    for(int i=0; i < db.next_element_index; i++)
    {
        cout << "--[" << i+1 << "]--------------------------------------------" << endl;
        showClient(db.clients[i]);
    }
    cout << "------------------------------------------------" << endl;
}

int main()
{

    Student client1;
    Student client2;
    Student *client3 = new Student;
    setClientDetails(client1, "Pawel", "Michalik", "Krakow", "123123123");
    setClientDetails(&client2, "Jan", "Kowalski", "Nowy Sącz", "666333999");
    setClientDetails(client3, "Ewa", "Kowalska", "Poznań", "789567456");
    cout << "------------------------------------------------" << endl;
    showClient(&client1);
    cout << endl;
    showClient(&client2);
    cout << endl;
    showClient(client3);
    cout << "------------------------------------------------" << endl;
    cout << endl;

    ClientDB clients;
    addClient(clients, "Paweł", "Michalik", "Krakow", "666123456");
    addClient(clients, "Adam", "Nowak", "Poznan", "321123321");
    addClient(clients, "Ewa", "Kowalska", "Nowy Sącz", "676123456");
    showClients(clients);
};

