// ch10testScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Use pointer notation instead of subscripts throughout the program
// Function prototypes
void getTestScores(double *array, int size);
void displayArray(double* array, int size);
void calcAverage(double* array, int size);

int main()
{
	cout << "Chapter 10 Test Scores by Kevin Bell\n\n";
	//Declare variables
	int size = 0;
	double* array = nullptr;

	//Get the number of test scores
	cout << "Enter 6 test scores\n";
	size = 6;

	//Dynamically allocate an array large enough to hold that many test scores
	array = new double[size];

	//Get the test scores
	getTestScores(array, size);
	
	cout << endl;

	//Display the test scores
	displayArray(array, size);

	//Calculate the average of the test scores
	calcAverage(array, size);

	//Free the memory
	delete[] array;
	array = nullptr;
	
	system("pause");
	return 0;
}

// Function definitions
// //Use pointer notation instead of subscripts throughout the program
// get 6 test scores from user
void getTestScores(double* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter test score " << i + 1 << ": ";
		cin >> *(array + i);
		while (*(array + i) < 0 || *(array + i) > 100)
		{
			cout << "Invalid test score. Enter a test score between 0 and 100: ";
			cin >> *(array + i);
		} // end while loop
	} // end for loop
} // end getTestScores function

// display the array
void displayArray(double* array, int size)
{
	cout << "The test scores are: \n";
	for (int i = 0; i < size; i++)
	{
		cout << *(array + i) << " ";
	} // end for loop
	cout << endl;
} // end displayArray function

// calculate average of test scores and display letter grade with A- B+ etc.
void calcAverage(double* array, int size)
{
	double total = 0.0;
	double average = 0.0;

	for (int i = 0; i < size; i++)
	{
		total += *(array + i);
	} // end for loop

	average = total / size;

	cout << "Average test score: " << average << endl;

	if (average >= 93)
	{
		cout << "Letter grade: A" << endl;
	}
	else if (average >= 90)
	{
		cout << "Letter grade: A-" << endl;
	}
	else if (average >= 87)
	{
		cout << "Letter grade: B+" << endl;
	}
	else if (average >= 84)
	{
		cout << "Letter grade: B" << endl;
	}
	else if (average >= 80)
	{
		cout << "Letter grade: B-" << endl;
	}
	else if (average >= 77)
	{
		cout << "Letter grade: C+" << endl;
	}
	else if (average >= 74)
	{
		cout << "Letter grade: C" << endl;
	}
	else if (average >= 70)
	{
		cout << "Letter grade: C-" << endl;
	}
	else if (average >= 67)
	{
		cout << "Letter grade: D+" << endl;
	}
	else if (average >= 64)
	{
		cout << "Letter grade: D" << endl;
	}
	else if (average >= 60)
	{
		cout << "Letter grade: D-" << endl;
	}
	else
	{
		cout << "Letter grade: F" << endl;
	} // end if/if else/else statement
} // end calcAverage function

