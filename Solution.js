
/**
 * @param {number[][]} grid
 * @return {number[][]}
 */
var onesMinusZeros = function (grid) {
    const rows = grid.length;
    const columns = grid[0].length;

    const totalOnesPerRow = new Array(rows).fill(0);
    const totalOnesPerColumn = new Array(columns).fill(0);

    for (let r = 0; r < rows; ++r) {
        for (let c = 0; c < columns; ++c) {
            totalOnesPerRow[r] += grid[r][c];
        }
    }
    for (let c = 0; c < columns; ++c) {
        for (let r = 0; r < rows; ++r) {
            totalOnesPerColumn[c] += grid[r][c];
        }
    }
    for (let r = 0; r < rows; ++r) {
        for (let c = 0; c < columns; ++c) {
            grid[r][c] = 2 * totalOnesPerRow[r] - rows + 2 * totalOnesPerColumn[c] - columns;
        }
    }

    return grid;
};
