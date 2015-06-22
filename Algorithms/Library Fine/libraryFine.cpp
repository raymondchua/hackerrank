/*****************************
Name: Chua Ruiwen Raymond


compile: make loveLetterMystery
execute: ./loveLetterMystery

Sample Input:
9 6 2015
6 6 2015

Sample Output:
45
*******************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int count = 0; 

    int returnDate = 1;
    int returnMonth = 1;
    int returnYear = 1;  
	cin >> returnDate;
	cin >> returnMonth;
	cin >> returnYear;

	int dueDate = 1;
	int dueMonth = 1;
	int dueYear = 1;

	cin >> dueDate;
	cin >> dueMonth;
	cin >> dueYear;

	if((returnDate <= dueDate) && (returnMonth <= dueMonth) 
		&& (returnYear <= dueYear)){
		cout << count << endl;
	} 

	else if ((returnMonth == dueMonth) && (returnDate > dueDate) 
		&& (returnYear == dueYear)){

		int lateDays = returnDate - dueDate;
		count = 15 * lateDays;
		cout << count << endl;

	}

	else if ((returnMonth > dueMonth) && (returnYear == dueYear)){
		int lateMonths = returnMonth - dueMonth;
		count = 500 * lateMonths;
		cout << count << endl;
	}

	else if (returnYear > dueYear){
		count = 10000;
		cout << count <<endl;
	}

	else{
		cout << count << endl;
	}


    return 0;
}
