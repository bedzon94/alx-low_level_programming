#!/usr/bin/python3
"""
Module that calculates the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    island_perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                island_perim += 1
    return island_perim
