public class Solution {
    public int MaximalNetworkRank(int n, int[][] roads) {
        int ans = 0;
        List<int>[] adj = new List<int>[n];
        for(int i = 0; i < n; i++){
            adj[i] = new List<int>();
        }
        Dictionary<(int, int), int> pairMap = new Dictionary<(int, int), int>();
        for(int i = 0; i < roads.Length; i++){
            adj[roads[i][0]].Add(roads[i][1]);
            adj[roads[i][1]].Add(roads[i][0]);
            pairMap[(roads[i][0], roads[i][1])] = 1;
            pairMap[(roads[i][1], roads[i][0])] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int cal = adj[i].Count + adj[j].Count;
                if(pairMap.TryGetValue((i, j), out int value)){
                    cal -= 1;
                }else if(pairMap.TryGetValue((j, i), out int val)){
                    cal -= 1;
                }
                ans = Math.Max(ans, cal);
            }
        }
        return ans;
    }
}
