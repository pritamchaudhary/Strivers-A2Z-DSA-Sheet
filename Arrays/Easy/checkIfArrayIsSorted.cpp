// Check if array is sorted

// Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=1; i<n; i++){
            if(arr[i] >= arr[i-1]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};