class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        int hash[256]={0};
        int minlen=INT_MAX;
        int count=0;
        int sIndex=-1;
        int left=0;
        int right=0;
        for(char c : t){
            hash[c]++;
        }
        while(right < n){
            if(hash[s[right]]> 0) count=count+1;
            hash[s[right]]--;
            // count=count-1;
            while(count==m){
                if(right-left+1 < minlen){
                    minlen=right-left+1;
                    sIndex=left;
                }
                hash[s[left]]++;
                if(hash[s[left]] > 0){
                count=count-1;
                }
                left++;
            }
            right=right+1;
        }
       return sIndex==-1 ? "" : s.substr(sIndex,minlen);
    }
};
