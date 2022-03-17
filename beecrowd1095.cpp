/**
 * @file beecrowd1095.cpp
 * Sequence IJ 1 - see the problem - https://prnt.sc/U7dzxdUvpUHe
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

int main()
{
    int i=1, j = 60;
    for (j = 60; j>=0; j-=5)
    {
        
        cout << "I=" << i << " J=" << j << endl;
       i = i + 3;
    }

    return 0;
}