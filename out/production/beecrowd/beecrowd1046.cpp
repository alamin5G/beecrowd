/**
 * @file beecrowd1046.cpp
 * Game Time. see the problems https://prnt.sc/uejPfScAqDCZ.
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

int main(){
    int st, et, duration;
    cin >> st >> et;

    if(st<et){
        duration = et -st;
        cout << "O JOGO DUROU "<< duration << " HORA(S)"<<endl;
    } else if(et<st){
        duration = (24+et)-st;
        cout << "O JOGO DUROU "<< duration << " HORA(S)" << endl;
    }else if(et == st){
        duration = 24 - (et-st);
        cout << "O JOGO DUROU "<< duration << " HORA(S)" <<endl;
    }
    
    return 0;

}
