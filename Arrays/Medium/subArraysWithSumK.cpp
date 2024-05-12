// GFG -> Subarrays with sum K

// Given an unsorted array of integers, find the number of continuous subarrays having sum exactly equal to a given number k.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        int preSum = 0;
        int cnt = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        
        for(int i=0; i<N; i++){
            preSum += Arr[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        return cnt;
    }
};
