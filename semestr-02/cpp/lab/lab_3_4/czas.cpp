/*
Author:Pawel Michalik
Description: Time class with setting and printing out method.
Time:2020-04-03
*/

#include <iostream>;
#include <vector>;

using namespace std;

class Time
{
private:
    int hour;
    int minute;

public:
    Time(int _hour, int _minute)
    {
        this->hour = _hour;
        this->minute = _minute;
    }
    void SetTime(int _hour, int _minute);
    void PrintTime()const;
};

void Time::SetTime(int _hour, int _minute)
{
    /**
     * Sets value of Time object.
     *
     * @param hour <int>, number representing hour.
     * @param minute <int>, number representing minute.
     */
    hour = _hour;
    minute = _minute;
}

void Time::PrintTime()const
{
    /**
     * Prints out time.
     */
    cout << to_string(hour) + ":" + to_string(minute) << endl;
}


int main() {
    Time *time = new Time(20, 3);
    time->PrintTime();
    time->SetTime(12, 12);
    time->PrintTime();
};
