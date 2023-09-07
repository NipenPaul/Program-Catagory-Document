class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        inDegree = [0]*n
        for lst in edges:
            inDegree[lst[1]] += 1
        lst = []
        for i in range(0, n):
            if inDegree[i] == 0:
                lst.append(i)
        return lst
