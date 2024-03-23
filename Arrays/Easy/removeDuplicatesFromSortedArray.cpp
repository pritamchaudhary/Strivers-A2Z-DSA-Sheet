// Remove duplicate elements from sorted Array

// Given a sorted array a[] of size n, delete all the duplicated elements from a[] & modify the array such that only distinct elements should be present there.

// Note:
// 1. Don't use set or HashMap to solve the problem.
// 2. You must return the modified array size where only distinct elements are present in the array, the driver code will print all the elements of the modified array.

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i=0;
        for(int j=1; j<n; j++){
            if(a[j] != a[i]){
                a[i+1] = a[j];
                i++;
            }
        }
        return (i+1);
    }
};