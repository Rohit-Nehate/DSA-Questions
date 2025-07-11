#include<iostream>
#include<vector>
using namespace std;

int majorityNum(vector<int>&vecs){
 int ans=0,count =0;
 int n =vecs.size();
 
 for(int i =0; i<n; i++){
  
    if(count == 0){
        ans= vecs[i];
    }
    if(vecs[i]==ans){
        count++;
    }
    else{
        count--;
    }

 }

    
    

return ans;
}



int main(){
    vector<int> vecs = {1,1,2,2,1};
    
      cout<<majorityNum(vecs);


    return 0;
}