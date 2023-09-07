/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findSmallestSetOfVertices(int n, int** edges, int edgesSize, int* edgesColSize, int* returnSize){
    int i = 0, j = 0;
    int *inDegree = malloc(n*sizeof(int*));
    for(i = 0; i < n; i++){
        inDegree[i] = 0;
    }
    for(i = 0; i < edgesSize; i++){
        for(j = 1; j < *edgesColSize; j++){
           inDegree[edges[i][j]]++;
        }
    }
    int len = 0;
    for(i = 0; i < n; i++){
        if(inDegree[i] == 0){
            len++;
        }
    }
    int *ans = malloc(len*sizeof(int*));
    j = 0;
    for(i = 0; i < n; i++){
        if(inDegree[i] == 0){
            ans[j] = i;
            j++;
        }
    }
    *returnSize = len;
    return ans;
}
