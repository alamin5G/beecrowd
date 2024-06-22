/**
 * @file beecrowd1176.cpp
 * Fibonacci Array - see the problem https://prnt.sc/VPhhbRZfYaHV
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long int a;
    //     cin >> a;
    //     int first = 0, last = 1, sum = 0, i;
        

    //     for (i = 2; i <= a; i++)
    //     {
    //             sum = first + last;
    //             first = last;
    //             last = sum;
            
    //     }
    //     if(a==0){
    //         cout << "Fib(" << a << ") = " << first << endl;
    //     }else if(a==1){
    //         cout << "Fib(" << a << ") = " << last << endl;
    //     }else
    //     {
    //         cout << "Fib(" << a << ") = " << sum << endl;
    //     }
        
    // }

    int t, n, i;
    long long int X[61];

    X[0] = 0;
    X[1] = 1;
    for ( i = 2; i < 61; i++)
    {
        X[i] = X[i-1]+X[i-2];
    }

    cin>> t;

    while (t--)
    {
        cin >> n;
        cout << "Fib(" << n << ") = " << X[n] << endl;
    }
    
    
    return 0;
}
