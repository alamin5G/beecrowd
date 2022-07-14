/**
 * @file beecrowd2057.cpp
 * see the problem - https://prnt.sc/k3XAW11Lof5i
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-15
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, f;
    cin >> s >> t >> f;
    int time = s + t + f;
    if(time < 0){
        time = time + 24;
    }
    time = time%24;
    cout << time << endl;

    return 0;
}