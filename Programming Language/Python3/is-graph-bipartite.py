class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n = int(len(graph))
        color = [-1]*n
        for i in range(0, n):
            if color[i] == -1:
                self.ok = True
                self.dfs(i, 0, color, graph)
                if self.ok == False:
                    return False;
        return True;
    def dfs(self, u, c, color, graph):
        color[u] = c
        for v in graph[u]:
            if color[v] == -1:
                self.dfs(v, c^1, color, graph)
            else:
                if color[u] == color[v]:
                    self.ok = False
