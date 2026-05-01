class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        unordered_set<int>numset(nums.begin(),nums.end());
        int longest=0;
        for(auto num : numset){
            if(!numset.count(num-1)){
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
