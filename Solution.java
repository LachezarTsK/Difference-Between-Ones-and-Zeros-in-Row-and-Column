
public class Solution {

    public int[][] onesMinusZeros(int[][] grid) {
        int rows = grid.length;
        int columns = grid[0].length;

        int[] totalOnesPerRow = new int[rows];
        int[] totalOnesPerColumn = new int[columns];

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < columns; ++c) {
                totalOnesPerRow[r] += grid[r][c];
            }
        }
        for (int c = 0; c < columns; ++c) {
            for (int r = 0; r < rows; ++r) {
                totalOnesPerColumn[c] += grid[r][c];
            }
        }
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < columns; ++c) {
                grid[r][c] = 2 * totalOnesPerRow[r] - rows + 2 * totalOnesPerColumn[c] - columns;
            }
        }

        return grid;
    }
}
