//============================================================================
// Name        : FunctionPointer-Vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

#if 1

void ForEach(vector<int> &obj,void(*func)(int))
{

for(int vale : obj)
func(vale);
}

#endif
int main() {

//void(*sample)(int)=printnum;

	vector<int> type={1,45,67,75,89};
	ForEach(type,[](int value)
	{

		cout<<"value="<<value<<endl;
	});

	return 0;
}
