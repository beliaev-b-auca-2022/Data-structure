#include <vector>

using namespace std;

vector<vector<int> > matrixAddition(vector<vector<int> > a,vector<vector<int> > b){
  int n = a.size();
  for(int i = 0;i < n;i ++) {
    for(int j = 0;j < n;j ++) {
      a[i][j] += b[i][j];
    }
  }
  return a;
}