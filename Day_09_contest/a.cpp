#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    int sum = 0;
	    for(int i=0; i<n-1; i++){
	        if(v[i] < v[i+1]){
	            v[i+1] = v[i];
	            sum += v[i];
	        }else{
	            sum += v[i];
	        }
	        
	        
	    }
	    
	    sum += v[n-1];
	    
	    cout<<sum<<endl;
	    
	    
	}
}