class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        if not mat or not mat[0]:
            return []

        m, n = len(mat), len(mat[0])
        que = deque()
        MAX_VALUE = m * n

        for i in range(m):
            for j in range(n):
                if mat[i][j] == 0:
                    que.append((i, j))
                else:
                    mat[i][j] = MAX_VALUE
        
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        while que:
            row, col = que.popleft()
            for x, y in directions:
                r, c = row + x, col + y
                if 0 <= r < m and 0 <= c < n and mat[r][c] > mat[row][col] + 1:
                    que.append((r, c))
                    mat[r][c] = mat[row][col] + 1
        
        return mat
