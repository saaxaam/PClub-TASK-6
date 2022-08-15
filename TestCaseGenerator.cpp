#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll series(ll a)
{
    return ((a) * (a + 1)) / 2;
}
int main()
{
    srand(time(NULL));
    ll m, c;
    m = 1 + (rand()%100);
    c = 1 + (rand()%1000);
    cout<<m<<endl<<c<<endl;
    ll ans = 0;
    for (int y = c; y >= 0; y--)
    {
        ll x = m * (c - y);
        ll sum = 0;
        sum += (x + 1) * series(y) + (y + 1) * series(x);
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}