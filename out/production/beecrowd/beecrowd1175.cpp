/**
 * @file beecrowd1175.c
 * Array change I - https://prnt.sc/5DzHqEQFFRrH
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N[20], i, temp[20], j;

    for (i = 0; i < 20; i++)
    {
        cin >> N[i];
    }

    for (i =0, j=19; i<20, j>=0; j--)
    {
        temp[i] = N[j];
        
        cout << "N[" << i << "] = " << temp[i] << endl;
        i++;
    }    
    
    return 0;
}
