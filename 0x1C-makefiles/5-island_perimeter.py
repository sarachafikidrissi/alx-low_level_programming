#!/usr/bin/python3
"""This module provides a function
that return the perimeter of an island
"""


def island_perimeter(grid):
    """a function that returns island
    perimeter
    Arguements:
        grid (matrix): a list of lists
    """
    total = 0
    for row_idx, row in enumerate(grid):
        for col_idx, cell in enumerate(row):
            if cell == 1:
                total += 4
                if col_idx < len(row) - 1 and grid[row_idx][col_idx + 1] == 1:
                    total -= 2
                if row_idx < len(grid) - 1 and grid[row_idx + 1][col_idx] == 1:
                    total -= 2
    return total
