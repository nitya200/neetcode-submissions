class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto num : nums){
            mp[num]++;
        }
        int x=n/3;
        vector<int>arr;
        for(auto i : mp){
            if(i .second > x){
                arr.push_back(i.first);
            }
        }
        return arr;
    }
};