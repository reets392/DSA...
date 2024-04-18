loop(r,n){
          for(int j=0;j<n-r-1;j++){
               cout<<" ";
          }
          loop(c,r+1){
               if (r==0||r==n-1||c==0||c==r){
                    cout<<"* "<<" ";
               }
               else{
                    cout<<" ";
               }
               cout<<"*"<<" ";
          }cout<<endl;