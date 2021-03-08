/*
Question 9 from Pelican Technologies Hiring Exam

Factor the following composite number: 77,528,432,733,029 
Describe the process that you used in your attempt. 
a program that will factor the number in to its prime components. 
Estimate the number of operations required (worst case) to complete the task.

Attempting using Prime Factorization

Programmer: Kevin Gowsell

Date Begun 3/5/2021 at 3:34 PM. 

Resources Used: https://www.mesacc.edu/~scotz47781/mat120/notes/radicals/simplify/images/examples/prime_factorization.html
https://www.geeksforgeeks.org/program-to-print-first-n-prime-numbers/
https://www.tutorialspoint.com/how-to-print-out-the-contents-of-a-vector-in-cplusplus

*/

#include <iostream>
#include <vector>
#include <sstream>
//#include <boost/multiprecision/cpp_int.hpp>  //  Integer types.
using namespace std;

void factor(int primeNum) {
	long long toFactor = 77528432733029;
	int count = 0;
	long long tempFactor;
		if (toFactor % primeNum == 0) {
			tempFactor = toFactor / primeNum;
			cout << primeNum << "  ";
		}
	}

int PullPrimes(int range) {
	// Declare the variables
	int i, j;
	int isPrime;
	int count = 0;

	// Print display message
	//cout << "\nPrime numbers between 1 and " << range << " are:\n";

	// Traverse each number from 1 to N with the help of for loop
	for (i = 1; i <= range; i++) {

		// Skip 0 and 1 as they are niether prime nor composite
		if (i == 1 || i == 0)
			continue;

		// flag variable to tell if i is prime or not
		isPrime = 1;

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}

		// flag = 1 means i is prime and flag = 0 means i is not prime
		if (isPrime == 1) {
			factor(i);
			count++;
		}
	}
	cout << endl;
	return count;
}

int main() {
	cout << "Gowsell Factoring Program" << endl;
	cout << endl;
	cout << "Factoring 77,528,432,733,029 into its prime components" << endl;
	cout << endl;

	int range = 110000;
	int operations = 0;
	int intExit = 0;

	operations = PullPrimes(range);
	cout << "Number of comparisons = " << operations << endl;

	while (intExit != 1) {
		cout << "Please enter 1 to exit: ";
		cin >> intExit;
	}

	return 0;
}

