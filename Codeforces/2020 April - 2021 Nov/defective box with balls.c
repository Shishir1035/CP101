#include<stdio.h>
int main()
{
    int n,a,b,i,sum=0,weight;
    printf("How many boxes : ");
    scanf("%d",&n);
    printf("Give other balls weight : ");
    scanf("%d",&a);
    printf("Give light balls weight : ");
    scanf("%d",&b);
    for(i=1; i<=n; i++)
    {
        sum+=i;
        printf("Take %d ball from box number %d\n",i,i);
    }
    printf("\nWeigh them on digital machine\nGive those balls weight : ");
    scanf("%d",&weight);
    printf("Defective box is %d no box\n",(sum*a-weight)/(a-b));
}

