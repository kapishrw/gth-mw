

#include "compute1.h"
#include <stdio.h>
#include <iostream>
#include <vector>

using std::vector;
using namespace std;


testing::testing(vector<int>& vec):vec_int(vec) {}



testing::testing(vector<double>& vec) :vec_double(vec) {}




testing::testing(testing& obj):vec_int(obj.vec_int), vec_double(obj.vec_double) {}


testing& testing::operator= (testing& obj) {
	vec_int = obj.vec_int;
	vec_double = obj.vec_double;
	return *this;
}




int testing::compute1(vector<int>& vec) {
	cout << endl << "printing fnc 1: " << endl;
	vector<int>::iterator itr;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		cout << *itr << " ";
	}
	return 1;
}


double testing::compute1(vector<double>& vec) {
	vector<double>::iterator itr;

	for (itr = vec.begin(); itr != vec.end(); itr++) {
		vec_double.push_back(*itr);
	}

	cout << endl << "printing fnc 2: " << endl;
	for (itr = vec_double.begin(); itr != vec_double.end(); itr++) {
		cout << *itr << " ";
	}
	return 1;
}

