/**
 * @file beecrowd2147.cpp
 * see the problem - https://prnt.sc/F-cRpAGny5_o
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    double time;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        double len = s.size();
        time = len/100.00;
        cout << fixed << setprecision(2) << time << endl;
    }

    return 0;
}