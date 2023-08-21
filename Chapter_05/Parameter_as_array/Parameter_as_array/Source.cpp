#include<iostream>
using namespace std;

void Array_function(int array[], int array_size)
{
	int  Total_num = 0;

	for (int index = 0; index < array_size; index++)
	{
		Total_num += array[index];
	}

	cout <<"Total sum " << Total_num;


}




int main()
{
	int array[] = { 10,20,30,40,50,60,70,80,90,100 };
	int array_size = sizeof(array) / sizeof(array[0]);

	Array_function(array, array_size);
	cout << endl;

	 //the output: Total sum 550
	
	return 0;
}