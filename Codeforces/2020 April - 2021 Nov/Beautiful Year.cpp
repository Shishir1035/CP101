///https://codeforces.com/problemset/problem/271/A
#include<iostream>
using namespace std;
int check(int y)
{
    int a[4],rem,i=0,flag=0,j;
    while(y)
    {
        a[i]=y%10;
        y/=10;
        i++;
    }
    for(i=0; i<4; i++)
        for(j=i+1; j<4; j++)
        {
            if(a[i]==a[j])
                flag=1;
        }
    return flag;

}
int main()
{
    int y,flag1,flag2;
    cin>>y;
    int pos,neg;
    pos=y;
    neg=y;

positive:
    pos++;
    flag1=check(pos);
    if(flag1==1)
    {
        goto positive;
    }
//negative:
//    neg--;
//    flag2=check(neg);
//    if(flag2==1)
//    {
//        goto negative;
//    }
//   if(y-neg>=pos-y)
    cout<<pos<<endl;
//   else
//   cout<<neg<<endl;
}

