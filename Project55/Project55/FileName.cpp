#include<stdio.h>

int main() {
	float x, y;
	char c;
	printf("�������������֣�");
    scanf_s("%f%f", &x, &y);
	printf("������������ţ�");
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

	getchar(); // �ر�������
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