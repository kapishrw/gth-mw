

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
using std::vector;

template <typename T>
class testing
{
private:

	vector<T> vec;



public:

	testing() {}

	testing(vector<T>& vec);


	testing(testing<T>& obj);
	testing<T> & operator= (testing<T>& obj);


	T compute1(vector<T>& vec);

	T compute2(vector<T>& vec);


};


template <typename T>
testing<T>::testing(vector<T>& vec) :vec(vec) {}


template <typename T>
testing<T>::testing(testing<T>& obj) :vec(obj.vec){}

template <typename T>
testing<T>& testing<T>::operator= (testing<T>& obj) {
	vec = obj.vec;
	return *this;
}



template <typename T>
T testing<T>::compute1(vector<T>& vec_) {
	cout << endl << "printing fnc 1: " << endl;
	typename vector<T>::iterator itr;
	//auto itr;
	for (itr = vec_.begin(); itr != vec_.end(); itr++) {
		cout << *itr << " ";
	}
	return 1;
}

template <typename T>
T testing<T>::compute2(vector<T>& vec_) {
	typename vector<T>::iterator itr;
	//auto itr;

	for (itr = vec_.begin(); itr != vec_.end(); itr++) {
		vec.push_back(*itr);
	}

	cout << endl << "printing fnc 2: " << endl;
	for (itr = vec.begin(); itr != vec.end(); itr++) {
		cout << *itr << " ";
	}
	return 1;
}



