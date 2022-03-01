#include "GlobalFunctions.h"
int GlobalFunctions::byName(student a,student b)
{
	int i = 0, j = 0;
	char* numeA = a.getName();
	char* numeB = b.getName();
	while (*(numeA + i) != '\0' && *(numeB + i) != '\0')
	{
		if (*(numeA + i) != *(numeB + i))
		{
			if (*(numeA + i) < *(numeB + i))
				return -1;
			return 1;
		}
		i++;
	}
	if (*(numeA + i) == '\0' && *(numeB + i) == '\0')
		return 0;
	if (*(numeA + i) == '\0') 
		return -1;
	return 1;
}
inline int compare_float_values(float v1, float v2)
{
	if (v1 > v2) return 1;
	if (v1 < v2) return -1;
	return 0;
}
int GlobalFunctions::byAverage(student a, student b)
{
	return compare_float_values(a.computeAverage(), b.computeAverage());
}

int GlobalFunctions::byEng(student a, student b)
{
	return compare_float_values(a.getGradeE(), b.getGradeE());
}

int GlobalFunctions::byMath(student a, student b)
{
	return compare_float_values(a.getGradeM(), b.getGradeM());
}

int GlobalFunctions::byHist(student a, student b)
{
	return compare_float_values(a.getGradeH(), b.getGradeH());
}