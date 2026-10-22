class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(int i = 0;i < strs.size();i++){
            string currStr = strs[i];
            int currSize = currStr.size();
            ans += to_string(currSize) + "#" + currStr;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int n = s.size();
        int i = 0;
        while(i < n){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = j-i;
            int currLen = stoi(s.substr(i,len));
            string currStr = s.substr(j+1,currLen);
            cout<<currLen<<" "<<currStr<<endl;
            ans.push_back(currStr);
            i = j + currLen + 1;
        }
        return ans;

    }
};
//   j
// i
// 0 1 2 3 4 5
// 4 # y e s s