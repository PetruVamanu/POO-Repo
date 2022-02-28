#include <iostream>

int main()
{
	FILE* f = nullptr;
	fopen_s(&f, "G:\\Facultate\\OOP\\lab1\\Debug\\in.txt", "r");
	char buffer[1024];
	int sizeB = fread(buffer, 1, 1024, f);
	fclose(f);
	int number = 0;
	int sum = 0;
	bool negative = false;
	for (int i = 0; i < sizeB; ++i)
	{
		if (buffer[i] >= '0' && buffer[i] <= '9')
		{
			number = number * 10 + buffer[i] - '0';
		}
		else if (buffer[i] == '-' && number == 0)
		{
			negative = true;
		}
		else {
			sum += negative ? -number : number;
			negative = false;
			number = 0;
		}
	}
	sum += number;
	printf("%d ", sum);
	/*
	for (int i = 0; i < 10; ++i);
	*/
	return 0;
}