//*******************************
//
//  C++ Template Program
//
//*******************************

//*******************************
//
//  Standard Header
//
//*******************************

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************



//********************************
//
//  Compound Type Declaration Section
//
//********************************



//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
	string szFirstName;
	string szLastName;
	string szFullName;

	//*  Main Code
	cout << "What is your First Name? ";
	getline(cin, szFirstName);
	cout << "What is your Last Name? ";
	getline(cin, szLastName);

	szFullName = szLastName + ", " + szFirstName;

	cout << "First Name: " << szFirstName << endl;
	cout << "Last Name: " << szLastName << endl;
	cout << "Here is the information in a single string: " << szFullName <<  endl << endl;
	
	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************



