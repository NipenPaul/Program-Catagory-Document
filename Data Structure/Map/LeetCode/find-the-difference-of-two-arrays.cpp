class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> mp1, mp2, mp3, mp4;
        vector<int> v1, v2;
        for(int &x: nums1){
            mp1[x] = 1;
        }
        for(int &x: nums2){
            mp2[x] = 1;
        }
        for(int &x: nums1){
            if(mp2[x] == 0 && mp3[x] == 0){
                mp3[x] = 1;
                v1.push_back(x);
            }
        }
        for(int &x: nums2){
            if(mp1[x] == 0 && mp4[x] == 0){
                mp4[x] = 1;
                v2.push_back(x);
            }
        }
        vector<vector<int>> v;
        v.push_back(v1);
        v.push_back(v2);
        return v;
    }
};
