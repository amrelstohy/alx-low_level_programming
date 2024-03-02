#!/usr/bin/python3

"""
module
"""


def island_perimeter(grid):
    """
    function
    """
    c = 0
    a = len(grid)
    b = len(grid[0])
    for x in range(a):
        for y in range(b):
            if (grid[x][y] == 0):
                pass
            else:
                if (x - 1 < 0):
                    c = c + 1
                elif (grid[x-1][y] == 0):
                    c = c + 1
                else:
                    pass
                if (x + 1 > a - 1):
                    c = c + 1
                elif (grid[x+1][y] == 0):
                    c = c + 1
                else:
                    pass
                if (y - 1 < 0):
                    c = c + 1
                elif (grid[x][y - 1] == 0):
                    c = c + 1
                else:
                    pass
                if (y + 1 > b - 1):
                    c = c + 1
                elif (grid[x][y + 1] == 0):
                    c = c + 1
                else:
                    pass
    return c
