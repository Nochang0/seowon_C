/*
* 프로그램 내용 : 프로그래밍 12과 계산기 프로그램의 입력에 대한 에러 처리
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.17
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int a, b;
    char op;
    while (1) {

        printf("수식? ");
        if (scanf("%d %c %d", &a, &op, &b) < 3) {

            printf("<정수><연산자><정수> 형태로 입력하세요.\n");
            while (getchar() != '\n') {}
            continue;
        }

        if (a == 0 && op == '0' && b == 0)
            break;
        switch (op) {
            case '+':
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case '-':
                printf("%d-%d = %d\n", a, b, a - b);
                break;
            case '*':
                printf("%d %d = %d\n", a, b, a * b);
                break;
            case '/':
                if (b != 0)
                    printf("%d / %d = %.2f\n", a, b, (double) a / b);
                else
                    printf("0으로 나눌 수 없습니다.\n");
                break;
            default:
                printf("잘못된 수식입니다.\n");
                break;
        }
    }

    return 0;
}