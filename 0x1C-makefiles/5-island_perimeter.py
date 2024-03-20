#!/usr/bin/python3
"""Defines the island_perimeter function"""


def island_perimeter(grid):
    """A function that returns the perimeter of the island"""
    count = 0
    for row in grid:
        size = len(row)
        row.insert(0, 0)
        row.append(0)

    grid.insert(0, [0 for r in range(size + 2)])
    gird.append([0 for r in range(size + 2)])

    for en, row in enumerate(grid):
        for n, num in enumerate(row):
            if num == 1:
                if grid[en][n - 1] != 1:
                    count += 1
                if grid[en][n + 1] != 1:
                    count += 1
                if grid[en - 1][n] != 1:
                    count += 1
                if grid[en + 1][n] != 1:
                    count += 1

    return count
