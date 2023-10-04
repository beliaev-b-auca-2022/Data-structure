#include <vector>

using namespace std;

vector<vector<int>> create_spiral(int n)
{
    if (n < 1) {
        return vector<vector<int>>();
    }
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int directionIdx = 0;  
    int num = 1;           
    int row = 0, col = 0; 
    for (int i = 0; i < n * n; ++i) {
        matrix[row][col] = num++;
        int nextRow = row + directions[directionIdx].first;
        int nextCol = col + directions[directionIdx].second;
        if (nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < n && matrix[nextRow][nextCol] == 0) {
            row = nextRow;
            col = nextCol;
        } else {
            directionIdx = (directionIdx + 1) % 4;
            row += directions[directionIdx].first;
            col += directions[directionIdx].second;
        }
    }
    return matrix;
}