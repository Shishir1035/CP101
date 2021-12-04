#include<stdio.h>
int main()
{
    int i,j;
    for(j=1; j<=1000; j++)
        for(i=1; i<=j; i++)
        printf("%d,",j);
}
