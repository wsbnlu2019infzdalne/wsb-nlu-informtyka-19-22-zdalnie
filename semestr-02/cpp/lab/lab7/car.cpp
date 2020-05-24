/**
 * @class Car.
 * @author Paweł Michalik.
 * @date 15.05.2020.
 */
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    float mileage;
public:
    Car()
    {
        this->brand = "Opel";
        this->model = "Meriva";
        this->mileage = 0;
    }
    Car(string _brand, string _model)
    :brand(_brand), model(_model)
    {
        this->mileage = 0;
    }
    Car(string _brand, string _model, float _mileage)
            :brand(_brand), model(_model), mileage(_mileage)
    {
    }
    void printCarDetails() const;
    void addDistance(float distance);

};

void Car::printCarDetails() const
{
    cout << "--> Car details ----------------------------------------------------------------------------" << endl;
    cout << "    Brand: " << this->brand << endl;
    cout << "    Model: " << this->model << endl;
    cout << "    Current Mileage: " << this->mileage << endl;
}

void Car::addDistance(float distance)
{
    cout << "Updating mileage of " << this->brand << " " << this->model << ": " << this->mileage << " + " << distance
         << " = ";
    this->mileage = this->mileage + distance;
    cout << this->mileage << endl;
}


int main()
{
    Car *opel = new Car();
    Car *toyota = new Car("Toyota", "Yaris", 12000);
    Car *fiat = new Car("Fiat", "Panda");
    opel->printCarDetails();
    toyota->printCarDetails();
    fiat->addDistance(300.3);
    fiat->addDistance(223.6);
    fiat->printCarDetails();
    delete opel;
    delete toyota;
    delete fiat;
}