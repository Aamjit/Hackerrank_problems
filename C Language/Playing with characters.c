#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 500

int main() 
{
    char ch,s[30],sen[500];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    
    return 0;
}

