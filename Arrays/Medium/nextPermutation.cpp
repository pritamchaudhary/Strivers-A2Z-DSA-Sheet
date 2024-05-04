// GFG -> Next Permutation

// Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int ind = -1;
        for(int i=N-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(arr.begin(), arr.end());
            return arr;
        }
        for(int i=N-1; i>ind; i--){
            if(arr[i] > arr[ind]){
                swap(arr[i], arr[ind]);
                break;
            }
        }
        reverse(arr.begin()+ind+1, arr.end());
        return arr;
    }
};