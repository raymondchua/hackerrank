/*****************************
Name: Chua Ruiwen Raymond


compile: make loveLetterMystery
execute: ./loveLetterMystery

Sample Input:
4
abc
abcba
abcd
cba

Sample Output:
2
0
4
2
*******************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int makePalinedrome(string s){

	int start = 0;
	int end = s.length() - 1;

	int count = 0;

	while (start < end){

		char startChar = s[start];		//first letter of the substring	
		char endChar = s[end];			//last letter of the substring

		if (startChar < endChar){

			while(startChar != endChar){

				count += 1;
				endChar -= 1;
			}

		}

		else if (startChar > endChar){

			while(startChar != endChar){

				count += 1;
				startChar -= 1;
			}
		}

		start += 1;		//move the start pointer to the next char
		end -= 1;		//move the last pointer to the previous char

	}

	return count;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;		//number of test case
    cin >> n;

    while(n--){
    	string input;
    	cin >> input;

    	int count = makePalinedrome(input);
    	
    	cout << count << endl;
    	
    }
      
    return 0;
}
