#include <vector>

using namespace std;

typedef long long ll;

pair<size_t, size_t> two_sum(const vector<int>& numbers, int target) {
    ll n = numbers.size();
    ll x , y;
    for(int i = 0;i < n;i ++) {
      for(int j = i + 1;j < n;j ++) {
        if(numbers[i] + numbers[j] == target) {
          x = i , y = j;
        }  
      }
    }
    return {x, y};
}