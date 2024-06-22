/**
 * @file beecrowd1962.cpp
 * see the problem - https://prnt.sc/Kgdt6kct0g1r
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
int main()
{
    int t, d;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;

        if (a < 2015)
        {
            d = 2015 - a;
            cout << d << " D.C." << endl;
        }
        else
        {
            d= a - 2014;
            cout << d << " A.C." << endl;
        }
    }
    return 0;
}