#define loop(i, n) for (int i = 0; i < n; i++)
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int r;
     loop(r,n){
          for(int j=0;j<n-r-1;j++){ //mirror reference 4-0-1=3 ,3rd *
               cout<<" ";
          }
          loop(c,r+1){
               cout<<"*"<<" ";
          }cout<<endl;
          }
          loop(r,n){
           for(int c=0;c<r;c++){
               cout<<" ";
          }
           for(int c=0;c<n-r;c++){
               cout<<"* ";
          }
            cout<<endl;
          }
            return 0;
          }
          
         
     
 

