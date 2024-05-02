// GFG -> Sort an array of 0s, 1s and 2s

// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high){
            if(a[mid] == 0){
                swap(a[low], a[mid]);
                low++;
                mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
    
};