/**
 * @file beecrowd1047.cpp
 * Game Time with Minutes - see the problem https://prnt.sc/7h8feC-hUWxb
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int startHour, startMin, endHour, endMin, durationHour, durationMin, duration;
    cin >> startHour >> startMin >> endHour >> endMin;

    duration = (endHour*60+endMin) - (startHour*60+startMin);


    if (duration<=0) duration = duration + 60*24;
    
    durationHour = duration/60;
    durationMin = duration%60;
    cout << "O JOGO DUROU " << durationHour << " HORA(S) E " << durationMin << " MINUTO(S)" << endl;
    

    return 0;
}
