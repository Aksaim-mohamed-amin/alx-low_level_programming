#!/usr/bin/python3
"""Calculate the space on an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += check_top(grid, i, j)
                count += check_left(grid, i, j)
                count += check_botom(grid, i, j)
                count += check_right(grid, i, j)
    return count


def check_top(grid, i, j):
    """check the value above an area"""
    if i > 0:
        if grid[i - 1][j] == 1:
            return 0
    return 1


def check_left(grid, i, j):
    """check the value left an area"""
    if j > 0:
        if grid[i][j - 1] == 1:
            return 0
    return 1


def check_botom(grid, i, j):
    """check the value under an area"""
    if i < len(grid):
        if grid[i + 1][j] == 1:
            return 0
    return 1


def check_right(grid, i, j):
    """check the value right an area"""
    if j < len(grid[i]):
        if grid[i][j + 1] == 1:
            return 0
    return 1
