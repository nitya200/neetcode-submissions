class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprice=INT_MAX;
        int maxprice=INT_MIN;
        for(auto num : prices){
            miniprice=min(miniprice,num);
            maxprice=max(maxprice,num-miniprice);
        }
        return maxprice;
    }
};
