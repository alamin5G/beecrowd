/**
 * @file beecrowd3140.cpp
 * Copying and Pasting Code
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string.h>
#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv)
{

    char string[1100];

    bool body = false;
    while (~scanf("%[^\n]%*c", string))
    {

        if (strstr(string, "<body>"))
        {

            body = true;
            continue;
        }

        if (body && strstr(string, "</body>"))
            body = false;

        if (body)
            puts(string);
    }

    return 0;
}