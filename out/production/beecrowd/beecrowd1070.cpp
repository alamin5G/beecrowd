/**
 * @file beecrowd1070.cpp
 * Six Odd Numbers - see the problems https://prnt.sc/giJQu23XcOFm
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
    int x, i = 0;
    cin >> x;
    
    while(i<6){
        if(x%2 != 0){
            cout << x << endl;
            i++;
        }
        x++;
    }
}