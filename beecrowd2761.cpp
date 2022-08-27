/**
 * @file beecrowd2761.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2761
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
   int a;
	float b;
	char c;
	char d[50];

	scanf("%d %f %c %[^\n]", &a, &b, &c, d);

	printf("%d%f%c%s\n", a, b, c, d);
	printf("%d\t%f\t%c\t%s\n", a, b, c, d);
	printf("%10d%10f%10c%10s\n", a, b, c, d);
    return 0;
}