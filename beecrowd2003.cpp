/**
 * @file beecrowd2003.cpp
 * see the problem - https://prnt.sc/qGYsHPjiIPxE
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int time, max;
    while (scanf("%d:%d", &time, &max) != EOF)
    {   
        if(time<7 || (time==7 && max==0)){
            cout << "Atraso maximo: 0" << endl;
        }else{
            cout << "Atraso maximo: " << ((time+1)-8)*60+max << endl;
        }
    }
    return 0;
}