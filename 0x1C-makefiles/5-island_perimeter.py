#!/usr/bin/python3
"""
Defines the function island_perimeter(grid)
"""

def island_perimeter(grid):
    """
    Computes the perimeter of the island described in grid.

    Args:
        grid (List[List[int]]): A list of lists of integers, where 0 represents water
                                and 1 represents land. Grid cells are connected horizontally/
                                vertically (not diagonally). Grid is rectangular, with width
                                and height not exceeding 100. Grid is completely surrounded
                                by water, and there is one island (or nothing). The island
                                doesn’t have “lakes” (water inside that isn’t connected to the
                                water around the island).

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Count the number of neighbors that are water
                water_neighbors = 0
                if i > 0 and grid[i-1][j] == 0:  # Check top neighbor
                    water_neighbors += 1
                if j > 0 and grid[i][j-1] == 0:  # Check left neighbor
                    water_neighbors += 1
                if i < len(grid)-1 and grid[i+1][j] == 0:  # Check bottom neighbor
                    water_neighbors += 1
                if j < len(grid[i])-1 and grid[i][j+1] == 0:  # Check right neighbor
                    water_neighbors += 1
                
                # Update the perimeter accordingly
                perimeter += 4 - water_neighbors
    
    return perimeter

