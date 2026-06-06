class Solution {
public:
    string minWindow(string s, string t) {
        int minlen=INT_MAX;
        int sIndex=-1;
        int n=s.length(),m=t.length();
        for(int i=0;i<n;i++){
            int hash[256]={0};
            for(char c : t){
                hash[c]++;
            }
            int count=0;
            for(int j=i;j<n;j++){
                if(hash[s[j]] > 0){
                    count++;
                }
                hash[s[j]]--;
                if(count == m){
                    if(j-i+1 < minlen){
                        minlen=j-i+1;
                        sIndex=i;
                    }
                    break;
                }
            }
        }
        // s.substr(sIndex,minlen);
        return sIndex==-1 ? "" : s.substr(sIndex,minlen);
    }
};
