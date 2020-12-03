// Do while loop

#include <iostream>

using namespace std;

int main(){

	int userChoice = 0;

	do
	{
		cout << "Hello welcome\n";
		cout << "Pls choose the options\n";
		cout << "1. continue\n";
		cout << "2. quit\n";
    	cin >> userChoice;

	} while(userChoice==1);

	return 0;
}