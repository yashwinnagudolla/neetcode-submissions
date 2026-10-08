class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1 = 0;
        int hash2 = 0;
        int n = s.size();
        int m = t.size();
        if(n != m){
            return false;
        }
        for(int i = 0;i < n;i++){
            int ascii1 = s[i];
            hash1 += (ascii1*ascii1);
            int ascii2 = t[i];
            hash2 += (ascii2*ascii2);
        }
        return hash1 == hash2;
    }
};
