#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
    - grid (list of list of integers): Represents the island

    Returns:
    - int: The perimeter of the island.
    """
    island_width = len(grid[0])
    island_height = len(grid)
    shared_edges = 0
    island_size = 0

    for i in range(island_height):
        for j in range(island_width):
            if grid[i][j] == 1:
                island_size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    shared_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    shared_edges += 1

    return island_size * 4 - shared_edges * 2
