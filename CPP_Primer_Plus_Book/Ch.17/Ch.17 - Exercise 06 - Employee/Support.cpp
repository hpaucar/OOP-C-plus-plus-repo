//*******************************
//
//  C++ Template Program - Support Files
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
#include <fstream>
#include "header.h"

using namespace std;

//***************************************************************************************************
//
//  Support Program Section
//
//***************************************************************************************************

/*****************************************************************************/
// class abstr_emp

		// std::string fname; // abstr_emp's first name
		// std::string lname; // abstr_emp's last name
		// std::string job;
		
abstr_emp::abstr_emp()
{

	fname = "N/A";
	lname = "N/A";
	job = "N/A";

}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j) : fname(fn),lname(ln),job(j)
{
}

void abstr_emp::ShowAll() const // labels and shows all data
{

	cout << endl;
	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
	cout << "Job: " << job << endl;

}

void abstr_emp::SetAll() // prompts user for values
{

	cout << "First Name? ";
	getline(cin,fname);
	cout << "Last Name? ";
	getline(cin,lname);
	cout << "Job Type? ";
	getline(cin,job);

}

void abstr_emp::WriteAll(std::ofstream & os) // prompts user for values
{

	os << fname << endl;
	os << lname << endl;
	os << job << endl;
	
	return;

}

void abstr_emp::GetAll(std::ifstream & is) //Reads data from file
{

	string input;

	getline(is, input);
	fname = input;
	getline(is, input);
	lname = input;
	getline(is, input);
	job = input;

	return;

}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{

	os << e.lname << ", " << e.fname << ", Job: " << e.job;
	
	return os;

}

// just displays first and last name
abstr_emp::~abstr_emp() // virtual base class
{
}


/*****************************************************************************/
// class employee : public abstr_emp

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string & fn, const std::string & ln,const std::string & j) : abstr_emp(fn,ln,j)
{
}

void employee::ShowAll() const
{

	abstr_emp::ShowAll();

}

void employee::SetAll()
{

	abstr_emp::SetAll();

}

void employee::WriteAll(std::ofstream & os) // writes values to file
{

	abstr_emp::WriteAll(os);

}

void employee::GetAll(std::ifstream & is) //Reads data from file
{

	abstr_emp::GetAll(is);

	return;

}

/*****************************************************************************/
// class manager: virtual public abstr_emp

		// Private:
		// int inchargeof; // number of abstr_emps managed

		// Protected:
		// int InChargeOf() const { return inchargeof; } // output
		// int & InChargeOf(){ return inchargeof; } // input

manager::manager() : abstr_emp()
{
}

manager::manager(const std::string & fn, const std::string & ln,const std::string & j, int ico) : abstr_emp(fn,ln,j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager & m) : abstr_emp(m), inchargeof(m.inchargeof)
{
}

void manager::ShowAll() const
{

	abstr_emp::ShowAll();
	cout << "ICO: " << inchargeof << endl;

}

void manager::SetAll()
{

	abstr_emp::SetAll();
	cout << "ICO? ";
	cin >> inchargeof;

}

void manager::WriteAll(std::ofstream & os)
{

	abstr_emp::WriteAll(os);
	os << inchargeof << endl;

}

void manager::GetAll(std::ifstream & is) //Reads data from file
{

	abstr_emp::GetAll(is);
	
	is >> inchargeof;

	is.get();

	return;

}

/*****************************************************************************/
// class fink: virtual public abstr_emp

	// private:
		// std::string reportsto; // to whom fink reports
	
	// protected:
		// const std::string ReportsTo() const { return reportsto; }
		// std::string & ReportsTo(){ return reportsto; }

fink::fink() : abstr_emp()
{
}

fink::fink(const std::string & fn, const std::string & ln,const std::string & j, const std::string & rpo) : abstr_emp(fn,ln,j), reportsto(rpo)
{
}

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink & e) : abstr_emp(e), reportsto(e.reportsto)
{
}

void fink::ShowAll() const
{
	
	abstr_emp::ShowAll();
	cout << "RPO: " << reportsto << endl;

}

void fink::SetAll()
{

	abstr_emp::SetAll();
	cout << "RPO? ";
	cin >> reportsto;

}

void fink::WriteAll(std::ofstream & os) // writes values to file
{

	abstr_emp::WriteAll(os);
	os << reportsto << endl;

}

void fink::GetAll(std::ifstream & is) //Reads data from file
{

	string input;

	abstr_emp::GetAll(is);

	getline(is, input);
	reportsto = input;

	return;

}

/*****************************************************************************/

// class highfink: public manager, public fink // management fink

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string & fn, const std::string & ln,const std::string & j, const std::string & rpo,int ico) : abstr_emp(fn,ln,j), manager(fn,ln,j,ico), fink(fn,ln,j,rpo)
{
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) : abstr_emp(e)
{

	ReportsTo() = rpo;
	InChargeOf() = ico;
}

highfink::highfink(const fink & f, int ico) : abstr_emp(f), fink(f)
{

	InChargeOf() = ico;

}

highfink::highfink(const manager & m, const std::string & rpo) : abstr_emp(m), manager(m)
{

	ReportsTo() = rpo;

}

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{

	abstr_emp::ShowAll();
	cout << "ICO: " << InChargeOf() << endl;
	cout << "RPO: " << ReportsTo() << endl;

}

void highfink::SetAll()
{

	abstr_emp::SetAll();
	cout << "ICO? ";
	cin >> InChargeOf();
	cout << "RPO? ";
	cin >> ReportsTo();

}

void highfink::WriteAll(std::ofstream & os)
{

	abstr_emp::WriteAll(os);
	os << InChargeOf() << endl;
	os << ReportsTo() << endl;

}

void highfink::GetAll(std::ifstream & is) //Reads data from file
{

	string input;

	abstr_emp::GetAll(is);

	is >> InChargeOf();

	is.get();

	getline(is, input);

	ReportsTo() = input;

	return;

}
