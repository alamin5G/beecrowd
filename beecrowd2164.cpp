/**
 * @file beecrowd2164.cpp
 * Fast Fibonacci - https://prnt.sc/AAaVPN5M82C0
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    double a, b, f;
    a = (1+sqrt(5))/2;
    b = (1-sqrt(5))/2;
    
    f = (pow(a, t) - pow(b, t))/sqrt(5);

    cout << fixed << setprecision(1) << f << endl;

    return 0;
}