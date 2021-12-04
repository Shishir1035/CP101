///https://codeforces.com/problemset/problem/1417/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,k,a[1010];
    cin>>t;
    while(t--)
    {
        int di=0;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=n-1; i>0; i--)
        {
            if(a[i]<k)
            {
                di+=(k-a[i])/a[0];
            }
            else
            {
                continue;
            }
        }
        cout<<di<<endl;
    }
}
