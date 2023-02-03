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


//sum of N numbers
int  printSumOfN(int n) {
	
	if (n != 0  ) {
	return  n + printSumOfN(n-1);
	}
	
	return n;
	
}

int sumOfNumbersUsingNormalFunction(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}


int sumOfNumbersUsingFormula(int n) {
	int sum = n*((n + 1) / 2);
	return sum;
}

int sumOfNumbersUsingParameterizedRecursion(int sum ,int n) {

	if (n < 1) {
		cout << sum <<endl;
		return 0;
	}

	return n + sumOfNumbersUsingParameterizedRecursion(sum + n, n - 1);
}

int  factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1) ;
}

/*
int  factorialOfNumbersUsingParameterizedRecursion( int n) {

	if (n == 1) {
		//cout << sum << endl;
		return 1;
	}

	return n * factorialOfNumbersUsingParameterizedRecursion( n - 1);
}
*/



int  factorialOfNumbersUsingParameterizedRecursion(int sum,int n) {

	if (n == 1) {
		cout << sum << endl;
		return 0;
	}

	return n * factorialOfNumbersUsingParameterizedRecursion(sum * n ,n - 1);
}


void ReverseAnArrayUsingRecursion(int l,int r,int arr[]) {
	
	if (l >= r) {
		return ;
	}
	swap(arr[l], arr[r]);
	ReverseAnArrayUsingRecursion(l + 1, r-1,arr);
}

//Reverse an array using single pointer

void ReverseAnArrayUsingRecursionSinglePointer(int l, int r, int arrnew[]) {
	
	if (l >= r/2) {
		return;
	}
	swap(arrnew[l], arrnew[r-l-1]);
	ReverseAnArrayUsingRecursionSinglePointer(l + 1, r, arrnew);
}


//check for Palindrome using Recursion


bool PalindromeCheckUsingRecursionSinglePointer(int l, int r, string s) {
	
	if (l >= r / 2) return true;

	if (s[l] != s[r - l - 1])
		return false;

	//swap(s[l], s[r - l - 1]);
	return PalindromeCheckUsingRecursionSinglePointer(l + 1, r, s);
}



//factorial of a number
//0  1 1  2 3  5  8 fibonaci value
//0  1 2  3 4  5  6  index
int fibonacciOfNumber(int n){

	if (n <= 1) {
		return n;
	}
	int  first = fibonacciOfNumber(n - 1);

	int  second = fibonacciOfNumber(n - 2);
	
	return  first + second;

	}

int main()
{
	int n, i = 1;
	cout << "Enter the Number of times" << endl;
	cin >> n;
	printName(i, n);
	cout << "in main" << endl;
	cout << "print 1 to n Linear using recursion " << endl;
	printLinearFromOneToN(i, n);
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

	cout << "print Sum of N using Recursion " << endl;

	cout << printSumOfN(n) << endl;
	cout << "in main" << endl;


	cout << "sumOfNumbersUsingNormalFunction " << endl;

	cout << sumOfNumbersUsingNormalFunction(n) << endl;
	cout << "in main" << endl;


	cout << "sumOfNumbersUsingFormula " << endl;

	cout << sumOfNumbersUsingFormula(n) << endl;
	cout << "in main" << endl;


	cout << "sumOfNumbersUsingParameterizedRecursion " << endl;
	int sum = 0;
	sumOfNumbersUsingParameterizedRecursion(sum, n);
	cout << "in main" << endl;


	cout << "factorial " << endl;

	cout << factorial(n) << endl;
	cout << "in main" << endl;

	cout << "factorialOfNumbersUsingParameterizedRecursion " << endl;
	int f = 1;
	factorialOfNumbersUsingParameterizedRecursion(f, n);
	cout << "in main" << endl;

	cout << "ReverseAnArrayUsingRecursion " << endl;
	int arr[5] = { 2,1,5,4,3 };
	int lengthofArray = sizeof(arr) / sizeof(int);
	//cout << lengthofArray;
	for (int i = 0; i <= lengthofArray - 1; i++) {
		cout << arr[i] << " ";
	}
	cout <<"After Reverse" << endl;
	ReverseAnArrayUsingRecursion(0, lengthofArray-1,arr);

	for (int i = 0; i <= lengthofArray-1; i++) {
		cout << arr[i] << " ";
	}
	cout << "in main" << endl;


	cout << "ReverseAnArrayUsingRecursionSinglePointer" << endl;
	int arrnew[5] = { 2,1,5,4,3 };
	int lengthofArraynew = sizeof(arrnew) / sizeof(int);
	cout << lengthofArraynew << endl;
	//cout << lengthofArray;
	for (int i = 0; i < lengthofArray ; i++) {
		cout << arrnew[i] << " ";
	}
	cout << "After Reverse" << endl;
	ReverseAnArrayUsingRecursionSinglePointer(0, lengthofArraynew , arrnew);

	for (int i = 0; i < lengthofArraynew; i++) {
		cout << arrnew[i] << " ";
	}
	cout << endl;
	cout << "in main" << endl;


	//check for palindrome
	cout << "PalindromeCheckUsingRecursionSinglePointer" << endl;
	string s = "madam";
	int lengthofstring = size(s);
	cout << s << " " << "length of string is " << lengthofstring << endl;
	//cout << lengthofArray;
	
	PalindromeCheckUsingRecursionSinglePointer(0, lengthofstring, s) ? cout << "Palindrome" : cout << "Not a Palindrome" << endl;

	cout << endl;
	cout << "fibonacciOfNumber " << endl;

	cout << fibonacciOfNumber(n) << endl;
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
