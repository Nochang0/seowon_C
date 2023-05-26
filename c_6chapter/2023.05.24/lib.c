#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int num_alpha=0, num_number=0, num_etc=0;
    
	printf("Please enter a character >> ");
    c = getchar();
    
    while(c != EOF) {
        if(isalpha(c))
            num_alpha++;
        else if(isdigit(c))
            num_number++;
        else
            num_etc++;
        c = getchar();
    }
    
    printf("num_alpha = %d\n", num_alpha);
    printf("num_number = %d\n", num_number);
    printf("num_etc = %d\n", num_etc);
	return 0;
}
