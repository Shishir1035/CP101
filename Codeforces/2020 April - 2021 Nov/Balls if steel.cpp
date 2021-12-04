#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector< pair<int,int> > v;
        int a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            int cnt = 0;
            for(int j=0;j<n;j++)
            {
                int ans = abs(v[i].first-v[j].first) + abs(v[i].second-v[j].second);
                if(ans<=k)
                    cnt++;
            }
            if(cnt == n) flag = true;
        }
        flag? cout<<1<<"\n" : cout<<-1<<"\n";
    }
}