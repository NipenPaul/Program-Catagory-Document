class Solution:
    def maximalNetworkRank(self, n: int, roads: List[List[int]]) -> int:
        adj = {}
        mp = {}
        
        for i in range(n):
            adj[i] = []

        for u, v in roads:
            adj[u].append(v)
            adj[v].append(u)
            mp[(u, v)] = 1
            mp[(v, u)] = 1

        ans = 0
        for i in range(n):
            for j in range(i+1, n):
                cal = len(adj[i]) + len(adj[j])
                if (i, j) in mp or (j, i) in mp:
                    cal -= 1
                ans = max(ans, cal)

        return ans
