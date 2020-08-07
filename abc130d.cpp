#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int inf = 1001001001;


int main(){
  ll n,k;
  cin >> n >> k;
  vector<ll> accum(n+1);

  for(int i = 1; i <=n; i++){
    ll a;
    cin >> a;
    accum[i] = accum[i-1]+a;
  }


  ll ans = 0;
  for(int i = 0; i<= n; i++){
    ll pos = lower_bound(accum.begin(),accum.end(), k+accum[i]) -accum.begin();
    ans += n-pos+1;
  }
  cout << ans << endl;
}
