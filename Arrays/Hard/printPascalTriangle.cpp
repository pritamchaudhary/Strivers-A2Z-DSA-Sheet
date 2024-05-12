// coding ninjas ->  Print Pascal’s Triangle

// Problem statement
// You are given an integer ‘N’. You need to return the first ‘N’ rows of Pascal’s triangle.

// Example:

// Input:
// N = 4
// Output:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// Explanation: The output matrix has the first four rows of Pascal’s Triangle. 

#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1; col<row; col++){
        ans = ans * (row - col);
        ans  = ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i=1; i<=N; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}