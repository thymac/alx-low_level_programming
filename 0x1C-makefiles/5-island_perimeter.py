#!/usr/bin/python3

def island_perimeter(grid):
    """
    Compute the perimeter of the island in the given grid.

    Args:
    - grid: a list of list of integers representing the grid of the island

    Returns:
    - the perimeter of the island
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check if the cell to the left is water or out of bounds
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check if the cell to the right is water or out of bounds
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # Check if the cell above is water or out of bounds
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check if the cell below is water or out of bounds
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
