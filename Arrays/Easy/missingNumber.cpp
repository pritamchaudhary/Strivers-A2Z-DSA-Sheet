// Missing number in array

// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int XOR1 = 0;
        int XOR2 = 0;
        for(int i=0; i<n-1; i++){
            XOR2 = XOR2 ^ array[i];
            XOR1 = XOR1 ^ (i+1);
        }
        XOR1 = XOR1 ^ n;
        return XOR1 ^ XOR2;
    }
};
