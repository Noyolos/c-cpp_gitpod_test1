#include <iostream>
using namespace std;

int main(void) {
	int i;
	float f;
	char s[30];
	char s1 = 'c';
	
	printf("Please input an integer \n");
	scanf("%d", &i);
	printf("Your input integer = %d\n", i);
	
	printf("Please input a float number \n");
	scanf("%f", &f);
	printf("Your input float number = %f\n", f);
	
	printf("Please input a string \n");
	scanf("%s", s);
	printf("Your input string = %s\n", s);
	
	printf("char display = %c\n", s1);
	printf("char display = %x\n", s1);
	
	printf("Your input integer = %d\n", i + 2);
	printf("Your input integer = %d\n", i - 2);
	printf("Your input integer = %d\n", i * 2);
	printf("Your input integer = %d\n", i / 2);
	
	return 0;
}
