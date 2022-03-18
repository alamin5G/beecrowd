/**
 * @file beecrowd1142.cpp
 * PUM - see the problems https://prnt.sc/il8NUS2Wxs3R
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, i, j, count=1;
    cin >> x;

    for(i=1; i<=x; i++){
        for(j=1; j<=4; j++){
            if(j==4) cout << "PUM" << endl;
            else cout << count++ << " ";
        }
        count++;
    }

    return 0;
}
