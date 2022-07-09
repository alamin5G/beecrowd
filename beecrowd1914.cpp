/**
 * @file beecrowd1914.cpp
 * see the problem -https://prnt.sc/k1WferxfS6So
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, sum;
    string p, p2, par, impar;
    int q, r;
    cin >> t;
    while(t--){
        cin >> p >> par >> p2 >> impar;
        cin >> q >> r;
        sum = q + r;

        if(sum%2 == 0){
            if(par=="PAR"){
                cout << p << endl;
            }else{
                cout << p2 << endl;
            }
        }else{
            if(impar == "IMPAR"){
                cout << p2 << endl;
            }else{
                cout << p << endl;
            }
        }
    }
    return 0;
}