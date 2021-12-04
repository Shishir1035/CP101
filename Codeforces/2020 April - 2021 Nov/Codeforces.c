#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,k,i,j,s=1;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int sum=0;
        scanf("%d",&n);
       for(i=1;i<=n;i++)
        {
            for(j=1;; j++)
            {
                sum=sum+pow(2,j-1)*s;
                if(sum==n)
                {
                    break;
                }
                else
                {
                    continue;
                }
                s++;
                if(sum==n)
                {
                    printf("%d\n",s);
                    break;
                }
            }
        }

    }
}
