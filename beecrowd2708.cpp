/**
 * @file beecrowd2708.cpp
 * see the problem - https://prnt.sc/Iv2ep63aU0sY
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, salida=0, vuelta=0, transport=0;
    string s;
    while(1){
        cin >> s;
        if(s=="ABEND") break;
        cin >> t;
        if(s=="SALIDA"){
            salida += t;
            transport++;
        }else if(s=="VUELTA"){
            vuelta += t;
            transport--;
        }
    }
    cout << salida-vuelta << endl;
    cout << transport << endl;

    return 0;
}