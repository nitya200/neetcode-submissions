class Solution {
   public:
    vector<int> FindNse(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> arr1(n);
        for (int i = n - 1; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] >= heights[i]){
                    st.pop();
            }
            if(st.empty()){
                   arr1[i]=n;
            }
            else{
                arr1[i]=st.top();
            }
            st.push(i);
        }
        return arr1;
    }
    vector<int> FindPse(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        vector<int> arr2(n);
        for (int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]){
                          st.pop();
            }
            if(st.empty()){
                   arr2[i]=-1;
            }
            else{
                arr2[i]=st.top();
            }
            st.push(i);
        }
        return arr2;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> Nse = FindNse(heights);
        vector<int> Pse = FindPse(heights);
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, heights[i] * (Nse[i] - Pse[i] - 1));
        }
        return maxi;
    }
};
