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
}//���ù迭 ���
void main() {
	int namoegi;
	printf("������ ����� �������� �������� �ٲٴ� ���α׷�\n\n");
	printf("���� �Է�:");
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

	printf("\n������ %d --> ������ ", ten);
	while (top >= 0) {
		int item = pop();
		printf("%d", item);
	}
	printf("\n");

}
