#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Check if mid^k <= n (without overflow)
bool isValid(ll mid, ll n, ll k) {
    ll result = 1;

    for (int i = 0; i < k; i++) {
        if (result > n / mid) return false; // prevent overflow
        result *= mid;
    }

    return result <= n;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        ll n, k;
        cin >> n >> k;

        ll low = 1, high = n;
        ll ans = 0;

        while (low <= high) {
            ll mid = (low + high) / 2;

            if (isValid(mid, n, k)) {
                ans = mid;
                low = mid + 1; // try bigger x
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}