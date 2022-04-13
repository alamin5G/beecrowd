/**
 * @file beecrowd2747.cpp
 * output - 1 - https://prnt.sc/lFfa20RyECna
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
     
    char d = '-', l = '|';

    int i, r, c;

    for(i = 0;i < 39;i++)
    {
        cout << d;
    }
    cout << endl;

    for(r = 1;r <=5 ; r++)
    {
        for(c = 1;c <=39;c++)
        {
            if(c==1 || c == 39){
                cout << l;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(i = 0;i < 39;i++)
    {
        cout << d ;
    }

    cout << endl;

    return 0;
}