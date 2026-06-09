class Solution {
public:
    int calPoints(vector<string>& operations) {
        // vector<int>result;
        stack<int>st;
        for(auto c : operations){
           if(c=="+"){
            int b=st.top();
            st.pop();
            int a=st.top();
            st.push(b);
            st.push(a+b);
           }
           else if(c=="D"){
            st.push(2*st.top());
           }
           else if(c=="C"){
            st.pop();
           }
           else{
            st.push(stoi(c));
           }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};