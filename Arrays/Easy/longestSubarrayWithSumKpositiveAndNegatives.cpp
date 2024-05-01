// Longest Sub-Array with Sum K

// Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value K.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<long long, int> preSumMap;
        int sum = 0;
        int maxLen = 0;
        for(int i=0; i<N; i++){
            sum += A[i];
            if(sum == K){
                maxLen = max(maxLen, i+1);
            }
            int rem = sum - K;
            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    } 

};
