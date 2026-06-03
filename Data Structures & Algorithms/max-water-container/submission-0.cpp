class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int ans=INT_MIN;
        int result;
        while(i < j){
           result=(j-i)*min(heights[i],heights[j]);
           ans=max(ans,result);
           if(heights[i] < heights[j])i++;
           else j--;
        }
        return ans;
    }
};
