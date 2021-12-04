#include<stdio.h>
#define sz 100000
int main()
{
    int a[sz],i=0,j;
    while(~scanf("%d",&a[i]))
    {
        int k=i;
        int flag=0;
        for(j=0;j<k;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
            }
        }
        if(flag==0)
            printf("NO\n");
        else if(flag==1)
            printf("YES\n");
            i++;
    }
}


