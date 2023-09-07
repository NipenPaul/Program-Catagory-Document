public class Solution {
    bool ok;
    public bool IsBipartite(int[][] graph) {
        int n = graph.Length;
        int[] color = new int[n];
        for(int i = 0; i < n; i++){
            color[i] = -1;
        }
        for(int i = 0; i < n; i++){
            if(color[i] == -1){
                ok = true;
                dfs(i, 0, color, graph);
                if(ok == false) return false;
            }
        }
        return true;
    }
    public void dfs(int u, int c, int[] color, int[][] graph){
        color[u] = c;
        foreach(int v in graph[u]){
            if(color[v] == -1){
                dfs(v, c^1, color, graph);
            }else{
                if(color[u] == color[v]){
                    ok = false;
                }
            }
        }
    }
}
