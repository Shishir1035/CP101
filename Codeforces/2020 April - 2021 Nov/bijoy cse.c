#include<stdio.h>
int main()
{
    int a,b,c,l,p,pen,pncl,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        int x=0,y=0;
        scanf("%d %d %d %d",&l,&p,&pen,&pncl,&c);
        if(l<=pen)
        {
            x=1;
        }
        else
        {
            for(i=l; i>=0; i-=pen)
            {
                x++;
            }
        }
        if(p<=pncl)
        {
            y=1;
        }
        else
        {
            for(i=p; i>=0; i-=pncl)
            {
                y++;
            }
        }
        if(x+y>c)
        {
            printf("-1");
        }
        printf("%d %d\n",++x,++y);

    }
}
