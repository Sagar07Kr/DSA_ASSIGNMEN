class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,1);
        int i=n-1;
        while(i>=0){
            if(st.empty())st.push(i--);
            else{
                if(arr[i]>arr[st.top()]){
                    while(!st.empty() && arr[i]>arr[st.top()]){
                        ans[st.top()]=(st.top()-i);
                        st.pop();
                    }
                    st.push(i--);
                }
                else st.push(i--);
            }
        }
        while(!st.empty()){
            ans[st.top()]=st.top()+1;
            st.pop();
            
        }
        return ans;
    }
};
