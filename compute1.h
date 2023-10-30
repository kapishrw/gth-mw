#ifndef PROG
#define PROG

#include <stdio.h>
#include <vector>

using std::vector;

class testing
{
private:

	vector<int> vec_int;
	vector<double> vec_double;


public:

	testing(){}

	testing(vector<int>& vec);

	testing(vector<double>& vec);


	testing(testing& obj);
	testing& operator= (testing& obj);


	int compute1(vector<int>& vec);


	double compute1(vector<double>& vec);



};






#endif



