#include<stdio.h>
int main()
{
    int n,i,j,count=0,arr[1000],k=0,temp,square=0;

    scanf("%d",&n);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            j=n/i;
            arr[k]=j+i;
            k++;
            count++;
        }

        if(i*i==n)
           {
               printf("%d\n",4*i);
               square=1;
           }
    }

    if(count==0)
        printf("%d\n",2*(n+1));

    for(i=0; i<count-1; i++)
    {
        for(j=i+1; j<count; j++)
            if( arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j] ;
                arr[j] = temp;
            }
    }
    if(square==0 && count !=0)
    printf("%d\n",2*arr[0]);

    return 0;
}
