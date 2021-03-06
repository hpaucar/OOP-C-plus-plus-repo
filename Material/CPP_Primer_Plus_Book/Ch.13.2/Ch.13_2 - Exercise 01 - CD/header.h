//*******************************
//
//  C++ Template - Header File
//
//*******************************

//*******************************
//
//  Definition Statements - Begin
//
//*******************************

#ifndef HEADER_H_
#define HEADER_H_

//*******************************
//
//  Code Body - Begin
//
//*******************************

// base class
class Cd 
{ // represents a CD disk

	private:
		char performers[50];
		char label[20];
		int selections; // number of selections
		double playtime; // playing time in minutes

	public:
		
		Cd(char * s1, char * s2, int n, double x);
		Cd(const Cd & d);
		Cd();
		~Cd();
		virtual void Report() const; // reports all CD data
		Cd & operator=(const Cd & d);

};

class Classic : public Cd
{

	private:

		char work[50];
	
	public:

		//constructors
		Classic();
		Classic(char * s3, char * s1, char * s2, int n, double x);
		Classic(const Classic & c);
		~Classic();

		//other methods
		virtual void Report() const;
		
		//operators
		Classic & operator=(const Classic & c);

};


//*******************************
//
//  Code Body - End
//
//*******************************


//*******************************
//
//  Definition Statements - End
//
//*******************************

#endif