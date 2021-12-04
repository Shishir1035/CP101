#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int W,H,w,h,x1,x2,y1,y2,height,width;
        cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;

        height = abs(y1-y2);
        width = abs(x1-x2);

        if(h + height > H && w + width > W) 
        {
            cout << -1 << "\n";
            continue;
        }
        int ans = INT_MAX;

        int curans = max(y1, H-y2);   
        if(curans < h && h+height <= H) 
        	ans = h - curans;
        else if(curans >= h && h+height <= H) 
        	ans = 0;

        curans = max(x1, W-x2);
        if(curans < w && w+width <= W) 
        	ans = min(ans, w - curans);
        else if(curans >= w && w+width <= W) 
        	ans = 0;
        cout << ans << "\n";
    }
}