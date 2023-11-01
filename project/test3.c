#include <stdio.h>

int main(void) {
	char type[4], name[10];
	printf("type: ");
	scanf("%s", type);
	printf("name: ");
	scanf("%5s", name);

	printf("%s %s\n", type, name);
}
