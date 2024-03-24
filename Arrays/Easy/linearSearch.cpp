//  Linear Search

// Problem statement
// You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.

// If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.

#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
