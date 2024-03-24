// Find the smallest and second smallest element in an array

// Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int smallestElement(int a[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i] < mini){
            mini = a[i];
        }
    }
    return mini;
}

int secondSmallest(int a[], int n){
    int smallest = a[0]; 
    int ssmallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> minAnd2ndMin(int a[], int n) {
    int smallest = smallestElement(a, n);
    int ssmallest = secondSmallest(a, n);
    if(ssmallest == INT_MAX){
        return {-1};
    }
    return {smallest, ssmallest};
}