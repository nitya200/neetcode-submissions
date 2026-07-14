class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        int i=0;
        int n=path.length();
        while(i < n){
            while(i < n && path[i]=='/'){
                i++;
            }  
            string component="";
            while(i < n && path[i]!='/'){
                component+=path[i];
                i++;
            }
           if(component=="" || component=="."){
            continue;
           }
           else if(component==".."){
            if(!st.empty()){
            st.pop();
            }
           }
           else{
            st.push(component);
           }
        }
        stack<string>temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        string res="";
        while(!temp.empty()){
            res+="/"+temp.top();
            temp.pop();
        }
        if(res.empty()){
            return "/";
        }
        return res;
    }

};