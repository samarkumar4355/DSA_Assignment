// #include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
 int n;
 cin>>n;
 
  for(int i=1; i<=20; i++){
      if((n <= 5*i) && (n+1> 5*i)){
          cout<<"NO";
          return 0;
      }
  }
  
  cout<<"YES";
  return 0;

}
