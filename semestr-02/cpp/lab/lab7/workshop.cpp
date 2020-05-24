/**
 * @class Workshop.
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
    Time(int _hour, int _minute)
    {
        this->hour = _hour;
        this->minute = _minute;
    }
    void set(int _hour, int _minute);
    void print()const;
};
void Time::set(int _hour, int _minute)
{
    hour = _hour;
    minute = _minute;
}
void Time::print()const
{
    cout << to_string(hour) + ":" + _appendZero(minute);
}

class Workshop {
private:
    Time start_time;
    Time end_time;
    string topic;
    string speaker;
    string room;
public:
    Workshop(Time _start_time, Time _end_time, string _topic, string _speaker, string _room)
            : start_time(_start_time), end_time(_end_time), topic(_topic), speaker(_speaker), room(_room)
    {
    }
    void printInfo() const
    {
        cout << "---> Workshop Details <-----------------------------------------------------------------" << endl;
        cout << "     Topic: " <<  this->topic << "." << endl;
        cout << "     Speaker: " << this->speaker << "." << endl;
        cout << "     Timeline: ";
        this->start_time.print();
        cout <<  " - ";
        this->end_time.print();
        cout << "." << endl;
        cout << "     Room: " << this->room << "." << endl;
    }
    void SetInfo()
    {
        int t1, t2, t3, t4;
        cout << "---> Update Workshop Details: " << endl;
        cout << "---> Set new topic: " << endl;
        getline (cin, this->topic);
        cout << "---> Set new speaker: " << endl;
        getline (cin, this->speaker);
        cout << "---> Set new room: " << endl;
        getline (cin, this->room);
        cout << "---> Set new start time: " << endl;
        cin >> t1;
        cin >> t2;
        this->start_time.set(t1, t2);
        cout << "---> Set new end time: " << endl;
        cin >> t3;
        cin >> t4;
        this->end_time.set(t3, t4);
        cin.clear();
    }

};

int main()
{
    Workshop *workshop = new Workshop(
            Time(18, 0),
            Time(20, 0),
            "C++",
            "Andrzej Nowak",
            "A30");
    workshop->printInfo();
    workshop->SetInfo();
    workshop->printInfo();
    return 0;
};