/**
 * @class MultiContainerRecyclingBin.
 * @brief Class can be used to sort various types of litter.
 * @author Paweł Michalik.
 * @date 15.05.2020.
 */
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    /**
     * @brief Employee class definition.
     */
private:
    string name;
    string surname;
    int salary[12];
    static int employees_count;
    int salary_count = 0;

public:
    Employee(string _name, string _surname)
    {
        this->name = _name;
        this->surname = _surname;
        employees_count++;

        cout << "--> Employee " << this->name << " " << this->surname << " has ben added." << endl;
    }
    ~Employee()
    {
        cout << "--> Employee " << this->name << " " << this->surname << " has ben removed. " << endl;
        employees_count--;
    }
    void printEmployeeDetails()const;
    friend void addSalary(Employee &e);
    friend void printSalary(Employee &e);
    static int  getEmployeesCount()
    {
        return Employee::employees_count;
    };
};
void Employee::printEmployeeDetails()const
{
    cout << "--> Employee details ----------------------------------------------------------------------------" << endl;
    cout << "    Name: " << this->name << endl;
    cout << "    Surname: " << this->surname << endl;
}

void addSalary(Employee &e)
{
    cout << "Please add salary for the " << e.salary_count + 1 << " month of the year." <<  endl;
    int salary;
    cin >> salary;
    e.salary[e.salary_count] = salary;
    e.salary_count++;
};

void printSalary(Employee &e)
{
    cout << "--> Monthly salaries already paid this year:" << endl;
    for(int i = 0; i < e.salary_count; i++)
    {
        cout << "    " << i + 1 << ": " << e.salary[i] << endl;
    }
}

/// INIT
int Employee::employees_count = 0;
/// MAIN
int main()
{
    cout << "--> Employee's count: " <<  Employee::getEmployeesCount() << endl;
    Employee *employee1 = new Employee("Jan", "Kowalski");
    employee1->getEmployeesCount();
    addSalary(*employee1);
    addSalary(*employee1);
    employee1->printEmployeeDetails();
    printSalary(*employee1);
    cout << "--> Employee's count: " <<  Employee::getEmployeesCount() << endl;
    Employee *employee2 = new Employee("Andrzej", "Nowak");
    cout << "--> Employee's count: " <<  Employee::getEmployeesCount() << endl;
    Employee *employee3 = new Employee("Paweł", "Michalik");
    employee3->printEmployeeDetails();
    cout << "--> Employee's count: " <<  Employee::getEmployeesCount() << endl;
    delete employee1;
    delete employee2;
    delete employee3;
    cout << "--> Employee's count: " <<  Employee::getEmployeesCount() << endl;
    return 0;
};