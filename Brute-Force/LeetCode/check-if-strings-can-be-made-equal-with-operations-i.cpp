class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1 == s2) return true;
        string s3 = s1;
        swap(s3[0], s3[2]);
        if(s3 == s2) return true;
        s3 = s1;
        swap(s3[1], s3[3]);
        if(s3 == s2) return true;
        s3 = s1;
        swap(s3[0], s3[2]);
        swap(s3[1], s3[3]);
        if(s3 == s2) return true;
        return false;
    }
};
