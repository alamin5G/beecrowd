/**
 * @file beecrowd1075.cpp
 * see the problem - https://prnt.sc/XD0w2VNS8p9g
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;

    for (i = 1; i < 10000; i++)
    {
        if (i == 2)
        {
            cout << i << endl;
        }
        else if (i%n== 0)
        {
            cout << i + 2 << endl;
        }
    }

    return 0;
}