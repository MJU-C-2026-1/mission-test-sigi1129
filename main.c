// 1. 주석
/*
       여러줄 주석 
     프로그램 : main.c
     작 성 자 : 정준식, 26-03-16
     하 는 일 : 화면에 hello world를 출력!!!
*/

// 2. 전처리기
#include <stdio.h>           // 표준 입출력 포함( include)
#include <stdlib.h>

// 3. main 함수
int main()
{
	system("chcp 65001");      // 한글로 나오게
	
	printf("hello, world!\n"); // 화면에 hello world 출력
	printf("정준식\n");
	printf("첫 번째 줄\n두 번째 줄\n");
	printf("\"정준식\"\t23\t동탄");
	return 0;
}