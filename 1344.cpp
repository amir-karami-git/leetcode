#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double Ahour = 30 * hour;
        if(hour==12){
            Ahour= 0;
        }
        Ahour = Ahour + (minutes*30.0/60);
        double Aminute = minutes/60.0 * 360;
        double res = abs(Ahour - Aminute);
        if(res>180){
            return 360 - res;
        }
        return res;
    }
};