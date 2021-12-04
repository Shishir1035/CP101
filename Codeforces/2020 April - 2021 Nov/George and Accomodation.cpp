///https://codeforces.com/problemset/problem/467/A
#include<iostream>
using namespace std;
int main()
{
    int a=0,n,p[110],q[110];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p[i]>>q[i];
    }
    for(int j=0; j<n; j++)
    {
        if(q[j]-p[j]>=2)
            a++;
    }
        cout<<a<<endl;
}
