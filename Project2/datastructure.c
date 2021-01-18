#include <stdio.h>
#pragma warning (disable:4996)

#define STACK_SIZE 100

int top = -1;
int stack[STACK_SIZE];
int num;

void push(int item) {
	if (top >= STACK_SIZE - 1)
		printf("stack full\n");
	else {
		stack[++top] = item;
	}
}
int pop() {
	if (top < 0) {
		printf("stack empty");
		return -999;
	}
	else
		return stack[top--];
}
void printStack() {
	printf("[STACK]");
	for (int i = 0; i <= top; i++) {
		printf("%2d", stack[i]);
	}
}//스택배열 출력
void main() {
	int namoegi;
	printf("스택을 사용한 십진수를 이진수로 바꾸는 프로그램\n\n");
	printf("정수 입력:");
	scanf("%d", &num);
	int ten = num;
	printf("\n\n");
	while (num >= 1) {
		namoegi = num % 2;
		num = num / 2;
		push(namoegi);
		printStack();
		printf("\n");
	}

	printf("\n십진수 %d --> 이진수 ", ten);
	while (top >= 0) {
		int item = pop();
		printf("%d", item);
	}
	printf("\n");

}
