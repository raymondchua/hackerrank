#include <iostream>

using namespace std;

int F[100];		//array filled with 0 as default.

//top down approach, subdividing problems down the branch
int topDownsolve(int n){

	if(n < 3){
		return 7;
	}

	int &ret = F[n];

	cout << "ret value is: " << ret << endl;

	//will return 0 if value is not in array
	if(ret != 0){
		cout << "memo-ization!" << endl;
		return ret;
	}

	ret = topDownsolve(n - 1) + topDownsolve(n - 3);

	return ret;

}

//bottom up approach, starting from the smallest solution and go up to the required solution
int bottomUpSolve(int n){
	F[0] = 7;
	F[1] = 7;
	F[2] = 7;

	for(int i = 3; i < n; i++){
		F[i] = F[i-1] + F[i - 3];
	}

	return F[n];
}

int main(){

	int input;

	cin >> input;

	cout <<topDownsolve(input)<<endl;

	cout <<bottomUpSolve(input)<<endl;

	return 0;
}

