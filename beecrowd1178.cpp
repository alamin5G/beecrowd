/**
 * @file beecrowd1178.cpp
 * Array Fill III - see the problems https://prnt.sc/cqWx5WU8ldJM
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, n[100];
    int i;

    cin >> x;
    for(i = 0;i < 100;i++)
    {
        n[i] = x;
        cout << "N[" << i <<"] = "<< fixed << setprecision(4) << n[i] << endl;
        x = x/2;
        
    }
    
    return 0;
}
