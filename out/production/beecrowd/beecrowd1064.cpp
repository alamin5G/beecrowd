/**
 * @file beecrowd1064.cpp
 * see the problems - https://prnt.sc/ThHqDjk3sjxX
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    float a[6];
    int count=0;
    float sum = 0, avg;
    for(auto i = 0;i < 6;i++)
    {
        cin >> a[i];
    }
    for(auto i = 0;i < 6;i++)
    {
        if (a[i]>=1)
        {
            count++;
            sum = sum + a[i];
        }  
    }
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum/count << endl;
    return 0;
}