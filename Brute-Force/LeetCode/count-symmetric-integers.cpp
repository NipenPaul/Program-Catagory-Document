class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++){
            if(check(i)){
                ans++;
            }
        }
        return ans;
    }
    int check(int n){
        vector<int> v;
        while(n != 0){
            v.push_back(n % 10);
            n /= 10;
        }
        if(v.size() % 2 != 0){
            return false;
        }
        int f = 0, s = 0;
        for(int i = 0; i < v.size(); i++){
            if(v.size()/2 > i){
               // cout << v[i] << " ";
                f += v[i];
            }else{
                s += v[i];
            }
        }
        //cout << endl << endl;
        if(s == f) return true;
        return false;
    }
};
