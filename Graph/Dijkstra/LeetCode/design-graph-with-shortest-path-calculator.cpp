struct Node{
    int at, cost;
    Node(int _at, int _cost){
        at = _at;
        cost = _cost;
    }
};
bool operator<(Node A, Node B){
    return A.cost > B.cost;
}
struct Edge{
    int v, w;
};

class Graph {
public:
    vector<Edge> adj[105];
    priority_queue<Node> pq;
    int dist[105];
    int n;
    Graph(int nn, vector<vector<int>>& edges) {
        n = nn;
        for(auto &it: edges){
            adj[it[0]].push_back({it[1], it[2]});
        }
    }
    
    void addEdge(vector<int> it) {
        adj[it[0]].push_back({it[1], it[2]});
    }
    
    int shortestPath(int s, int d) {
        int inf = 2e9;
        for(int i = 0; i < n; i++){
            dist[i] = inf;
        }
        dist[s] = 0;
        pq.push(Node(s, 0));
        while(!pq.empty()){
            Node u = pq.top();
            pq.pop();
            if(u.cost != dist[u.at]){
                continue;
            }
            for(Edge e: adj[u.at]){
                if(dist[e.v] > u.cost+e.w){
                    dist[e.v] = u.cost+e.w;
                    pq.push(Node(e.v, dist[e.v]));
                }
            }
        }
        if(dist[d] == inf) return -1;
        return dist[d];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
