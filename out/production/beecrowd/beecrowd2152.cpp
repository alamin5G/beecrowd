/**
 * @file beecrowd2152.cpp
 * Pepe, I Already Took the Candle! - https://prnt.sc/984oS4tTH_cX
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
    int t;
    cin >> t;
    while (t--)
    {
        int h, m, o;
        cin >> h >> m >> o;
        if(h<10){
            cout << "0" << h << ":";
        }else{
            cout << h << ":";
        }

        if (m<10)
        {
            cout << "0" << m ;
        }else
        {
            cout << m ;
        }

        if (o==0)
        {
            cout << " - A porta fechou!" << endl;
        }else
        {
            cout << " - A porta abriu!" << endl;
        }

        
    }

    return 0;
}