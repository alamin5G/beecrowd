/**
 * @file beecrowd1072.cpp
 * Interval 2 - see the problems - https://prnt.sc/asOu8wEd6nLD
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, x, in = 0, out = 0;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if(x>=10 && x<=20) in++;
        else out++;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;
    
    return 0; 
}
