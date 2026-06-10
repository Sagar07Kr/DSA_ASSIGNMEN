//*  Author Sk  *//


#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
	 
	 int n;cin>>n;
     vector<int>v(n);
	 for(int i=0;i<n;i++){
	     cin>>v[i];
	 }

	 //Next greater Element:--->
	 
	 stack<int>st;
	 vector<int>ans(n,-1);
	 int i=0;
	 while(i<n){
        if(st.empty())st.push(i),i++;
        else if(v[st.top()]<v[i]){
              while(!st.empty() && v[st.top()]<v[i]){
              	ans[st.top()]=v[i];st.pop();
              }
              st.push(i++);
        }
        else{
        	st.push(i);
        	i++;
        }
	 }
	 
	 for(auto x:ans)cout<<x<<" ";
	 	cout<<endl;
}

int32_t main(){
    
    int t=1;
    //  cin>>t;
    while(t--){
    solve();
    }
    return 0;
}