/**
 * @file beecrowd1118.cpp
 * see the problem - https://prnt.sc/KkWshECpo_ex
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, c = 1, sum = 0;
    int confirm;
    while (cin >> a)
    {

        if (a < 0 || a > 10.0)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            sum = (sum + a);
            if (c == 2)
            {
                cout << "media = " << fixed << setprecision(2) << sum / c << endl;
                c=0;
                sum = 0;
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> confirm;
                if(confirm==2){
                    break;
                }
                while (confirm != 1)
                {
                    cout << "novo calculo (1-sim 2-nao)" << endl;
                    cin >> confirm;
                }
            }
            c++;
        }
        if (confirm == 2)
        {
            break;
        }
    }

    return 0;
}