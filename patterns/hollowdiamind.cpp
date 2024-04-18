#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int r;
for(r=0;r<n;r++){
     for(int i=0;i<n-r-1;i++){
          cout<<" ";
     }
     for(int c=0;c<2*r+1;c++){
          if(c==0||c==2*r){
               cout<<"*";
          }else{
               cout<<" ";
          }
     }cout<<endl;
}
for(r=0;r<n;r++){
     for(int c=0;c<r;c++){
          cout<<" ";
     }
     for(int c=0;c<2*(n-r)-1;c++) {
          if(c==0||c==2*(n-r)-2){
               cout<<"*";
          }
          else{
               cout<<" ";
          }
     }cout<<endl;
}

return 0;
} 