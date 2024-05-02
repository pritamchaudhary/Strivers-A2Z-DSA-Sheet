// GFG -> Majority Element

// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.

                 // Method -> Hashing

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        map<int, int> mpp;
        for(int i=0; i<size; i++){
            mpp[a[i]]++;
        }
        for(auto it: mpp){
            if(it.second > size/2){
                return it.first;
            }
        }
        return -1;
    }
};

// optimal approach => Moore's voting algorithm

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int cnt = 0;
        int element;
        for(int i=0; i<size; i++){
            if(cnt == 0){
                cnt = 1;
                element = a[i];
            }
            else if(a[i] == element){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i=0; i<size; i++){
            if(a[i] == element){
                cnt1++;
            }
        }
        if(cnt1 > size/2){
            return element;
        }
        return -1;
    }
};