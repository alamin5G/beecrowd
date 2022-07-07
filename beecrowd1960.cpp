/**
 * @file beecrowd1960.cpp
 * see the problem - https://prnt.sc/h2PC0TNiwmOO
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int lnth;

    lnth = x.size();
    if(lnth==3)
    {
        if(x[0]=='1') printf("C");
        else if(x[0]=='2') printf("CC");
        else if(x[0]=='3') printf("CCC");
        else if(x[0]=='4') printf("CD");
        else if(x[0]=='5') printf("D");
        else if(x[0]=='6') printf("DC");
        else if(x[0]=='7') printf("DCC");
        else if(x[0]=='8') printf("DCCC");
        else if(x[0]=='9') printf("CM");
        if(x[1]=='1') printf("X");
        else if(x[1]=='2') printf("XX");
        else if(x[1]=='3') printf("XXX");
        else if(x[1]=='4') printf("XL");
        else if(x[1]=='5') printf("L");
        else if(x[1]=='6') printf("LX");
        else if(x[1]=='7') printf("LXX");
        else if(x[1]=='8') printf("LXXX");
        else if(x[1]=='9') printf("XC");
        if(x[2]=='1') printf("I");
        else if(x[2]=='2') printf("II");
        else if(x[2]=='3') printf("III");
        else if(x[2]=='4') printf("IV");
        else if(x[2]=='5') printf("V");
        else if(x[2]=='6') printf("VI");
        else if(x[2]=='7') printf("VII");
        else if(x[2]=='8') printf("VIII");
        else if(x[2]=='9') printf("IX");
    }
    else if(lnth==2)
    {
        if(x[0]=='1') printf("X");
        else if(x[0]=='2') printf("XX");
        else if(x[0]=='3') printf("XXX");
        else if(x[0]=='4') printf("XL");
        else if(x[0]=='5') printf("L");
        else if(x[0]=='6') printf("LX");
        else if(x[0]=='7') printf("LXX");
        else if(x[0]=='8') printf("LXXX");
        else if(x[0]=='9') printf("XC");
        if(x[1]=='1') printf("I");
        else if(x[1]=='2') printf("II");
        else if(x[1]=='3') printf("III");
        else if(x[1]=='4') printf("IV");
        else if(x[1]=='5') printf("V");
        else if(x[1]=='6') printf("VI");
        else if(x[1]=='7') printf("VII");
        else if(x[1]=='8') printf("VIII");
        else if(x[1]=='9') printf("IX");
    }
    else if(lnth==1)
    {
        if(x[0]=='1') printf("I");
        else if(x[0]=='2') printf("II");
        else if(x[0]=='3') printf("III");
        else if(x[0]=='4') printf("IV");
        else if(x[0]=='5') printf("V");
        else if(x[0]=='6') printf("VI");
        else if(x[0]=='7') printf("VII");
        else if(x[0]=='8') printf("VIII");
        else if(x[0]=='9') printf("IX");
    }
    printf("\n");
    return 0;
}