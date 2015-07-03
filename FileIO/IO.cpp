#include <fstream>
#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	write();
	read();
	return 0;
}

void write(){
	Student one;
	one.FullName = new char[40];
	strcpy(one.FullName, "kyuhwa jeong..llll.");
	strcpy(one.CompleteAddress, "824 Larson Drv, Silver Spring, MD 20910");

	one.Gender = 'F';
	one.Age = 16.50;
	one.LivesInASingleParentHome = true;

	// output ���� ��Ʈ���� ����
	ofstream ofs("fifthgrade.ros", ios::binary);

	// �� ��Ʈ���� Student ��ü�� �о� �ִ´�.
	ofs.write((char *)&one, sizeof(one));
}

void read(){
	Student two;

	// Input ���� ��Ʈ���� ����
	ifstream ifs("fifthgrade.ros", ios::binary);

	// ���� ��
	ifs.read((char *)&two, sizeof(two));

	// ����� ����.
	cout << "Student Information\n";
	cout << "Student Name: " << two.FullName << endl;
	cout << "Address:      " << two.CompleteAddress << endl;

	if (two.Gender == 'f' || two.Gender == 'F')
		cout << "Gender:       Female" << endl;
	else if (two.Gender == 'm' || two.Gender == 'M')
		cout << "Gender:       Male" << endl;
	else
		cout << "Gender:       Unknown" << endl;

	cout << "Age:          " << two.Age << endl;

	if (two.LivesInASingleParentHome == true)
		cout << "Lives in a single parent home" << endl;
	else
		cout << "Doesn't live in a single parent home" << endl;

	delete [] two.FullName;
	cout << "\n";
}