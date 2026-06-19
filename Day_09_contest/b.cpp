#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>v(n);
	    
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    
	    for(int i=0; i<n-1; i++){
	        if(v[i] > v[i+1]){
	            int a = v[i];
	            
	            v[i] = v[i+1];
	            
	            v[i+1] = a + v[i];
	        }
	    }
	    
	    sort(v.begin(), v.end());
	    
	    cout<<v[n-1]<<endl;
	}
 
}