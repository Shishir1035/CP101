#include<stdio.h>
int main()
{
    int t,a1,a2,b1,b2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a1,&b1);
        scanf("%d %d",&a2,&b2);

        if(a1+a2==b1+b2)
            printf("Yes\n");
        else if(a1+b2==a2+b1)
            printf("Yes\n");
        else
            printf("No\n")

        }
}
