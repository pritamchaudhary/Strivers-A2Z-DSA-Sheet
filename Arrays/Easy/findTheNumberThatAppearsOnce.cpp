// GFG -> Find the element that appears once

// Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. Find the number occurring only once.

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
        int xorr = 0;
        for(int i=0; i<N; i++){
            xorr = xorr ^ A[i];
        }
        return xorr;
	}
};