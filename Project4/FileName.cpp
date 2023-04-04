#include <stdio.h>

int num1() { //요거는 왜 안되는걸까요ㅠㅠ
	printf("소수판별하고싶은 숫자를 입력하세요:");
	int a = 0;
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		if (a % i == 0) {
			printf(" 소수가 아닙니다.");
		}
		else
		{
			printf("소수입니다.");
		}
		
	}
	return 0;
}

int star1() {
	for (int i = 0; i < 8; i++) {  //총 5줄 출력
		for (int j = 0; j <i; j++) {
			printf(" "); // 빈칸출력
		}
		for (int j = 0; j < 8-(2 * i); j++) {
			printf("*");
		}
		printf("\n");

	}

	return 0;

}


int star2() {

	printf("변의 길이를 설정하세요:");
	int a = 0;
	scanf_s("%d", &a);

	for (int i = 0; i <= a; i++) { // 총 a줄 출력
		
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