// Union of Two Sorted Arrays

// Union of two arrays can be defined as the common and distinct elements in the two arrays.
// Given two sorted arrays of size n and m respectively, find their union.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0;
        int j = 0;
        vector<int> unionArr;
        while(i<n && j<m){
            if(arr1[i] <= arr2[j]){
                if(unionArr.size() ==  0 || unionArr.back() != arr1[i]){
                    unionArr.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(j < m){
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
        while(i < n){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        return unionArr;
    }
};