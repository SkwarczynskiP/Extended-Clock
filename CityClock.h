#ifndef CLOCK_H
#define CLOCK_H

using namespace std;

class CityClock{
private:
    int hours;
    int minutes;
    int seconds;
    bool is24Hour;
    bool isAM;

public:
    CityClock();
    CityClock(int, int, int);
    CityClock(int, int, int, bool, bool);
    void toggleFormat();
    void show();
    void tick();

};

#endif
