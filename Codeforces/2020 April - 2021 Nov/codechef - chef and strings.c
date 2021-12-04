#include<stdio.h>
#include<math.h>

int num[1000000];

int main()
{
    int t,n,i,j;
    scanf("%d",&t);

    while(t--)
    {
        int sum=0;
        scanf("%d",&n);

        for(i=0; i<n; i++)
            {
                scanf("%d",&num[i]);
            }

        for(i=0,j=1; i<n-1,j<n; i++,j++)
        {
            if(num[i]==num[j])
                break;

            else
            sum=sum+(abs(num[j]-num[i])-1);
        }

        printf("%d\n",sum);
    }
    return 0;
}
