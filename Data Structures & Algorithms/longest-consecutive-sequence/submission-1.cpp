class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int>numset(nums.begin(),nums.end());
        for(auto num : nums){
            if(!numset.count(num-1)){
                // longest=1
                int countstreak=1;
                int countnum=num;
                while(numset.count(countnum+1)){
                     countnum++;
                    countstreak++;
                   
                }
                longest=max(longest,countstreak);
            }
        }
        return longest;
    }
};
