public class Solution {
    boolean ok = true;
    public boolean isBipartite(int[][] graph) {
        int n = graph.length;
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
        for(int v: graph[u]){
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
