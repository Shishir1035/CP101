// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		std::vector<ll> v(n);
// 		for (int i = 0; i < n; ++i)
// 		{
// 			int a;
// 			cin>>a;
// 			v[i]=a;
// 		}
// 		int k=0;
// 		while(v.size()!=2)
// 		{
// 			ll temp = v[k] ^ v[k+1];
// 			v.erase(v.begin()+k);
// 			v.erase(v.begin()+k);
// 			v.insert(v.end(), temp); 
// 		}
// 		if(v[0]==v[1])
// 			cout<<"YES\n";
// 		else
// 			cout<<"NO\n";
		
// 	}
// }

#include <bits/stdc++.h>
using namespace std;

#define Int long long
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
    int n;
    cin >> n;
    vector<int> v(n),L(n),R(n);
    for(int i = 0; i < n; ++i)
    	cin >> v[i];
  
    map<int, int> mp;
    for(int i = 0; i < n; ++i)
    {
        L[i+1] = L[i] ^ v[i];
    }
    for(int i = n-1; i >= 0; --i)
    {
        R[i-1] = R[i] ^ v[i];
    }
    vector<int> a;
    for(int i = 0; i < n-1; ++i){
        if(L[i] == R[i + 1])
        	a.push_back(L[i]);
    }
    int mx = 0;
    for(int i = 0; i < n; ++i)
    {
        int Xor = 0;
        int cnt = 0;
        for(int j = 0; j < n; ++j){
            Xor ^= v[j];
            if(Xor == L[i] && j != n){
                cnt++;
                Xor = 0;
            }
            else if(j == n-1 && Xor == L[i]){
                cnt++;
                mx = max(mx, cnt);
                Xor = 0;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        int Xor = 0;
        int cnt = 0;
        for(int j = 0; j < n; ++j){
            Xor ^= v[j];
            if(Xor == R[i]){
                cnt++;
                Xor = 0;
            }
            else if(j == n-1 && Xor == R[i]){
                cnt++;
                mx = max(mx, cnt);
                Xor = 0;
            }
        }
    }
    if(mx >= 2)cout << "YES" << endl;
    else cout << "NO" << endl;
   }
}