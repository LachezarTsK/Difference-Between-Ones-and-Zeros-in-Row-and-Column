
#include <vector>
using namespace std;

class Solution {
    
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) const {
        size_t rows = grid.size();
        size_t columns = grid[0].size();

        vector<int> totalOnesPerRow(rows);
        vector<int>totalOnesPerColumn(columns);

        for (size_t r = 0; r < rows; ++r) {
            for (size_t c = 0; c < columns; ++c) {
                totalOnesPerRow[r] += grid[r][c];
            }
        }
        for (size_t c = 0; c < columns; ++c) {
            for (size_t r = 0; r < rows; ++r) {
                totalOnesPerColumn[c] += grid[r][c];
            }
        }
        for (size_t r = 0; r < rows; ++r) {
            for (size_t c = 0; c < columns; ++c) {
                grid[r][c] = 2 * totalOnesPerRow[r] - rows + 2 * totalOnesPerColumn[c] - columns;
            }
        }

        return grid;
    }
};
