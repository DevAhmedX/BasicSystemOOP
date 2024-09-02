#include <iostream>
using namespace std;

void AddTeacher();
void MasterFunc();
void AddStudent();


class students
{
private:
	string name;
	int age;
	float gpa;
public:
	students(string name, int age, float gpa)
	{
		this->name = name;
		this->age = age;
		this->gpa = gpa;

	}
	void print(int j)
	{
		cout << "-=-=-=-=-=-=-= student information -=-=-=-=-=-=-=" << endl
			<< "-=-=-=-=-=-= the name of studet " << j + 1 << " is:" << name << endl
			<< "-=-=-=-=-=-= the age of studet " << j + 1 << " is:" << age << endl
			<< "-=-=-=-=-=-= the gpa of studet " << j + 1 << " is:" << gpa << endl<<endl;
	}
};

class teachers
{
private:
	string name;
	int age;
	float salary;
public:
	teachers(string name, int age, float salary)
	{
		this->name = name;
		this->age = age;
		this->salary = salary;

	}
	void print(int j)
	{
		cout << "-=-=-=-=-=-=-=-=-= teacher information -=-=-=-=-=-=-=-=-=" << endl
			<< "-=-=-=-=-=-= the name of teacher " << j + 1 << " is:" << name  << endl
			<< "-=-=-=-=-=-= the age of teacher " << j + 1 << " is:" << age  << endl
			<< "-=-=-=-=-=-= the salary of teacher " << j + 1 << " is:" << salary << endl << endl;
	}
};
void MasterFunc()
{
	int choice;
	do
	{


		cout << "-=-=-=-=-=-=-=-=-= hello brothers in india ):( totay you will be the manger" << endl
			<< "pls click one of this numbers" << endl
			<< "1- to add a new student" << endl
			<< "2- to add a new teacher" << endl
			<< "3- to quit the sestyem" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:

			AddStudent();
			break;
		case 2:

			AddTeacher();
			break;
		}
	} while (choice != 3);
}
void AddStudent()
{
	int num_student;
	cout << "-=-=-=-=-=-=-=-=-= pls enter number of student -=-=-=-=-=-=-=-=-=" << endl;
	cin >> num_student;
	string name_student[10];
	int age_student[10];
	float gpa_student[10];
	for (int i = 0;i < num_student;i++)
	{
		cout << "-=-=-=-=-=-= pls enter name of student "<<i+1 << endl;
		cin >> name_student[i];
		cout << "-=-=-=-=-=-= pls enter age of student " << i + 1<< endl;
		cin >> age_student[i];
		cout << "-=-=-=-=-=-= pls enter gpa of student "<<i + 1 << endl;
		cin >> gpa_student[i];
	}
	for (int j = 0;j < num_student;j++)
	{
		students student(name_student[j], age_student[j], gpa_student[j]);
		student.print( j);

	}

}

void AddTeacher()
{
	int num_teacher;
	cout << "-=-=-=-=-=-=-=-=-= pls enter number of teachers -=-=-=-=-=-=-=-=-=" << endl;
	cin >> num_teacher;
	string name_teacher[10];
	int age_teacher[10];
	float salary_teacher[10];
	for (int i = 0;i < num_teacher;i++)
	{
		cout << "-=-=-=-=-=-= pls enter name of teacher " << i + 1 << endl;
		cin >> name_teacher[i];
		cout << "-=-=-=-=-=-= pls enter age of teacher " << i + 1 << endl;
		cin >> age_teacher[i];
		cout << "-=-=-=-=-=-= pls enter salary of teacher " <<i + 1 << endl;
		cin >> salary_teacher[i];
	}
	for (int j = 0;j < num_teacher;j++)
	{
		teachers teacher(name_teacher[j], age_teacher[j], salary_teacher[j]);
		teacher.print(j);

	}

}



int main()
{

	MasterFunc();
}