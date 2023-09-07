class Solution:
    def uniquePathsWithObstacles(self, lst: List[List[int]]) -> int:
        m = len(lst)
        n = len(lst[0])
        for i in range(m):
            for j in range(n):
                if lst[i][j] == 1:
                    lst[i][j] = -1
                elif i == 0 and j == 0 and lst[i][j] == 0:
                    lst[i][j] = 1
                elif i == 0:
                    if lst[i][j-1] != -1:
                        lst[i][j] = lst[i][j-1]
                elif j == 0:
                    if lst[i-1][j] != -1:
                        lst[i][j] = lst[i-1][j]
                else:
                    if lst[i-1][j] != -1 and lst[i][j-1] != -1:
                        lst[i][j] = lst[i-1][j] + lst[i][j-1]
                    elif lst[i][j-1] != -1:
                        lst[i][j] = lst[i][j-1]
                    elif lst[i-1][j] != -1:
                        lst[i][j] = lst[i-1][j]
        if lst[m-1][n-1] == -1:
            lst[m-1][n-1] = 0
        return lst[m-1][n-1]
