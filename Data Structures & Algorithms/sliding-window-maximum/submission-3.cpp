class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefix(n,INT_MIN);
        vector<int>suffix(n,INT_MIN);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            if(i%k==0){
                prefix[i]=nums[i];
            }
            else{
                 prefix[i]=max(prefix[i-1],nums[i]);
            }
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if((i+1)%k==0){
                suffix[i]=nums[i];
            }
            else{
                suffix[i]=max(suffix[i+1],nums[i]);
            }
        }
        vector<int>result;
        result.push_back(prefix[k-1]);
        for(int i=k;i<n;i++){
            result.push_back(max(prefix[i],suffix[i-k+1]));
        }
        return result;
    }
};
