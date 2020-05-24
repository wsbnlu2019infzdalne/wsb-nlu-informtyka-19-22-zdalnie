/*
Author:Pawel Michalik
Description: Date class with setting and printing out methods.
Date:2020-04-03
*/

#include <iostream>;
#include <vector>;

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year)
    // :day(_day), month(_month), year(_year) lista inicjalizacyjna jako alternatywa
    {
        this->day = _day;
        this->month = _month;
        this->year = _year;
    }
    void SetDate(int _day, int _month, int _year);
    void PrintDate()const;
};

void Date::SetDate(int _day, int _month, int _year)
{
    /**
     * Sets value of Date object.
     *
     * @param day <int>, number representing day of the month.
     * @param month <int>, number representing month.
     * @param year <int>, number representing year.
     */
    day = _day;
    month = _month;
    year = _year;
}

void Date::PrintDate()const
{
    /**
     * Prints out date.
     */
    cout << to_string(day) + "." + to_string(month) + "." + to_string(year) << endl;
};


int main() {
    Date *date = new Date(20, 3, 2000);
    date->PrintDate();
    date->SetDate(12,12,2020);
    date->PrintDate();
};
