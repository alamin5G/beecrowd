/**
 * @file beecrowd1837.cpp
 * see the problem - https://prnt.sc/lVbuyN_Y7EHY
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-05
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,e,f,q,r;
    cin >> a >> b;
    if(a<0)
    {
        e=b;
        if(b<0){
            e=b*-1;
        } 
        for(r=0; r<e; r++)
        {
            f=a-r;
            if(f%b==0) break;
        }
        q=f/b;
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    cout << q << " " << r << endl;

    return 0;
}