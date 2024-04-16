//
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;//no. of lines
     cin>>n;
     int r=0;//define rows
     while (r<n){ //structure till r <=n
          int c=1; //define col
          //int d=n-r;
          while(c<=n-r){ //logic col according run /
               cout<<"*"<<" ";
               c=c+1;
          }r=r+1;
          cout<<endl;
     }
     
return 0;
}