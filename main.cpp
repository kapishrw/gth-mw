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

<<<<<<< HEAD
	for (int i = 0; i < 50; i++) {
=======
	for (int i = 0; i < 40; i++) {
>>>>>>> 17008cd7ad3d7dcb45bc05a1dc6bca27dc3cd9bd
		vi.push_back(i);
		vd.push_back(i / 1.1);
	}


	testing<double> obj;

	obj.compute2(vd);
	


}
