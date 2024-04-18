#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int r;
     for(r=0;r<n;r++){
          for(int s=0;s<n-r-1;s++){
               cout<<" ";
          }
          for(int c=0;c<r+1;c++){
               //int i=1;
               if (r==0||r==n-1||c==0||c==r){
                    cout<<"* "<<" ";
               }
               else{
                    cout<<" ";
               }

          }cout<<endl;
     }
return 0;
}