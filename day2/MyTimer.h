#ifndef MY_TIMER_H
#define MY_TIMER_H
#include <iostream>

class MyTimer
{

public:
    void wait(int seconds)
    {
        //* get current time
        //* static_cast is converting operator
        //* nullptr - null pointer
        int start_time = static_cast<int>(time(nullptr));

        //* if (current time - start time) < seconds then wait
        while (static_cast<int>(time(nullptr)) - start_time < seconds)
        {
        }
    }
};

#endif