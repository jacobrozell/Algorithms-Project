// ************************************************** \\
// * CREATED BY: CENSORED and CENSORED              * \\
// * DUE DATE: November 15th, 2019                  * \\
// * CLASS: COMP-3270                               * \\
// * ASSIGNMENT: Programming Project 1              * \\
// ************************************************** \\
// NECESSARY IMPORTS
#include <iostream>  // std::cout
#include <fstream>   // ios::in, ios::out
#include <string>    // std::string, std::atoi
#include <algorithm> // std::max
#include <array>     // std::array
#include <stdlib.h>  // std::srand, std::rand
#include <time.h>    // std::time
#include <stdio.h>   // std::NULL
using namespace std;

// METHOD DECLARATIONS
int algorithm1(int X[], int length);
int algorithm2(int X[], int length);
int algorithm3(int X[], int L, int U);
int algorithm4(int X[], int length);
void populateRandArray(int X[], int length, string arrayName);

// GLOBAL VARIABLES
int randArray1[10];
int randArray2[15];
int randArray3[20];
int randArray4[25];
int randArray5[30];
int randArray6[35];
int randArray7[40];
int randArray8[45];
int randArray9[50];
int randArray10[55];
int randArray11[60];
int randArray12[65];
int randArray13[70];
int randArray14[75];
int randArray15[80];
int randArray16[85];
int randArray17[90];
int randArray18[95];
int randArray19[100];
ofstream outFile;
string outputFileName = "phw_output.txt"; // OUTPUT FILE NAME
string inputFileName = "phw_input.txt";   // INPUT FILE NAME


