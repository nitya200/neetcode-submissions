class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       vector<pair<int,int>>diff;
       for(auto num : arr){
        diff.push_back({abs(num-x),num});
       }
       sort(diff.begin(),diff.end());
       vector<int>result;
       int i=0;
       while( k > 0){
             result.push_back(diff[i].second);
             i++;
             k--;
       }
       sort(result.begin(), result.end());
       return result;
    }
};