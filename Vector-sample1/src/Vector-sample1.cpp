//============================================================================
// Name        : Vector-sample1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<string>
#include<iterator>
using namespace std;
class ABC{

public:
	string name;


	ABC():name(" "){}

	ABC(string param1):name(param1)
	{





	}

};





int main() {


	vector<ABC>tempstrings;

	tempstrings.push_back(ABC(string("RCB")));
	tempstrings.push_back(ABC(string("sunil")));
	tempstrings.push_back(ABC(string("festo")));

	tempstrings.push_back(ABC(string("royals")));
	tempstrings.push_back(ABC(string("rajasdhan")));
	tempstrings.push_back(ABC(string("mirpur")));

	tempstrings.push_back(ABC(string("Noida")));
	tempstrings.push_back(ABC(string("delhi")));
	tempstrings.push_back(ABC(string("gaziabad")));



for(vector<ABC> ::iterator itr=tempstrings.begin();itr!=tempstrings.end();itr++)
{


if(itr->name == "hyderabad")
{

	cout<<"found the parameter"<<endl;
break;

}
else{

	cout<<"Not found"<<endl;


}




}
	return 0;
}
