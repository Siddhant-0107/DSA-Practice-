#include <bits/stdc++.h>
using namespace std;
#define int long long

int count_distinct_prime_factors(int n) {
    int cnt = 0;
    if (n % 2 == 0) {
        cnt++;
        while (n % 2 == 0) n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cnt++;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) cnt++;  // n itself is prime
    return cnt;
}

void solve() {
    int x, k;
    cin >> x >> k;

    int pf = count_distinct_prime_factors(x);
    if (pf >= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
