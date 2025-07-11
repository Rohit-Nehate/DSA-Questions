#include<iostream>
#include<vector>
using namespace std;

int majorityNum(vector<int>&vecs){

    for(int vec : vecs){
        int fr= 0;
        for(int vec1 : vecs){
            if(vec == vec1){
                fr++;
            }
        }
        if(fr>vecs.size()/2){
            return vec;
        }
        
    }
    

return -1;
}



int main(){
    vector<int> vecs = {1,1,2,2,1};
    
      cout<<majorityNum(vecs);


    return 0;
}