#include <vector>

using namespace std;

vector<int> move_zeroes(const vector<int>& input) {
    vector<int> v;
    int n = input.size();
    int cnt = 0;
    for(int i = 0;i < n;i ++) {
      if(input[i] != 0) {
        v.push_back(input[i]);
      }
      else {
        cnt ++;
      }
    }
    for(int i = 0;i < cnt;i++) {
      v.push_back(0);
    }
    return v;
}