// leetcode 2149. Rearrange Array Elements by Sign

// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

// variety 1 -> equal no. of pos and neg
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posIndex = 0;
        int negIndex = 1;
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};


// variety 2 -> if no. of pos is more than no. of neg and vice versa 

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0; i<n; i++){
	        if(arr[i] >= 0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    if(pos.size() > neg.size()){
	        for(int i=0; i<neg.size(); i++){
	            arr[2*i] = pos[i];
	            arr[2*i+1] = neg[i];
	        }
	        int index = neg.size() * 2;
	        for(int i=neg.size(); i<pos.size(); i++){
	            arr[index] = pos[i];
	            index++;
	        }
	    }
	    else{
	        for(int i=0; i<pos.size(); i++){
	            arr[2*i] = pos[i];
	            arr[2*i+1] = neg[i];
	        }
	        int index = pos.size() * 2;
	        for(int i=pos.size(); i<neg.size(); i++){
	            arr[index] = neg[i];
	            index++;
	        }
	    }
	}
};
