/**
 * @file beecrowd1143.c
 * Squared and Cubic - see the problems https://prnt.sc/wXBhhSlupeY8
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, i, j, count = 1, num = 0;
    cin >> x;

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (j == 1) cout << count << " ";
            else if (j == 2)
            {
                num = count * count;
                cout << num << " ";
            }
            else if (j == 3) cout << count * num << endl;
        }
        count++;
    }

    return 0;
}
