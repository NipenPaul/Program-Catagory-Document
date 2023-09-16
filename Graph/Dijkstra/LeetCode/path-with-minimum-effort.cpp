class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int rows = heights.size();
        int columns = heights[0].size();
        vector<vector<int>> dist(rows+1, vector<int>(columns+1, INT_MAX));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
       pq.emplace(0,0,0);
       dist[0][0] = 0;
       int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
       while(!pq.empty()){
           auto [effort, x, y] = pq.top();
           pq.pop();

           if(effort > dist[x][y]) continue;
           if(x == rows-1 && y == columns-1) return effort;

           for(auto &dir: directions){
               int nx = x+dir[0], ny = y+dir[1];
               if(nx >= 0 && nx < rows && ny >= 0 && ny < columns){
                   int new_effort = max(effort, abs(heights[x][y] - heights[nx][ny]));
                   if(new_effort < dist[nx][ny]){
                       dist[nx][ny] = new_effort;
                       pq.emplace(new_effort, nx, ny);
                   }
               }
           }
       
       }
       return -1; 
    }
};