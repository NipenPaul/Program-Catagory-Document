class Solution {
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
        Integer inDegree[] = new Integer[n];
        for(int i = 0; i < n; i++){
            inDegree[i] = 0;
        }
        for(List<Integer>lst: edges){
           inDegree[lst.get(1)]++;
        }
        List<Integer> ansList = new ArrayList<Integer>();
        for(int i = 0; i < n; i++){
            if(inDegree[i] == 0){
                ansList.add(i);
            }
        }
        return ansList;
    }
}
