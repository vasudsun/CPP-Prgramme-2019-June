//============================================================================
// Name        : base-class_pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Base{


private:
	int i;
public:
	void set_i(int var)
	{

i=var;
	}

	int get_i()
	{

		return i;
	}
};

class child :public Base
{


private:
	int j;

public:

	void set_j(int var)
	{

		j=var;
	}

	int getj()
	{

		return j;

	}
};
int main() {


Base *ptr;


///ptr=&b1;


child d;

ptr=&d;
ptr->set_i(54);

cout<<"normal";

cout<<ptr->get_i()<<endl;//here throught he base class pointer,we can access only the derived members to the
//child class..Not the newly added one
((child*)ptr)->set_j(90);//After type casting the basepointer to the derived claa,then we can access the newly addded functions

cout<<((child*)ptr)->getj()<<endl;



	return 0;
}
