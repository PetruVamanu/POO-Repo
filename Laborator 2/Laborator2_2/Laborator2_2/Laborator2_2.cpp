#include <iostream>
#include "GlobalFunctions.h"
using namespace GlobalFunctions;
int main()
{
	student A,B;
	A.setName("Antonio");
	A.setGradeE(5.2);
	B.setName("Ana");
	B.setGradeE(9.9);
	//student::MAXSTUDENTNAME
	std::cout << byName(A, B) << '\n';
	std::cout << byEng(A, B);
	return 0;
}