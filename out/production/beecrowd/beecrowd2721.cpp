/**
 * @file beecrowd2721.cpp
 * see the problem - https://prnt.sc/TwQfG0a9jqVN
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int m = 9;
int main()
{
    string name[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int n[m];
    int sum = 0;
    for (auto i = 0; i < m; i++)
    {
        cin >> n[i];
        sum += n[i];
    }

    cout << name[(sum - 1) % 9] << endl;

    return 0;
}