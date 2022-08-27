/**
 * @file beecrowd3084.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/3084
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    while (cin >> h >> m)
    {
        int th, tm;
        th = h / 30;
        tm = m / 6;

        if (th < 10)
        {
            cout << "0" << th;
        }
        else
        {
            cout << th;
        }

        if (tm < 10)
        {
            cout << ":0" << tm << endl;
        }
        else
        {
            cout << ":" << tm << endl;
        }
    }

    return 0;
}