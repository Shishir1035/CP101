// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'
// #define pb push_back;
// #define print(x) cout<<x<<endl;
// #define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
// #define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
// #define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		std::vector<int> v(n);
// 		for (int i = 0; i < n; ++i)
// 			cin>>v[i];

// 		if(v[0] != n && v[n-1] != n)
// 			cout<<-1<<endl;

// 		else if(v[0] == n)
// 		{
// 			cout<<n<<" \n"[n==1];
// 			for (int i = n-1; i >= 1; --i)
// 				cout<<v[i]<<" \n"[i==1];	
// 		}
// 		else
// 		{
// 			for (int i = n-2; i >= 0; --i)
// 				cout<<v[i]<<" ";
// 			cout<<n<<endl;
// 		}
// 	}
// }

#include<stdio.h>

int main()
{
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
      int temp = n/20;
      int ans = temp;
      while(temp >= 4)
      {
          int rem = temp % 4;
          ans += temp / 4;
          temp = temp / 4;
          temp += rem;
      }
      printf("%d\n",ans);
  }
  return 0;
}