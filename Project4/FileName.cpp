#include <stdio.h>

int num1() { //��Ŵ� �� �ȵǴ°ɱ��Ф�
	printf("�Ҽ��Ǻ��ϰ���� ���ڸ� �Է��ϼ���:");
	int a = 0;
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		if (a % i == 0) {
			printf(" �Ҽ��� �ƴմϴ�.");
		}
		else
		{
			printf("�Ҽ��Դϴ�.");
		}
		
	}
	return 0;
}

int star1() {
	for (int i = 0; i < 8; i++) {  //�� 5�� ���
		for (int j = 0; j <i; j++) {
			printf(" "); // ��ĭ���
		}
		for (int j = 0; j < 8-(2 * i); j++) {
			printf("*");
		}
		printf("\n");

	}

	return 0;

}


int star2() {

	printf("���� ���̸� �����ϼ���:");
	int a = 0;
	scanf_s("%d", &a);

	for (int i = 0; i <= a; i++) { // �� a�� ���
		
		for (int j = 0; j < i; j++) {
			printf("* ");
			
			
		}
		printf("\n");
	}
	return 0;
}

int main() {

	star1();


	

	
}