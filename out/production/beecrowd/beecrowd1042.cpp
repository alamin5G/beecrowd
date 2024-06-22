/**
 * @file beecrowd1042.cpp
 * Simple Sort, see the problem: https://prnt.sc/c0lVuhO4z8Vh
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[3],t[3],i,p, temp;

    for(i=0; i<3; i++){
        scanf("%d", &a[i]);
        t[i] = a[i];
    }
    for(i=0; i<3; i++){
        for(p= i+1; p<3; p++){
            if (a[i]>a[p])
            {
                temp = a[i];
                a[i] = a[p];
                a[p] = temp;
            }
            
        }
    }

    for(i=0; i<3; i++){
        printf("%d\n", a[i]);
    }
    printf("\n");
    for(i=0; i<3; i++){
        printf("%d\n", t[i]);
    }
    return 0;
}