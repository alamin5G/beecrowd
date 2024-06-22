/**
 * @file beecrowd2718.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2718
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long b;
    

    while (n--)
    {
        cin >> b;
        long long maxCons = 0;
        long long  len = 0;
        long long rem;
        while (b != 0)
        {
            rem = b % 2;
            if (rem == 1)
            {
                len++;
            }
            else
            {
                if (len > maxCons)
                {
                    maxCons = len;
                }
                len = 0;
            }

            b = b / 2;
        }

        if(len>maxCons){
            maxCons = len;
            len=0;
        }
        cout << maxCons <<endl;
    }

    return 0;
}