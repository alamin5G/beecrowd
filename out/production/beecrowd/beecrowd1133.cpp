/**
 * @file beecrowd1133.cpp
 * see the problems - https://prnt.sc/nR7q65HBtg7h
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(x>y){
        x = x +y;
        y = x - y;
        x = x - y;
    }
    for(auto i = x+1; i <y;i++)
    {
        if(i%5==2 || i%5==3){
            cout << i << endl;
        }
    }
    return  0;
}