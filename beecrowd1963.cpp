/**
 * @file beecrowd1963.cpp
 * see the problem - https://prnt.sc/nBC5CIuE0116
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
    double a, b, t, p;
    cin >> a >> b;
    t = b -a;
    p = (t*100)/a;
    cout << fixed << setprecision(2) << p << "%" << endl;
    return 0;
}