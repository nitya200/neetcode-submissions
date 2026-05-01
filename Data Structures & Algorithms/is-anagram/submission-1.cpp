class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>map1;
        for(int i=0;i<s.length();i++){
            map1[s[i]]++;
        }
        unordered_map<char,int>map2;
        for(int j=0;j<t.size();j++){
            map2[t[j]]++;
        }
        return map1==map2;
    }
};
