/**
 * @class MultiContainerRecyclingBin.
 * @brief Class can be used to sort various types of litter.
 * @author Paweł Michalik.
 * @date 16.05.2020.
 */
#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

    static string _appendZero(int e)
    {
        if(e >= 0 and e < 10)
        {
            return "0" + to_string(e);
        }
        else
        {
            return to_string(e);
        }
    };

public:
    Time(int _hour, int _minute, int _second)
    {
        this->hour = _hour;
        this->minute = _minute;
        this->second = _second;
    }
    void set(int _hour, int _minute, int _second);
    void print();
};

void Time::set(int _hour, int _minute, int _second = 1)
{
    hour = _hour;
    minute = _minute;
    second = _second;
}

void Time::print()
{
    cout << "Time: " + to_string(hour) + ":" + _appendZero(minute) + ":" + _appendZero(second) << endl;
}

int main() {
    Time *time = new Time(20, 3, 50);
    time->print();
    time->set(12, 0, 40);
    time->print();
    time->set(15, 32);
    time->print();
};