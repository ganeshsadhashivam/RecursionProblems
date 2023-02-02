// RecursionProblems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void printName(int i,int n) {
	int c = i;
	
	int num = n;

	if (c > num) return;
	cout << "ganesh" << endl;
	c++;
	printName(i+1,n);
}

//int linear 1;
void printLinearFromOneToN(int i,int n) {
	//cout << n;
	//int sum=0;
	int linear = i;
	int num = n;
	if (!(linear <= num)) return;
	// sum += linear;
	 cout << linear << " ";
	// linear++;
	 printLinearFromOneToN(i+1,n);
}



void printLinearFromNToOne(int i, int n) {

	int linear = i;
	
	int num = n;
	
	if (i < 1)
		return;
	cout << linear << " ";
	printLinearFromNToOne(i-1,n);
}

//using backtracking 1 to n

void printLinearFromOneToNUsingBacktracking(int i,int n) {
	if (i < 1) {
		return;
	}
	printLinearFromOneToNUsingBacktracking(i - 1, n);
	cout << i << " ";

}


//using backtracking n to 1

void printLinearFromNToOneUsingBacktracking(int i, int n) {
	if (n < i) {
		return;
	}
	printLinearFromNToOneUsingBacktracking(i+1 , n);
	cout << i << " ";

}

int main()
{
	int n,i=1;
	cout << "Enter the Number of times" << endl;
	cin >> n;
	printName(i,n);
	cout << "in main"<<endl;
	cout << "print 1 to n Linear using recursion " << endl;
	printLinearFromOneToN(i,n);
	cout << endl;
	cout << "in main";

	cout << "print n to 1 Linear using recursion " << endl;
	printLinearFromNToOne(n, n);
	cout << endl;
	cout << "in main" << endl;


	cout << "print 1 to n using backtracking " << endl;
	printLinearFromOneToNUsingBacktracking(n, n);
	cout << endl;
	cout << "in main" << endl;

	cout << "print n to 1 using backtracking " << endl;
	printLinearFromNToOneUsingBacktracking(i, n);
	cout << endl;
	cout << "in main" << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