// MAIN FUNCTION
int main() {
	int fileArray[10]; // Array for input from file
	int i = 0;               // Iterator value
	string value = "";       // placeholder for int input
	ifstream myfile(inputFileName);

	cout << "******  READING FILE CONTENTS  ******" << endl;
	if(myfile.is_open()) {
		while(getline(myfile, value, ',') && i != 10) { // reads ONLY first 10 numbers separated by commas
			cout << "Value(" << value << ") read in!" << endl; 
			fileArray[i] = atoi(value.c_str()); // converts string version of number to int
			i++;
		}
		cout << "File contents read successfully!\n" << endl;
	} else { // Error: file missing or in different directory
		cout << "Unable to open file! (Possibly not located in same directory) - Exiting" << endl; 
	}
	myfile.close(); // close file

	// Create output file to write output data to
	outFile.open(outputFileName);

	// Populate the random arrays using populateRandArray() method
	outFile << "\n****** POPULATING OTHER ARRAYS ******" << endl;
	srand(time(NULL)); // initialize random seed for rand() function
	populateRandArray(randArray1, 10, "randArray1");
	populateRandArray(randArray2, 15, "randArray2");
	populateRandArray(randArray3, 20, "randArray3");
	populateRandArray(randArray4, 25, "randArray4");
	populateRandArray(randArray5, 30, "randArray5");
	populateRandArray(randArray6, 35, "randArray6");
	populateRandArray(randArray7, 40, "randArray7");
	populateRandArray(randArray8, 45, "randArray8");
	populateRandArray(randArray9, 50, "randArray9");
	populateRandArray(randArray10, 55, "randArray10");
	populateRandArray(randArray11, 60, "randArray11");
	populateRandArray(randArray12, 65, "randArray12");
	populateRandArray(randArray13, 70, "randArray13");
	populateRandArray(randArray14, 75, "randArray14");
	populateRandArray(randArray15, 80, "randArray15");
	populateRandArray(randArray16, 85, "randArray16");
	populateRandArray(randArray17, 90, "randArray17");
	populateRandArray(randArray18, 95, "randArray18");
	populateRandArray(randArray19, 100, "randArray19");

	// Get & display the outputs for running the file contents through the algorithms
	int algorithmAnswer1 = algorithm1(fileArray, 10);
	int algorithmAnswer2 = algorithm2(fileArray, 10);
	int algorithmAnswer3 = algorithm3(fileArray, 0, 9);
	int algorithmAnswer4 = algorithm4(fileArray, 10);
	outFile << "\n******   INPUT FILE OUTPUTS:   ******" << endl;
	outFile << "The first algorithm returned: " << algorithmAnswer1 << endl;
	outFile << "The second algorithm returned: " << algorithmAnswer2 << endl;
	outFile << "The third algorithm returned: " << algorithmAnswer3 << endl;
	outFile << "The fourth algorithm returned: " << algorithmAnswer4 << endl;

	// Get & display the outputs for running all of the random arrays' contents through the algorithms
	int j = 1;
	for(int i = 10; i < 105; i += 5) { // array length is i
		switch(j) { // used to shorten the amount of code needed to display outputs for the 20 random arrays
			case 1:
				algorithmAnswer1 = algorithm1(randArray1, i);
				algorithmAnswer2 = algorithm2(randArray1, i);
				algorithmAnswer3 = algorithm3(randArray1, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray1, i);
				break;
			case 2:
				algorithmAnswer1 = algorithm1(randArray2, i);
				algorithmAnswer2 = algorithm2(randArray2, i);
				algorithmAnswer3 = algorithm3(randArray2, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray2, i);
				break;
			case 3:
				algorithmAnswer1 = algorithm1(randArray3, i);
				algorithmAnswer2 = algorithm2(randArray3, i);
				algorithmAnswer3 = algorithm3(randArray3, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray3, i);
				break;
			case 4:
				algorithmAnswer1 = algorithm1(randArray4, i);
				algorithmAnswer2 = algorithm2(randArray4, i);
				algorithmAnswer3 = algorithm3(randArray4, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray4, i);
				break;
			case 5:
				algorithmAnswer1 = algorithm1(randArray5, i);
				algorithmAnswer2 = algorithm2(randArray5, i);
				algorithmAnswer3 = algorithm3(randArray5, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray5, i);
				break;
			case 6:
				algorithmAnswer1 = algorithm1(randArray6, i);
				algorithmAnswer2 = algorithm2(randArray6, i);
				algorithmAnswer3 = algorithm3(randArray6, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray6, i);
				break;
			case 7:
				algorithmAnswer1 = algorithm1(randArray7, i);
				algorithmAnswer2 = algorithm2(randArray7, i);
				algorithmAnswer3 = algorithm3(randArray7, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray7, i);
				break;
			case 8:
				algorithmAnswer1 = algorithm1(randArray8, i);
				algorithmAnswer2 = algorithm2(randArray8, i);
				algorithmAnswer3 = algorithm3(randArray8, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray8, i);
				break;
			case 9:
				algorithmAnswer1 = algorithm1(randArray9, i);
				algorithmAnswer2 = algorithm2(randArray9, i);
				algorithmAnswer3 = algorithm3(randArray9, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray9, i);
				break;
			case 10:
				algorithmAnswer1 = algorithm1(randArray10, i);
				algorithmAnswer2 = algorithm2(randArray10, i);
				algorithmAnswer3 = algorithm3(randArray10, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray10, i);
				break;
			case 11:
				algorithmAnswer1 = algorithm1(randArray11, i);
				algorithmAnswer2 = algorithm2(randArray11, i);
				algorithmAnswer3 = algorithm3(randArray11, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray11, i);
				break;
			case 12:
				algorithmAnswer1 = algorithm1(randArray12, i);
				algorithmAnswer2 = algorithm2(randArray12, i);
				algorithmAnswer3 = algorithm3(randArray12, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray12, i);
				break;
			case 13:
				algorithmAnswer1 = algorithm1(randArray13, i);
				algorithmAnswer2 = algorithm2(randArray13, i);
				algorithmAnswer3 = algorithm3(randArray13, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray13, i);
				break;
			case 14:
				algorithmAnswer1 = algorithm1(randArray14, i);
				algorithmAnswer2 = algorithm2(randArray14, i);
				algorithmAnswer3 = algorithm3(randArray14, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray14, i);
				break;
			case 15:
				algorithmAnswer1 = algorithm1(randArray15, i);
				algorithmAnswer2 = algorithm2(randArray15, i);
				algorithmAnswer3 = algorithm3(randArray15, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray15, i);
				break;
			case 16:
				algorithmAnswer1 = algorithm1(randArray16, i);
				algorithmAnswer2 = algorithm2(randArray16, i);
				algorithmAnswer3 = algorithm3(randArray16, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray16, i);
				break;
			case 17:
				algorithmAnswer1 = algorithm1(randArray17, i);
				algorithmAnswer2 = algorithm2(randArray17, i);
				algorithmAnswer3 = algorithm3(randArray17, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray17, i);
				break;
			case 18:
				algorithmAnswer1 = algorithm1(randArray18, i);
				algorithmAnswer2 = algorithm2(randArray18, i);
				algorithmAnswer3 = algorithm3(randArray18, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray18, i);
				break;
			case 19:
				algorithmAnswer1 = algorithm1(randArray19, i);
				algorithmAnswer2 = algorithm2(randArray19, i);
				algorithmAnswer3 = algorithm3(randArray19, 0, i - 1);
				algorithmAnswer4 = algorithm4(randArray19, i);
				break;
			default:
				break;
		}
		
		// formatting
		if(j <= 9) {
			outFile << "\n****** RANDOM ARRAY " << j << " OUTPUTS: ******" << endl;
		} else {
			outFile << "\n****** RANDOM ARRAY " << j << " OUTPUTS: *****" << endl;
		}

		// write the algorithm outputs to file
		outFile << "The first algorithm returned: " << algorithmAnswer1 << endl;
		outFile << "The second algorithm returned: " << algorithmAnswer2 << endl;
		outFile << "The third algorithm returned: " << algorithmAnswer3 << endl;
		outFile << "The fourth algorithm returned: " << algorithmAnswer4 << endl;
		j++;
	}

	outFile.close(); // close output file

	// program is finished executing here
	cout << "Successful execution! All data has been written to " << outputFileName << " in the same directory as this file!" << endl;
	cout << "\n******   PROGRAM TERMINATING   ******" << endl;

	return 0;
}

