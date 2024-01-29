#include <iostream>

//* build timer
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

int main()
{
    std::cout << "Timer started.\n";

    int timer_duration = 5;
    wait(timer_duration);

    std::cout << "Timer finished.\n";

    return 0;
}