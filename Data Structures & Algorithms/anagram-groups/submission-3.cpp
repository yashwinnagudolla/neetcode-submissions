class Solution {
public:
    map<int,int> createMap(string str){
        map<int,int> mp;
        for(int i = 0;i < str.size();i++){
            mp[str[i]]++;
        }
        return mp;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<int,int>,int> mp;
        map<int,int> currMap;
        vector<vector<string>> ans;
        int idx = 0;
        for(int i = 0;i< strs.size();i++){
            currMap = createMap(strs[i]);
            if(mp.find(currMap) != mp.end()){
                int currIdx = mp[currMap];
                ans[currIdx].push_back(strs[i]);
            }else{
                mp[currMap] = idx;
                ans.push_back({strs[i]});
                idx++;
            }
        }
        return ans;
        
        
    }
};
