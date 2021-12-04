// https://codeforces.com/problemset/problem/427/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int arr[100010];
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin>>v[i];

    int recrt = 0;
    for (int i = 0; i < n; ++i)
    {
        if(v[i]>0)
            recrt += v[i];
        else if(v[i]==-1 && recrt)
            v[i] = 0, recrt--;
    }
    int ans=0;
    for (int i = 0; i < n; ++i)
        if(v[i] == -1)
            ans++;
    cout<<ans<<endl;
}
