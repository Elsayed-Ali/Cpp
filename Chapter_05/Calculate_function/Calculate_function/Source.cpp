#include<iostream>
using namespace std;

void Calc_function(int num_one, int num_two, char operation)
{

	switch (operation)
	{
	case '+':
		cout << num_one << " + " << num_two << " = " << num_one + num_two;
		cout << "\n--------------\n";
		break;

	case '-':
		cout << num_one << " - " << num_two << " = " << num_one - num_two;
		cout << "\n--------------\n";
		break;

	case '*':
		cout << num_one << " * " << num_two << " = " << num_one * num_two;
		cout << "\n--------------\n";
		break;

	case '/':

		if (num_two == 0)
		{
			cout << "Error";
			cout << "\n--------------\n";
		}
		else
		{
			cout << num_one << " / " << num_two << " = " << num_one / num_two;
			cout << "\n--------------\n";
		}
		break;

	case '%':
		cout << num_one << " % " << num_two << " = " << num_one % num_two;
		cout << "\n--------------\n";
		break;

	default:
		cout << "Error";
		break;

	}

}


int main()
{
	int num_one, num_two;
	char operation;

	cout << "Enter the first number : ";
	cin >> num_one;

	cout << "Select the operation + , - , * , / , % : ";
	cin >> operation;

	cout << "Enter the second number : ";
	cin >> num_two;

	cout << endl;

	Calc_function(num_one, num_two, operation);


	return 0;
}