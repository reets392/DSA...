#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int r;
for(r=0;r<=n;r++){

     for(int c=0;c<=n;c++){
          if(r==0||r==n||c==0||c==n){
               cout<<"*";
          }
          else{
               cout<<" ";
          }
     }
     cout<<endl;
}
return 0;
}
