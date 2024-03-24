// Move Zero's to End

// Problem statement
// Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.

// Example :
// Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
// Output: [1, 2, 2, 3, 0, 0]

// Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.

#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    for(int i=0; i<n; i++){
        if(a[i] == 0){
            j=i;
            break;
        }
    }
    // no non-zero numbers
    if(j == -1){
        return a;
    }
    for(int i=j+1; i<n; i++){
        if(a[i] != 0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}
