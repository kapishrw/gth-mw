//# include "compute1.h"
#include "compute2.cpp"
#include <vector>

using std::vector;

/*
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

#include <boost/test/unit_test.hpp>


int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << " ");
}
*/

int main() {


	vector<int> vi;
	vector<double> vd;

	for (int i = 0; i < 20; i++) {
		vi.push_back(i);
		vd.push_back(i / 1.1);
	}


	testing<double> obj;

	obj.compute2(vd);
	


}
