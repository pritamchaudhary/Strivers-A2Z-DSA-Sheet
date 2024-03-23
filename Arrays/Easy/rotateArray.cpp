// Rotate Array

// Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

//{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
//     public:
    
//     //Function to rotate an array by d elements in counter-clockwise direction. 
//     void rotateArr(int arr[], int d, int n){
//         d = d % n;
//         int temp[d];
        
//         for(int i=0; i<d; i++){
//             temp[i] = arr[i];
//         }
//         for(int i=d; i<n; i++){
//             arr[i-d] = arr[i];
//         }
//         for(int i=n-d; i<n; i++){
//             arr[i] = temp[i-(n-d)];
//         }
//     }
// };

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        d = d%n;
        reverse(arr , arr+d);
        reverse(arr+d, arr+n);
        reverse(arr , arr+n);
    }
};
