/**
 * @file beecrowd1097.cpp
 * Sequence IJ 3 - see the problems https://prnt.sc/hoS8ZGM5Z-De
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
    int i, j, a, b = 7;
    for(i=1; i<=9; i+=2){
        for(j=1, a=b; j<=3; j++, a--){
            cout << "I="<<i<< " J="<<a << endl;
        }
        b = b + 2;

    }

    return 0;
}