// FIRST ALGORITHM - PROVIDED BY INSTRUCTOR IN PSEUDOCODE
int algorithm1(int X[], int length) {
	int maxSoFar = 0;
	for(int L = 0; L <= length - 1; L++) {
		for(int U = L; U <= length - 1; U++) {
			int sum = 0;
			for(int I = L; I <= U; I++) {
				sum += X[I]; // Sum now contains the sum of X[L..U]
			}
			maxSoFar = max(maxSoFar, sum);
		}
	}
	return maxSoFar;
}

// SECOND ALGORITHM - PROVIDED BY INSTRUCTOR IN PSEUDOCODE
int algorithm2(int X[], int length) {
	int maxSoFar = 0;
	for(int L = 0; L <= length - 1; L++) {
		int sum = 0;
		for(int U = L; U <= length - 1; U++) {
			sum += X[U]; // Sum now contains the sum of X[L..U]
			maxSoFar = max(maxSoFar, sum);
		}
	}
	return maxSoFar;
}

// THIRD ALGORITHM - PROVIDED BY INSTRUCTOR IN PSEUDOCODE
int algorithm3(int X[], int L, int U) {
	if(L > U) {
		return 0; // Zero-element vector
	}
	if(L == U) {
		return max(0, X[L]); // One-element vector
	}
	int M = ((L+U)/2); // A is X[L..M], B is X[M+1..U]
	int sum = 0;
	int maxToLeft = 0;
	int maxToRight = 0;
	// Find max crossing to left
	for(int I = M; I >= L; I--) {
		sum += X[I];
		maxToLeft = max(maxToLeft, sum);
	}
	sum = 0;
	// Find max crossing to right
	for(int I = M+1; I <= U; I++) {
		sum += X[I];
		maxToRight = max(maxToRight, sum);
	}
	int maxCrossing = maxToLeft + maxToRight;

	int maxInA = algorithm3(X, L, M);
	int maxInB = algorithm3(X, M+1, U);
	
	int maxOfFirstTwo = max(maxCrossing, maxInA); // Since max can only handle two arguments
	return max(maxOfFirstTwo, maxInB);
}

// FOURTH ALGORITHM - PROVIDED BY INSTRUCTOR IN PSEUDOCODE
int algorithm4(int X[], int length) {
	int maxSoFar = 0;
	int maxEndingHere = 0;
	for(int I = 0; I < length; I++) {
		maxEndingHere = max(0, (maxEndingHere + X[I]));
		maxSoFar = max(maxSoFar, maxEndingHere);
	}
	return maxSoFar;
}

// POPULATES AN ARRAY WITH RANDOM NUMBERS (POSITIVES & NEGATIVES FROM -10000 TO 10000)
void populateRandArray(int X[], int length, string arrayName) {
	int boolean;
	int randNumb;

	// Filling the given array
	for(int x = 0; x < length; x++) {
		boolean = (rand() % 10000) > (10000 / 2); // generates boolean value
		randNumb = rand() % 10000;
		if(boolean) {
			randNumb -= (randNumb * 2); // negates the number based on random boolean value
		}
		X[x] = randNumb;
	}

	// Formatting the output
	outFile << arrayName << " was successfully populated!" << endl;
	outFile << "It contains the values [";
	for(int x = 0; x < length; x++) {
		if(x == (length - 1)) {
			outFile << X[x];
		} else {
			outFile << X[x] << ", ";
		}
	}
	outFile << "].\n" << endl;
}