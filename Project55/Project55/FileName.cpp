#include<stdio.h>

int main() {
	float x, y;
	char c;
	printf("请输入两个数字：");
    scanf_s("%f%f", &x, &y);
	printf("请输入运算符号：");
	getchar();
	c = getchar();
	
	

	printf("dayin:x=%f    y=%f   operate=%c\n", x, y, c);

	switch (c) {
	case '-':
		printf("%f", x - y);
		break;
	case '+':
		printf("%f", x + y);
		break;
	case '*':
		printf("%f", x * y);
		break;
	case '/':
		if (y == 0) {
			printf("wrong");
		}
		else {
			printf("%f", x / y);
		}
		break;
	default:
		break;
	}

	getchar(); // 关闭输入流
}


/*#include<stdio.h>
int main() {
	float x, y;
	char c;
	scanf_s("%f%f", &x, &y);
	scanf_s('%c', &c);
	
	printf("%f%f%c", x, y, c);

	switch (c) {
	case '-':
		printf("%f",x-y);
		break;
	case '+':
		printf("%f",x+y);
		break;
	case '*':
		printf("%f",x*y);
		break;
	case '/':
		if (y == 0) {
			printf("wrong");
		}
		else {
			printf("%f", x / y);
		}
		break;
	
	}
}
*/