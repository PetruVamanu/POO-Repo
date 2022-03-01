#include "student.h"

inline void set_float_value(float value, float& output)
{
	if (value >= 1 && value <= 10)
		output = value;
}

void student::setName(const char* s)
{
	int i = 0;
	while (*(s + i) != '\0' && i < MAXSTUDENTNAME - 1)
	{
		name[i++] = s[i];
	}
	name[i] = '\0';
}


void student::setGradeM(float x)
{
	set_float_value(x, gradeM);
}

void student::setGradeE(float x)
{
	set_float_value(x, gradeE);
}


void student::setGradeH(float x)
{
	set_float_value(x, gradeH);
}


float student::computeAverage()
{
	return ((gradeE + gradeH + gradeM) / 3.0f);
}