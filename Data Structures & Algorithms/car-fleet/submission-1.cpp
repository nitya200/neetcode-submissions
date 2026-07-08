class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<vector<int>>cars;
        for(int i=0;i<n;i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());
        int fleets=0;
        double lastfeetTime=0;
        for(int i=n-1;i>=0;i--){
            int pos=cars[i][0];
            int spd=cars[i][1];
            double currentTime=(double)(target-pos)/spd;
            if(currentTime > lastfeetTime){
                fleets=fleets+1;
                lastfeetTime=currentTime;
            }
            else{
                continue;
            }
        }
        return fleets;
        
    }
};
