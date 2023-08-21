#include<iostream>
using namespace std;

int Factorial_function(int num)
{
	long long Factorial = 1;

	for (int count = num; count >= 1; count--)
	{
		Factorial *= count;
	}


	return Factorial;

}




int main()
{

	cout << Factorial_function(10);
	cout << endl;

	//the output : 3628800

	return 0;
}