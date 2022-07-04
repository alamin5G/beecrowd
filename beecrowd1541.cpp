/**
 * @file beecrowd1541.cpp
 * see the problem - https://prnt.sc/HTbJ3SuvQMp6
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    while(1){
        int a, b, c, sq, percent, landSize;
        cin >> a;
        if(a==0){
            break;
        }else{
            cin >> b >> c;
            sq = a*b;
            percent = (sq*100)/c;
            landSize = pow(percent, .5);
            cout << landSize << endl;
        }
    }
    return 0;
}