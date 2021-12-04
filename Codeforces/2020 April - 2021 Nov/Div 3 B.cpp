#include<iostream>
using namespace std;
long long int ans1(long long int a,long long int b,long long int x,long long int y,long long int n)
{
        long long int diffa=a-x;
        long long int diffb=b-y;
        a=a-min(diffa,n);
        n=n-min(diffa,n);
        b=b-min(diffb,n);
        return a*b;
}
long long int ans2(long long int a,long long int b,long long int x,long long int y,long long int n)
{
        long long int diffa=a-x;
        long long int diffb=b-y;
        b=b-min(diffb,n);
        n=n-min(diffb,n);
        a=a-min(diffa,n);
        return a*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,x,y,n,ansone,anstwo;
        cin>>a>>b>>x>>y>>n;

        ansone=ans1(a,b,x,y,n);
        anstwo=ans2(a,b,x,y,n);

        if(ansone<anstwo)
            cout<<ansone<<endl;
        else
            cout<<anstwo<<endl;

    }
    return 0;
}
