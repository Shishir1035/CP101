#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i = 1; i <= n; i++)
        cin>>v[i];
        
    int minn=v[1],maxx=v[1],minnpos=1, maxxpos=1;
    
    for(int i = 2; i <= n; i++)
    {
        if(v[i] > maxx)
            maxx = v[i], maxxpos = i;
        if(v[i] <= minn)
            minn = v[i], minnpos = i;
    }
    if(maxxpos > minnpos)
        cout<<maxxpos-1 + n-minnpos - 1<<endl;
    else if(maxxpos < minnpos)
        cout<<maxxpos-1 + n-minnpos<<endl;
}


