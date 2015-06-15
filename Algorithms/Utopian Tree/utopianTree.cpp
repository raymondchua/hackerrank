/*****************************
Name: Chua Ruiwen Raymond


compile: make utopianTree
execute: ./utopianTree

Sample Input:
3
0
1
4

Sample Output:
1
2
7
*******************************/

#include <iostream>
using namespace std;

int height(int n){
	int height = 1;

	for(int i = 0; i < n; i++){

		if(i % 2 == 0){
			height = height * 2;

		}

		else{
			height = height + 1;
		}
	}

	return height;
}

int main(){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		cout << height(n) << endl;
	}

}