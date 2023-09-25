#include <vector>
#include <algorithm>

using namespace std;

int solve (vector<int> v){
  int sum = 0 , l = 1;
  int n = v.size();
  for(int i = 0;i < n;i ++) {
    if(find(v.begin(),v.end(), -v[i]) == v.end()) {
      l ++;
    }
    sum += v[i];
  }
  
  return sum / (l - 1);
}