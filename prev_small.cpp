//*  Author Sk  *//


#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
	int n;cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++){ //toptel //braintrust //
	    cin>>v[i];
	}

	//previous smaller element-->
    stack<int>st;
	int i=n-1;
	 vector<int>ans(n,-1);
	while(i>=0){
        if(st.empty())st.push(i),i--;
        else if(v[st.top()]>v[i]){
        	while(!st.empty() && v[st.top()]>v[i]){
        		ans[st.top()]=v[i];
        		st.pop();
        	}
        	st.push(i);i--;
        }
        else st.push(i),i--;
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