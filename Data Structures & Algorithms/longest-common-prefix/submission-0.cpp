class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
     int n=strs.size();
        string first=strs[0];
        for(int i=0;i<first.length();i++){
            char character=first[i];
            for(int j=0;j<n;j++){
                if(i >= strs[j].length()|| strs[j][i] !=character){
                    return res;
                }
               
            }
            res+=character;
        }
        return res;
    }
};