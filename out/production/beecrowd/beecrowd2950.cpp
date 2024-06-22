/**
 * @file beecrowd2950.cpp
 * The Two Towers - 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    double icm =(double) n/(x+y);
    cout << fixed << setprecision(2) << icm << endl;

    return 0;
}