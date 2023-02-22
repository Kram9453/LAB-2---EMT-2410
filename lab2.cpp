//============================================================================
// Name        : lab2.cpp
// Author      : Krishna Ramlall
// Version     :
// Copyright   : 
// Description : LAB 2 FOR EMT 2410!
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float arr[5];
	float min,max;
	int num;
	cout << "Please enter 5 numbers of your choice: \n";
	cin >>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
	cout << "Please press 9 in order to display the max number or press 0 to display the min number:" <<endl;
	max = arr[0];
	min = arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		max=arr[i];
		if(min>arr[i])
		min=arr[i];
	}
	cin >> num;
	if(num==9)
	cout << "The max number is: \n" <<max<<endl;
	else if(num==0)
	cout << "The min number is: \n" <<min<<endl;
	else
	cout << "ERROR: INVALID INPUT ENTERED, PLEASE TRY AGAIN!\n" <<endl;
	return 0;
}
