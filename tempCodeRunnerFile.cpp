#include<bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
const int N=1e7;
#define maxn 

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n+5];
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    int ans = 0, r =1;
    for(int i=1; i<=n; i++)
    {
        while(a[r] - a[i] <= 5 && r <= n) r++;
        ans = max(ans, r-i);
    }
    cout << ans;
    return 0;
}