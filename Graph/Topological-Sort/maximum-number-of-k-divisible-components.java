class Solution {
    public int maxKDivisibleComponents(int n, int[][] edges, int[] values, int k) {
        if (n < 2) {
            return 1;
        }

        int ans = 0;
        List<List<Integer>> adj = new ArrayList<>();
        int [] inDegree = new int[n];
        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<>());
        }

        for (int[] edge : edges) {
            int u = edge[0], v = edge[1];
            adj.get(u).add(v);
            adj.get(v).add(u);
            inDegree[u]++;
            inDegree[v]++;
        }

        long[] longValues = new long[n];
        for (int i = 0; i < n; i++) {
            longValues[i] = values[i];
        }

        Queue<Integer> que = new LinkedList<>();
        for (int u = 0; u < n; u++) {
            if (inDegree[u] == 1) {
                que.offer(u);
            }
        }

        while (!que.isEmpty()) {
            int u = que.poll();
            inDegree[u]--;
            long val = 0;
            if (longValues[u] % k == 0) {
                ans++;
            } else {
                val = longValues[u];
            }

            for (int v : adj.get(u)) {
                if (inDegree[v] == 0) {
                    continue;
                }

                inDegree[v]--;
                longValues[v] += val;

                if (inDegree[v] == 1) {
                    que.offer(v);
                }
            }
        }

        return ans;
    }
}