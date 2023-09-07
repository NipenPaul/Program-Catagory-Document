class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v;
        vector<int> cnt1(55, 0), cnt2(55, 0);
        for(int i = 0; i < A.size(); i++){
            cnt1[A[i]]++;
            cnt2[B[i]]++;
            int ct = 0;
            for(int j = 1; j <= 50; j++){
                if(cnt1[j] > 0 && cnt2[j] > 0){
                    ct++;
                }
            }
            v.push_back(ct);
        }
        return v;
    }
};
