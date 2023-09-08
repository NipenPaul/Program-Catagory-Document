class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> vec;
        vec.push_back(1);
        ans.push_back(vec);
        if(numRows == 1) return ans;
        vec.push_back(1);
        ans.push_back(vec);
        if(numRows == 2) return ans;
        for(int i = 3; i <= numRows; i++){
            vector<int> v;
            v.push_back(1);
            for(int j = 0; j < i-2; j++){
                v.push_back(vec[j]+vec[j+1]);
            }
            v.push_back(1);
            ans.push_back(v);
            vec = v;
        }
        return ans;
    }
};