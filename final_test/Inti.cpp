// Inti.cpp

#include <algorithm>

#include "Inti.h"

istream& read_hw(istream& in, vector<double>& hw);

istream& Inti::read(istream& in) {
	Core::read_common(in);
	in >> toeic;
	read_hw(in, Core::homework);
	return in;
}
double Inti::grade() const {
	return min(Core::grade(), toeic);
}