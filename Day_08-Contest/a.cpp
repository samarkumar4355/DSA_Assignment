#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int cnt = 0;
	    
	    vector<int>v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    
	    int i =0;
	    int j =1;
	    
	    for(int l =0; i!=n-1 ;l++ ){
	        int sum = 0;
	        for(int m =0; m<n; m++){
	             if( m!= i && m != j){
	                 sum += v[m]/2;
	             }
	        }
	        
	        sum = sum + v[i] + v[j];
	        if(sum > k)cnt++;
	        
	       
	        
	        if(j == n-1){
	            i++;
	            j = i+1;
	        }else{
	             j++;
	        }
	        
	        
	        
	    }
	    
	    cout<<cnt<<endl;
	}

}
