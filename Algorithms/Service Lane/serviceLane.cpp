/*****************************
Name: Chua Ruiwen Raymond


compile: make serviceLane
execute: ./serviceLane

Sample Input:
8 5
2 3 1 2 3 2 3 3
0 3
4 6
6 7
3 5
0 7

Sample Output:
1
2
3
2
1
*******************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minWidth (int *width, int start, int end){

	int min = 3;

	for(int i = start; i <= end; i++){
		int temp = width[i];

		if (temp < min){
			min = temp;
		}
	}

	return min;

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;		//length of freeway
    int t;		//num of test cases
    cin >> n;
    cin >> t;

    int width [n];

    for (int i = 0; i < n; i++){
    	int temp;
    	cin >> temp;
    	width[i] = temp;
    }

    while (t--){
    	int start;
    	int end;
    	int w;

    	cin >> start;
    	cin >> end;

    	w = minWidth(width, start, end);

    	cout << w << endl;

    }  
    return 0;
}