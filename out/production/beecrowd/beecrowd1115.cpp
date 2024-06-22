/**
 * @file beecrowd1115.cpp
 * Quadrant - see the problems https://prnt.sc/qXGcZTU4q6kJ
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
    int x, y;

    while (true)
    {
        cin >> x >> y;
        if (x > 0 && 0 < y)
        {
            cout << "primeiro" << endl;
        }
        else if (x > 0 && y < 0)
        {
            cout << "quarto" << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << "terceiro" << endl;
        }
        else if (x < 0 && y > 0)
        {
            cout << "segundo" << endl;
        }else{
             break;
        }
    }

    return 0;
}