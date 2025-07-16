#include<iostream>
#include<vector>
using namespace std;


// function to calculate max profit

int calcMaxPofit(vector<int> &prices){
 
    int bestBuy = prices[0];
    int maxProfit = 0;
    int size = prices.size();


    //loop 

    for(int i =1; i<size; i++){
        maxProfit = max(maxProfit, prices[i]-bestBuy);
        bestBuy = min(bestBuy, prices[i]);
    }



return maxProfit;

}

// main function
int main(){
  vector<int> prices = {7,7,7,7,7,7};


cout<<calcMaxPofit(prices);
return 0;

}