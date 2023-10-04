#include <vector>

using namespace std;

vector<int> snail(const vector<vector<int>> &array) {
    vector<int> result;
    int top = 0, bottom = array.size() - 1, left = 0, right = array[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            result.push_back(array[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            result.push_back(array[i][right]);
        }
        right--;
        if (top <= bottom && left <= right) {
            for (int i = right; i >= left; i--) {
                result.push_back(array[bottom][i]);
            }
            bottom--;
            for (int i = bottom; i >= top; i--) {
                result.push_back(array[i][left]);
            }
            left++;
        }
    }
    return result;
}