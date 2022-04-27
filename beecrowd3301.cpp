/**
 * @file beecrowd3301.cpp
 * Middle Nephew - https://prnt.sc/oxitdD7ZNebi
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, Z, L;

    cin >> H >> Z >> L;
    int arr[3] = {H, Z, L};
    sort(arr, arr+3);

    if (arr[1] == H)
    {
        cout << "huguinho" << endl;
    }
    else if (arr[1] == L)
    {
        cout << "luisinho" << endl;
    }
    else if (arr[1] == Z)
    {
        cout << "zezinho" << endl;
    }

    return 0;
}
