#include<iostream>
using namespace std;

struct information
{
	string name;
	int age;

};

void get_info(information);

int main()
{

	information student_1, student_2 , student_3;

	student_1.name = "Alsayed Ali";
	student_1.age = 19;
	get_info(student_1);
	cout << "\n==========================\n\n";

	student_2.name = "Abdallah Tarek";
	student_2.age = 19;
	get_info(student_2);
	cout << "\n==========================\n\n";

	student_3.name = "Youssef Amer";
	student_3.age = 20;
	get_info(student_3);
	cout << "\n==========================\n\n";


/*
	output:

		Alsayed Ali has  19 years.

		==========================

		Abdallah Tarek has  19 years.

		==========================

		Youssef Amer has  20 years.

		==========================


*/

	return 0;
}

void get_info(information student) //declarator
{
	cout << student.name << " has  "
		<< student.age << " years.\n";

}