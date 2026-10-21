class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq(2001,0);
        for(int i = 0;i < nums.size();i++){
            int currNum = nums[i];
            freq[currNum+1000]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i = 0;i < freq.size();i++){
            pq.push(make_pair(freq[i],i-1000));
            while(pq.size() > k){
                pq.pop();
            }
        }

        vector<int> ans;
        while(!pq.empty()){
            pair<int,int> curr = pq.top();
            pq.pop();
            ans.push_back(curr.second);
        }
        return ans;
    }
};
