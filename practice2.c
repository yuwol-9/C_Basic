#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	printf("출생연도를 입력하세요.\n");
	scanf("%d", &a);
	printf("2002년 한일월드컵 당시 한국나이는 %d세입니다.", 2002 - a + 1);
	return 0;
}