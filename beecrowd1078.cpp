/**
 * @file beecrowd1078.cpp
 * Multiplication Table - see the problems https://prnt.sc/C-EhnCmP83KS
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
    int n, i;
    cin >> n;

    for(i=1; i<=10; i++){
        cout << i << " x " << n << " = " <<i*n << endl;
    }

    return 0;
}

