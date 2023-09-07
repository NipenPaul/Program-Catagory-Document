#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int,null_type,less_equal<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        indexed_set s;
        int ans = INT_MAX;
        if(x == 0) return 0;
        
        for(int i = x; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        int k = 0;
        for(int i = x; i < nums.size(); i++){
            s.insert(nums[k]);
           int ind = s.order_of_key(nums[k]);
           if(ind > 0){
               auto xx = s.find_by_order(ind-1);
               ans = min(ans, abs(nums[k]-*xx));
           }
           if(s.size()-1 >= ind+1){
               auto xx = s.find_by_order(ind+1);
               ans = min(ans, abs(nums[k]-*xx));
           }

            auto it = s.find_by_order(s.order_of_key(nums[k]));

            if (it != s.end() && *it == nums[k]) {
                s.erase(it);
            }

            it = s.find_by_order(s.order_of_key(nums[i]));

            if (it != s.end() && *it == nums[i]) {
                s.erase(it);
            }

          k++;
        }
        return ans;
    }
};
