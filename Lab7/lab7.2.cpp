#include <iostream>
using namespace std;
typedef struct{
	int chysel;
	int znam;
}drib;
float division(float num1,float num2) {
	if (num2 == 0) {
		printf("[Error]: Division by zero.\n");
		exit(1);
	}
	return num1 / num2;
}
drib division(drib num1,drib num2) {
	if (num2.chysel == 0 || num1.znam == 0) {
		printf("[Error]: Division by zero.\n");
		exit(1);
	}
	drib num;
	num.chysel = num1.chysel*num2.znam;
	num.znam = num1.znam*num2.chysel;
	return num;
}
int main() {
	drib drib1 = {1,2};
	drib drib2 = {5,4};
	float num1 = 0.5;
	float num2 = 1.25;
	drib result = division(drib1, drib2);
	cout << "First division: " << division(num1, num2) << endl;
	cout << "Second division: " << result.chysel << "/" << result.znam << endl;
	return 0;
}
