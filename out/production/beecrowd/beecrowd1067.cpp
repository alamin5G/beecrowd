/**
 * @file beecrowd1067.cpp
 * see the problem - https://prnt.sc/2wzL_rhn0KTT
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, t;
    cin >> x;
    t = x;
    if (x % 2 != 0)
    {
        for (int i = 1; i <=t; i+=2)
        {
           cout << i << endl;
        }
    }else{
        for (int i = 1; i <t; i+=2)
        {
           cout << i << endl;
        }
    }

    return 0;
}
