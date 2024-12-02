#!/usr/bin/python3
"""Module defines an island perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island.
       0 represents water zone
       1 represents land zone

    Args:
        grid (list): input
    Returns:
        The perimeter of the island
    """

    height = len(grid)
    width = len(grid[0])
    corner = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    corner += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    corner += 1
    return size * 4 - corner * 2
