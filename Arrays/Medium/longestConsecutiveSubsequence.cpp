// GFG -> Longest consecutive subsequence

// Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        if (N == 0) return 0;
    
        //sort the array:
        sort(arr, arr+N);
        int lastSmaller = INT_MIN;
        int cnt = 0;
        int longest = 1;
    
        //find longest sequence:
        for (int i = 0; i < N; i++) {
            if (arr[i] - 1 == lastSmaller) {
                //a[i] is the next element of the
                //current sequence.
                cnt += 1;
                lastSmaller = arr[i];
            }
            else if (arr[i] != lastSmaller) {
                cnt = 1;
                lastSmaller = arr[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};