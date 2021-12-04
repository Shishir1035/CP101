///https://codeforces.com/contest/1436/problem/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        float sum1=0,sum2=0;
        cin>>n>>m;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                sum1+=(float)(a[j])/(j+1);
            }
        }
        reverse(a,a+n);
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                sum2+=(float)(a[j])/(j+1);
            }
        }
        if(m>=sum1&&m<=sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
