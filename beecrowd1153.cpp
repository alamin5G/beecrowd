/**
 * @file beecrowd1153.cpp
 * Simple Factorial - see the problem https://prnt.sc/ChSQuvHTrZ0T
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, factorial = 1;

    cin >> n;

    for(i = 1; i <=n; i++){
        factorial = factorial * i;
        
    }
    cout << factorial << endl;

    return 0;
}