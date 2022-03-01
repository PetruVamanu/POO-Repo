#pragma once
class student
{
private:
	static constexpr int MAXSTUDENTNAME = 50;
	char name[MAXSTUDENTNAME] = {};
	float gradeM = 0.0f, gradeE = 0.0f, gradeH = 0.0f;
public:
	void setName(const char* s);
	inline const char* getName() {
		return name;
	}
	void setGradeM(float x);
	inline float getGradeM() {
		return gradeM;
	}
	void setGradeE(float x);
	inline float getGradeE() {
		return gradeE;
	}
	void setGradeH(float x);
	inline float getGradeH() {
		return gradeH;
	}
	float computeAverage();
};

