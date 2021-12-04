//#include<iostream>
//using namespace std;
//int main()
//{
//    int t,n;
//    while(t--)
//    {
//        cin>>n;
//        int num[n],i,flag=0;
//        for(i=0; i<n; i++)
//            cin>>num[i];
//        int check=num[0];
//        for(i=0; i<n; i++)
//        {
//            if(num[i]!=check)
//            {
//                flag=1;
//                break;
//            }
//        }
//        if(flag==0)
//            cout<<-1<<endl;
//        else
//        {
//            int posi[n],j=0,cnt=0;
//            int maxi=num[0];
//            for(i=1; i<n; i++)///maximum number
//            {
//                if(num[i]>maxi)
//                {
//                    maxi=num[i];
//                }
//            }
//            cout<<maxi<<endl;
//            for(i=0; i<n; i++)///all max number positions in another array
//            {
//                if(num[i]==maxi)
//                {
//                    posi[j]=i;
//                    j++;
//                    cnt++;
//                }
//            }
//            for(i=0;i<cnt;i++)
//                cout<<posi[i]<<" ";
//            cout<<endl;
//            for(i=0; i<cnt; i++)///condition check
//            {
//                if(posi[i]==0&&num[i+1]<posi[i])
//                {
//                    cout<<posi[i]+1<<endl;
//                    break;
//                }
//                else if(posi[i]==n-1&&num[i-1]<posi[i])
//                {
//                    cout<<posi[i]+1<<endl;
//                    break;
//                }
//                else if((num[i-1]<posi[i])||(num[i+1]<posi[i]))
//                {
//                    cout<<posi[i]+1<<endl;
//                    break;
//                }
//            }
//        }
//    }
//}



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define print(x) cout << #x << " = " << x << endl
#define pi acos(-1)
#define all(x) x.begin(),x.end()
const int mod = 1e9+7;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,ans,mx=0,I=-1;
        cin >> n;
        vector<int>a(n+1),vis(n+1);
        for( int i=1 ; i<=n ; i++ )
        {
            cin >> a[i];
            mx = max(a[i],mx);
        }
int f=1;
        if(f && a[1]==mx && a[1]>a[2]){
            I = 1;f=0;
        }
        if(f)
        for( int i=2 ; i<n ; i++ )
        {
            if(a[i]==mx && (a[i]>a[i+1] || a[i]>a[i-1])){
                I = i;f=0;break;
            }
        }
        if( f && a[n]==mx && a[n]>a[n-1])
            I = n;
        cout << I << endl;
    }
    return 0;
}
///sami r code

