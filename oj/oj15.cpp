#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <bitset>

using namespace std;

typedef long long ll;

long long nextBigger(long long n) {
    string s = to_string(n);
    bool found = next_permutation(s.begin(), s.end());
    if (!found) {
        return -1; 
    }
    return stoll(s);
}