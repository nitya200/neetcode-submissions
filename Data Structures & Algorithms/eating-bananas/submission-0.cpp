class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        // int val=INT_MAX;
        while(low<=high){
             int mid=low+(high-low)/2;
             int mini=0;
             for(auto pile : piles){
                mini+=(pile+mid-1)/mid;
             }
             if(mini<=h){
                high=mid-1;
             }
             else{
                low=mid+1;
             }
        }
        return low;
    }
};
