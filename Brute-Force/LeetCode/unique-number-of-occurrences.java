class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Set<Integer> set1 = new HashSet<>();
        Set<Integer> set2 = new HashSet<>();
        Map<Integer, Integer> mp = new HashMap<>();
        for(int x: arr){
            set1.add(x);
            mp.put(x, mp.get(x) == null ? 1: mp.get(x) + 1);
        }
        for(Map.Entry<Integer, Integer> entry: mp.entrySet()){
            set2.add(entry.getValue());
        }
        return set1.size() == set2.size();
    }
}
