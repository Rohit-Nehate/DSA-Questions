#include<iostream>
using namespace std;


int main(){

int n = 7;
int arr[n]= {3,-4,-5,4,-1,7,8};
int maxSum =INT_MIN;
 int sum =0;
 for(int i=0; i<n;i++){
  
  sum = sum+arr[i];
  maxSum = max(sum, maxSum);

  sum = sum<0?0:sum; 
 }
 
cout<<maxSum;
return 0;

}