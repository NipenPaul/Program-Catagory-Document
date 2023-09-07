class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1, high = 1e7;
        int ans = -1;
        while(low <= high){
            int mid = (low+high) / 2;
            double need = 0.0;
            for(int i = 0; i < dist.size(); i++){
                if(i+1 < dist.size())
                    need += (dist[i]+mid-1) / mid;
                else
                    need += ((double)dist[i] / (double)mid);
            }
            if(need <= hour){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
