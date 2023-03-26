#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    Args:
    - grid (list of list of int): the grid representing the island
    
    Returns:
    - The perimeter of the island
    """
    
    perimeter = 0
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # check top neighbor
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # check left neighbor
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # check bottom neighbor
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # check right neighbor
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1
                    
    return perimeter

