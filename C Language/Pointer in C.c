#include <stdio.h>

void update(int *a,int *b) 
{
   int *pa,*pb;
   *a=*a+*b;
   *b=abs(*a-(2**b));
   return (*pa,*pb);     
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

