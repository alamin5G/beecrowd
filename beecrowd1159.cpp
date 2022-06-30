/**
 * @file beecrowd1159.cpp
 * sum of consecutive even numbers https://prnt.sc/LWfkUGCclFd9
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    while (1)
    {
        int n, i = 0, sum = 0;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        else if (n % 2 == 0)
        {
            for (i = n; i <= n + 8; i += 2)
            {
                sum = sum + i;
            }
        }else{
            for (i = n+1; i <= n + 9; i += 2)
            {
                sum = sum + i;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
