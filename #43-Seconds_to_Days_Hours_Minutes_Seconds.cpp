#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // I just learned type modifiers..
    
    unsigned int TimeInSeconds;
    cout << "Please enter time in seconds : \n";
    cin >> TimeInSeconds;

    short const int SecondsPerMinute = 60;
    short const int SecondsPerHour = 60 * SecondsPerMinute; //3600
    const int SecondsPerDay = 24 * SecondsPerHour; //84400

    // there is no need to use floor funcion but just for the sake of abu had-hood I used it

    unsigned short Days = floor(TimeInSeconds / SecondsPerDay);
    TimeInSeconds -= Days * SecondsPerDay;

    unsigned short Hours = floor(TimeInSeconds / SecondsPerHour);
    TimeInSeconds -= Hours * SecondsPerHour;

    unsigned short Minutes = floor(TimeInSeconds / SecondsPerMinute);
    TimeInSeconds -= Minutes * SecondsPerMinute;

    unsigned short Seconds = TimeInSeconds; // no need for operation


    cout << "time= " << Days << ":" << Hours << ":" << Minutes << ":" << Seconds;
    return 0;
}