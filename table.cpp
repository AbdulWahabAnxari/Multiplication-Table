#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num;	//variable definition to hold a number whose table we have to print
	cout << "Enter an integer whose table you want to print : ";
	cin >> num;

	//i is a counter variable
	//this loop will iterate from 1 to 10
	//setwidth manipulator have been used to show the table in more readable way
	for (int i = 1; i <= 10; i++)	
	{
		cout <<setw(3) << num << " X" << setw(3) << i << " = " << setw(3 )<< num * i << endl;
	}
  
	return 0;
}
