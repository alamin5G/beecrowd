/**
 * @file beecrowd3040.cpp
 * see the problem - https://prnt.sc/nh70PRX8WMnj
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int h, d, b;
    while(t--){
        cin >> h >> d >> b;
        if((h>=200 && h<=300) && d>=50 && b>=150){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }

    }
    return 0;
}