#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <bitset>
#include <deque>
#include <stack>

using namespace std;

typedef long long ll;

int main() {
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (a[i] >= a[j]) {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}