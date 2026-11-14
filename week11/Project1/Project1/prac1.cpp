#include <stdio.h>

int main(void) {
	char str[100];
	char* p = str;
	int count = 0;

	printf("영문 문장을 입력하시오: ");
	if (fgets(str, sizeof(str), stdin) == NULL) return 1;

	for (char* p = str; *p != '\0'; p++) {
		if (*p >= 'a' && *p <= 'z') {
			*p -= 32;
		}
		if (*p != ' '&& *p != '\n') count++;
	}
	printf("대문자: %s", str);
	printf("글자 수 : %d", count);
}