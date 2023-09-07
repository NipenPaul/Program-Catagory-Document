bool ok;
void dfs(int u, int c, int *color, int** graph, int graphSize, int* graphColSize){
    color[u] = c;
    for(int i = 0; i < graphColSize[u]; i++){
        int v = graph[u][i];
        if(color[v] == -1){
            dfs(v, c^1, color, graph, graphSize, graphColSize);
        }else{
            if(color[u] == color[v]){
                ok = false;
            }
        }
    }
}
bool isBipartite(int** graph, int graphSize, int* graphColSize){
    int *color = malloc(graphSize*sizeof(int));
    for(int i = 0; i < graphSize; i++){
        color[i] = -1;
    }
    for(int i = 0; i < graphSize; i++){
        if(color[i] == -1){
            ok = true;
            dfs(i, 0, color, graph, graphSize, graphColSize);
            if(ok == false){
                return false;
            }
        }
    }
    return true;
}
