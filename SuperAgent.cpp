/*There is a very secret base in Potatoland where potato mash is made according to a special recipe.
 The neighbours from Porridgia decided to seize this recipe and to sell it to Pilauland. 
 For this mission they have been preparing special agent Pearlo for many years. 
 When, finally, Pearlo learned all secrets of espionage, he penetrated into the Potatoland territory and reached the secret base.

Now he is standing at the entrance, but to get inside he need to pass combination lock.
 Minute ago one of the workers entered the password on the terminal and opened the door. 
 The terminal is a square digital keyboard 3 � 3 with digits from 1 to 9.

Pearlo knows that the password consists from distinct digits and 
is probably symmetric with respect to the central button of the terminal. 
He has heat sensor which allowed him to detect the digits which the worker pressed.
 Now he wants to check whether the password entered by the worker is symmetric with respect to the central button of the terminal. 
 This fact can Help Pearlo to reduce the number of different possible password combinations.

Input
Input contains the matrix of three rows of three symbols each. Symbol �X� means that the corresponding button was pressed, 
and �.� means that is was not pressed. The matrix may contain no �X�, also it may contain no �.�.

Output
Print YES if the password is symmetric with respect to the central button of the terminal and NO otherwise.

Example:
input: 
XX.
...
.XX
output: YES

input: 
X.X
X..
...
output: NO
*/

#include<bits/stdc++.h>
#include<stdio.h>
#define MAX 100
using namespace std;


int main(){
	string a[MAX];
	int flag = 1;
	for( int i=0;i<3;i++){
		cin >> a[i];
	}
	for( int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j] != a[2-i][2-j]){
				flag = 0;
			}
		}
	}
	printf("%s", (flag == 1)?"YES":"NO");
}

















