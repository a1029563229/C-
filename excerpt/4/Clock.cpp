//
// Created by Macxdouble on 2020/1/2.
//

#include "Clock.h"
class Clock {
public:
    void SetTime(int NewH, int NewM, int NewS);
    void ShowTime();
private:
    int Hour, Minute, Second;
};
