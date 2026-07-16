class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count=0;
        for(auto num : nums){
            if(num < target){
                count++;
            }
        }
        return count;
    }
};