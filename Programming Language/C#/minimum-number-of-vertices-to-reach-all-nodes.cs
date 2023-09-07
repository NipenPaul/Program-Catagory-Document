public class Solution {
    public IList<int> FindSmallestSetOfVertices(int n, IList<IList<int>> edges) {
        int [] inDegree = new int[n];
        for(int i = 0; i < n; i++){
            inDegree[i] = 0;
        }
        foreach(List<int> edge in edges){
            inDegree[edge[1]]++;
        }
        List<int> ansList = new List<int>();
        for(int i = 0; i < n; i++){
            if(inDegree[i] == 0){
                ansList.Add(i);
            }
        }
        return ansList;
    }
}
