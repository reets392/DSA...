#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int r;
     for(r=0;r<n;r++){
          for(int c=0;c<=r;c++){
               int i=1;
               if (r==0||r==n-1||c==0||c==r){
                    cout<<c+1;
               }
               else{
                    cout<<" ";
               }

          }cout<<endl;
     }
return 0;
}