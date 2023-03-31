#include <stdio.h>

int main(void) {

	char name[20];
	int age;
	char gender;

	printf("이름/나이/성별\n");

	scanf("%s %d %c", name, &age, &gender);

	printf("%s\n", name);
	printf("%d\n", age);
	printf("%c", gender);

	return 0;

}