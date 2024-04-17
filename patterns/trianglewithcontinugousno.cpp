#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int r;
     for(r=0;r<=n;r++){
          int i=1;
          for(int c=0;c<=r;c++){
               cout<<i<<" ";
               i=i+1;
          }cout<<endl;
     }
return 0;
}