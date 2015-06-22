/***************************************************************************
Name: Chua Ruiwen Raymond


compile: make maxSubarray
execute: ./maxSubarray

Input Format:
First line of the input has an integer T. T cases follow. 
Each test case begins with an integer N. 
In the next line, N integers follow representing the elements of array A.

Output Format:
Two, space separated, integers denoting the maximum contiguous and non-contiguous subarray. 
At least one integer should be selected and put into the subarrays 
(this may be required in cases where all elements are negative).

Sample Input:
2 
4 
1 2 3 4
6
2 -1 2 3 4 -5

Sample Output:
10 10
10 11

Explanation

In the first case: 
The max sum for both contiguous and non-contiguous elements is the sum of ALL the elements 
(as they are all positive).

In the second case: 
[2 -1 2 3 4] --> This forms the contiguous sub-array with the maximum sum. 
For the max sum of a not-necessarily-contiguous group of elements, 
simply add all the positive elements.

Sample Input 2:
6
1
1
6
-1 -2 -3 -4 -5 -6
2
1 -2
3
1 2 3
1
-10
6
1 -1 -1 -1 -1 5

Sample Output 2:
1 1
-1 -1
1 1
6 6
-10 -10
5 6


**********************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxContiguous(int arr[], int size){

	int current_sum = 0;
	int best_sum = 0;

	int current_start_index = -1;
	int best_start_index = -1;
	int best_end_index = -1;

	int max_min = arr[0];

	for(int i = 0; i < size; i++){

		int value = current_sum + arr[i];

		if (value > 0){
			if (current_sum == 0){
				current_start_index = i;
			}

			current_sum = value;

		}

		else{
			current_sum = 0;
		}

		if (current_sum > best_sum){
			best_sum = current_sum;
			best_start_index = current_start_index;
			best_end_index = i;
		}



		//handle all negative elements in an array
		if (current_sum == 0){
			if(arr[i] > max_min){
				max_min = arr[i];
			}
		}
		
	}

	if (best_sum == 0){
		return max_min;
	}

	else{
		return best_sum;
	}

	

}

int maxNonContiguous(int arr[], int size){

	int current_sum = 0;
	int best_sum = 0;

	int current_start_index = -1;
	int best_start_index = -1;
	int best_end_index = -1;

	int max_min = arr[0];

	for(int i = 0; i < size; i++){

		int value = current_sum + arr[i];

		if (value > 0){
			if (current_sum == 0){
				current_start_index = i;
			}

			current_sum = value;

		}

		else{
			current_sum = 0;
		}

		if (current_sum > best_sum){
			best_sum = current_sum;
			best_start_index = current_start_index;
			best_end_index = i;
		}

		//handle all negative elements in an array
		if (current_sum == 0){
			if(arr[i] > max_min){
				max_min = arr[i];
			}
		}
		
	}

	if (best_sum == 0){
		return max_min;
	}

	else{
		int sum = 0;

		//for non-contiguous, return the sum of all positive elements
		for(int i = 0; i < size; i++){
			
			if(arr[i] > 0 ){
				sum += arr[i];
			}
		}

		return sum;
	}

	

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

	int num_of_test_case = 0;
	int array_size = 0;



	cin >> num_of_test_case;

	int results[num_of_test_case][2];

	int count = 0;

	for (int i = 0; i < num_of_test_case; i++){

		cin >> array_size;

		int array[array_size];

		for(int i = 0; i < array_size; i++){
			cin >> array[i];
		}

		
		results[count][0] = maxContiguous(array, array_size);
		results[count][1] = maxNonContiguous(array, array_size);

		count++;

	}

	



	for(int i = 0; i < num_of_test_case; i++){
		
		for(int j = 0; j < 2; j++){

			cout << results[i][j] << " ";
		}

		cout << endl;
	}

    return 0;
}



