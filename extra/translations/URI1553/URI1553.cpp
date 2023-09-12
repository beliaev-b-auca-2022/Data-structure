#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ll n = -1, k = -1;
    while(true) {
        cin >> n >> k;
        if(n == 0 && k == 0) {
            break;
        }
        vector<ll> v(101);
        for(int i = 0;i < n;i ++) {
            ll x;
            cin >> x;
            v[x] ++;
        }
        ll cnt = 0;
        for(int i = 1;i <= 100;i ++) {
            if(v[i] >= k) {
                cnt ++;
            } 
        }
        cout << cnt << endl;
    }
    return 0;
}