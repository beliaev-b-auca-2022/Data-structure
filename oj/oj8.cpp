#include <vector>

using namespace std;

struct PeakData {
  vector<int> pos, peaks;
};

PeakData pick_peaks(const std::vector<int> &v) {
  PeakData result;
  int n = v.size();
  int l = -1;
  int t = 0;
  for(int i = 1;i < n;i ++) {
    if(v[i - 1] < v[i]) {
      l = 1;
      t = i;
    }
    else if(v[i - 1] > v[i] && i - 1 != 0 && l == 1){
      result.pos.push_back(t);
      result.peaks.push_back(v[t]);
      l = -1;
    }
  }
  return result;
}