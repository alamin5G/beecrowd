/**
 * @file beecrowd1113.cpp
 * Ascending and Descending - see the problems https://prnt.sc/zcZXOy8iRMxg
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    while (true)
    {
        cin >> x >> y;
            if (x<y)
            {
                cout << "Crescente" << endl;
            } else if(x>y){
                cout << "Decrescente" << endl;
            } else if(x==y){
                break;
            }
    }

    return 0;
}