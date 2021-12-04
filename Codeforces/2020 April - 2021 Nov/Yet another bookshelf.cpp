#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        int z=0,pos1=0,pos2=0,one=0;
        cin>>n;
        int num[n];
        for(i=0;i<n;i++)
            cin>>num[i];
        for(i=0;i<n;i++)
        {
            if(num[i]==1)
            {
                one++;
            }
        }
        if(one==1)
            cout<<0<<endl;
            else
                {
        for(i=0;i<n;i++)
        {
            if(num[i]==1&&pos1==0)
            {
                pos1=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(num[i]==1&&pos2==0)
            {
                pos2=i;
                break;
            }
        }
         for(i=pos1;i<=pos2;i++)
        {
            if(num[i]==0)
            {
                z++;
            }
        }
        cout<<z<<endl;

                }
    }
}
