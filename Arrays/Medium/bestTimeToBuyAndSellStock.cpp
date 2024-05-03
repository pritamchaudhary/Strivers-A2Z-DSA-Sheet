// Best time to buy and sell stock

// You are given an array of integers 'prices' of size 'n', where ‘prices[i]’ is the price of a given stock on an ‘i’-th day. You want to maximize the profit by choosing a single day to buy one stock and a different day to sell that stock.

// Please note that you can’t sell a stock before you buy one.

#include<iostream>
#include<vector>
using namespace std;
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int n = prices.size();
    int mini = prices[0];
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}