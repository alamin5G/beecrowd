/**
 * @file beecrowd1061.cpp
 * see the problem
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){

    string temp;
    int dayStart, startHour, startMin, startSec;
    int dayEnd, endHour, endMin, endSec;

    cin >> temp >> dayStart;
    cin >> startHour>> temp >> startMin >> temp >> startSec;
    cin >> temp >> dayEnd;
    cin >> endHour >> temp >> endMin >> temp >> endSec;


    startSec = endSec - startSec;
    startMin = endMin - startMin;
    startHour = endHour - startHour;
    dayStart = dayEnd - dayStart;

    if(startSec<0){
        startSec += 60;
        startMin--;
    }

    if(startMin<0){
        startMin+=60;
        startHour--;
    }

    if(startHour <0){
        startHour+=24;
        dayStart--;
        
    }
    cout << dayStart << " dia(s)" << endl;
    cout << startHour << " hora(s)" << endl;
    cout << startMin << " minuto(s)" << endl;
    cout << startSec << " segundo(s)" << endl;

    return 0;
}
