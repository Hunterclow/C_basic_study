//include:c언어 include 폴더를 의미
//stdio.h:Standard lnput Output 기본 입출력 코드 뭉치
#include <stdio.h>

//int: 함수의 출력이 정수값이다
//main: 함수의 이름
//void: 함수의 입력 값 void는 값을 받지 않는다.(입력형태)
//printf:문자열 출력함수
//;:코드 한줄의 종료
//return: 함수의 종료
//{}:코드블럭 /스코프
int main(void) {
	//특수문자의 종류
	//\n:개행
	//\t:수평탭
	//\\:역슬래쉬(\)
	//\":따옴표(")
	//\':작은따옴표(')
	//\a:경고음소리발생
	printf("\tHello C!\n");
	printf("Hello world!\n");
	printf("큰따옴표 : \" \"\n");
	printf("작은 따옴표 : \' \'\n");
	printf("역슬래시: \\\n");
	printf("Hello Wellcome C World\n");

	//숫자입력
	//10진수 정수: %d,%i
	//16진수 정수: %x,%o
	//10진수 실수: %f,%lf
	//한개의 문자: %c
	//10진수 정수(양수): %u
	//퍼센트 기호 출력: %%
	//****자주 쓰이는 서식문자****
	//%d,%f,%c

	//출력형태
	//3더하기 5는 8입니다
	//3-5= -2입니다.
	printf("%d 더하기 %d는 %d입니다.\n", 3, 5, 3 + 5);
	printf("%d - %d= %d입니다.\n",3, 5, 3 - 5);
	printf("50의 8진수 표기: %o\n", 50);
	printf("50의 10진수 표기: %d\n", 50);
	printf("50의 16진수 표기: %x\n", 50);

	/////// scanf함수 /////////
	//scanf_s([서식문자],[저장할 변수])


	int input_num;
	printf("정수값을 입력해주세요 : \n");
	scanf_s("%d", &input_num);
	printf("입력된 정수값은 %d 입니다.",input_num);
	

	//계산기
	
	int a;
	int b;
	printf("정수 a값을 입력해주세요.");
	scanf_s("%d",&a);
	printf("정수 b값을 입력해주세요.");
	scanf_s("%d",&b);
	printf("%d + %d=[%d]\n",a,b,a+b);
	printf("%d - %d=[%d]\n", a, b, a - b);
	printf("%d * %d=[%d]\n", a, b, a * b);
	printf("%d / %d=[%d]\n", a, b, a / b);
	
	//원의 반지름을 입력받아서 넓이를 계산하는 프로그램
	//실행결과
	//반지름을 입력하세요:2
	//원의 넓이는 12.560000입니다
	int r;
	double pi = 3.14;
	printf("원의 반지름을 입력받아서 넓이를 계산하는 프로그램 \n");
	printf("반지름을 입력하세요:");
	scanf_s("%d", &r);
	printf("원의 넓이는 %f입니다.", r*r * pi);
	return 0;
}