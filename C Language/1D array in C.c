#include <stdio.h>

#include <stdlib.h>

int main()
 {

    int ar[1000],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }  
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }  
    printf("%d",sum);
    return 0;
}

