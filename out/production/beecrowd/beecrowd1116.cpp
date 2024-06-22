/**
 * @file beecrowd1116.cpp
 * Dividing X by Y - see the problems https://prnt.sc/tCP7AUHOPMo8.
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
    double x, y; 
    int n;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else{
            cout << fixed << std::setprecision(1) << x/y << endl;
        }
           
    }

    return 0;
}