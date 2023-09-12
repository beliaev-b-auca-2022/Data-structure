#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    vector<ll> a(5) , b(5);
    for(int i = 0;i < 5;i ++) {
        cin >> a[i];
    }
    for(int i = 0;i < 5;i ++) {
        cin >> b[i];
    }
    bool flag = true;
    for(int i = 0;i < 5;i ++) {
        if(a[i] == b[i]) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "Y" << endl;
    }
    else {
        cout << "N" << endl;
    }
    return 0;
}