/**
 * @file beecrowd3342.cpp
 * see the problem - https://prnt.sc/BHy77IRbyWhs
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, black, white;
    cin >> n;

    black = floor((n * n) / 2);

    white = (n * n) - black;

    cout << white <<" casas brancas e " << black << " casas pretas" << endl;


    return 0;
}
