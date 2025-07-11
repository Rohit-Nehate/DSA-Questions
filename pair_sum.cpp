#include<iostream>
#include<vector>
using namespace std;


vector<int> pairSum(vector<int>&vec, int target){
vector<int> pair;
int start =0;
int end = start+1;

    while(start < vec.size()){

        if(vec.at(start)+vec.at(end)==target){
            pair.push_back(start);
            pair.push_back(end);
            return pair;
        }
        start++;
        end = start+1;
    }
    return pair;
}

int main(){
    vector<int> vec = {2,7,11,15};
     int target = 26;
    vector<int> ans = pairSum(vec, target);

    cout<<ans[0]<<'\t'<<ans[1];

return 0;
}