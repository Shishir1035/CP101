#include <bits/stdc++.h>
#define pb push_back
#define MP make_pair
#define ALL(r) (r).begin(),(r).end()
#define pi 3.14159265358979323846
typedef long long int ll;
#define FOR(i,m,n) for(ll i=(ll)(m) ; i < (ll) (n) ; ++i )
#define FORN(i,m,n) for(ll i=(ll)(m-1) ; i >= (ll) (n) ; --i )
#define RUN_FAST ios::sync_with_stdio(false);
using namespace std;
void solve()
{
    ll a, b, c, d, m, n, p, q, r, x, y, z, aa, bb, cc, dd;
    ll i, j, k, l;
    ll cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, sum = 0, sum2 = 0, mx = LLONG_MIN, mn = LLONG_MAX;
    ll flag = 0, flag2 = 0;
    vector <char> vec1, vec2, vec3;
    string s1, s2, s3;

    char ch1, ch2, ch3;
    cin >> n >> k;

    FOR(i, 0, k)
    {
        FOR(j, i , k)
        {
            ch1 = i + 'a';
            ch2 = j + 'a';
            if (vec1.size() >= 2)
                ch3 = vec1[vec1.size() - 1];
            else
                ch3 = '?';

            if (ch1 != ch3)
                vec1.pb(ch1);
            vec1.pb(ch2);
        }
    }
    if (vec1.size() == 0)
        vec1.pb('a');

    FOR(i, 0, n)
    {
        x = i % vec1.size();
        cout << vec1[x] ;
    }
    cout << endl;
}

int main()
{
    RUN_FAST
    ll t = 1;
    while (t--)
        solve();
    return 0;
}
