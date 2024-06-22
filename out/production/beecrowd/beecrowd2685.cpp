/**
 * @file beecrowd2685.cpp
 * see the problem - https://prnt.sc/48Bgc5rC_eRu
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    while(cin >> x){
        x %= 360;
        if(x<90 && x>=0)
            printf("Bom Dia!!\n");
        else if(x>=90 && x<180)
            printf("Boa Tarde!!\n");
        else if(x>=180 && x<270)
            printf("Boa Noite!!\n");
        else if(x>=270 && x<360)
            printf("De Madrugada!!\n");
    }
    return 0;
}