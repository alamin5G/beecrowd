/**
 * @file beecrowd1789.cpp
 * see the problem - https://prnt.sc/ksGpcua54Tgo
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n, c, level = 0;
    while (scanf("%d", &n) != EOF)
    {
        level = 0;

        for (auto i = 1; i <= n; i++)
        {
            cin >> c;
            if(c>level){
                level = c;
            }
        }

        if(level<10){
            cout << 1 << endl;
        }else if(level>=10 && level<20){
            cout << 2 << endl;
        }else if(level>=20){
            cout << 3 << endl;
        }
    }
    
    return 0;
}