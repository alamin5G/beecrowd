/**
 * @file beecrowd2510.cpp
 * see the problem - https://prnt.sc/S7WE7R4fuJUg
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-10
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        cout << ((s!="Batman")?("Y"):("N")) << endl;
    }
    return 0;
}