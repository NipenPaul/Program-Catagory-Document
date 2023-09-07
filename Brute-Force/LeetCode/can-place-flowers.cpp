class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int sz = v.size();
        for(int i = 0; i < sz; i++){
            if(v[i] == 0){
                if((i-1) >= 0 && (i+1) < sz){
                    //cout << i << endl;
                    if(v[i-1] == 0 && v[i+1] == 0 && n > 0){
                        //cout << i << endl;
                        v[i] = 1;
                        n--;
                    }
                }else if(i-1 >= 0){
                    if(v[i-1] == 0 && n > 0){
                        //cout << i << endl;
                        v[i] = 1;
                        n--;
                    }
                }else if(i+1 < sz){
                    if(v[i+1] == 0 && n > 0){
                        //cout << i << endl;
                        v[i] = 1;
                        n--;
                    }
                }else if(n > 0){
                    v[i] = 1;
                    n--;
                }
            }
        }
        //for(int x: v) cout << x << " ";
        //cout << endl;
        if(n == 0) return true;
        return false;
    }
};
