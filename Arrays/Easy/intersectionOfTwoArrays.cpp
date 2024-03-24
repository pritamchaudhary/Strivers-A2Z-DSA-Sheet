// Intersection of two arrays

// Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

// For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        vector<int> ans;
        sort(a, a+n);
        sort(b, b+m);
        int i=0;
        int j = 0;
        while(i<n && j<m){
            if(i>0 && a[i] == a[i-1]){ // if similar element in array 1
                i++;
                continue;
            }
            if(j>0 && b[j] == b[j-1]){ // if similar element in array 2
                j++;
                continue;
            }
            if(a[i] < b[j]){
                i++;
            }
            else if(a[i] > b[j]){
                j++;
            }
            else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans.size();
    }
};