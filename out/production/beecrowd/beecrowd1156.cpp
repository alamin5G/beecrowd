/**
 * @file beecrowd1156.c
 * S Sequence II - see the problems https://prnt.sc/xWjfVR8OUpG2
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

int main()
{
    double i, s = 1, b = 2;

    for (i = 3; i < 40; i += 2)
    {
        s = s + i / b;
        b = b * 2;
    }
    cout << fixed << setprecision(2) << s << endl;

    return 0;
}