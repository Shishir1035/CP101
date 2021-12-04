#include<stdio.h>
int main()
{
    long long int t,a,b,diff;
    scanf("%lld",&t);
    while(t--)
    {
        int count=0;
        scanf("%lld %lld",&a,&b);
        if(a<b)
            diff=b-a;
        else
            diff=a-b;

        count=count+(diff/10);
        diff=diff%10;

        count=count+(diff/9);
        diff=diff%9;

        count=count+(diff/8);
        diff=diff%8;

        count=count+(diff/7);
        diff=diff%7;

        count=count+(diff/6);
        diff=diff%6;

        count=count+(diff/5);
        diff=diff%5;

        count=count+(diff/4);
        diff=diff%4;

        count=count+(diff/3);
        diff=diff%3;

        count=count+(diff/2);
        diff=diff%2;

        count=count+diff;

        printf("%d\n",count);
    }
    return 0;
}
