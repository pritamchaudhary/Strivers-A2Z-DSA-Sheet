// GFG -> Leaders in an array

// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        int maxi = INT_MIN;
        for(int i=n-1; i>=0; i--){
            if(a[i] >= maxi){
                ans.push_back(a[i]);
            }
            maxi = max(maxi, a[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};