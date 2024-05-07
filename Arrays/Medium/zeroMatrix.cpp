// Problem statement
// You are given a matrix 'MATRIX' of dimension 'N' x 'M'. Your task is to make all the elements of row 'i' and column 'j' equal to 0 if any element in the ith row or jth column of the matrix is 0.

// Note:

// 1) The number of rows should be at least 1.

// 2) The number of columns should be at least 1.

// 3) For example, refer to the below matrix illustration: 

// optimal approach

#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int col0 = 1;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j] == 0){
				// mark the ith row 
				matrix[i][0] = 0;

				// mark the jth col
				if(j != 0){
					matrix[0][j] = 0;
				}
				else{
					col0 = 0;
				}
			}
		}
	}
	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			if(matrix[i][j] != 0){
				// check for col and row
				if(matrix[0][j] == 0 || matrix[i][0] == 0){
					matrix[i][j] = 0;
				}
			}
		}
	}
	if(matrix[0][0] == 0){
		for(int j=0; j<m; j++){
			matrix[0][j] = 0;
		}
	}
	if(col0 == 0){
		for(int i=0; i<n; i++){
			matrix[i][0] = 0;
		}
	}
	return matrix;
}

