#include <stdio.h>

int main() {
	
	// ���ڿ� �迭�� �Ҵ�
	char str1[] = "Hello";

	// ���ڿ� �����ͷ� �Ҵ�
	char* str2 = "Hello";

	// ���� �迭�� �Ҵ�
	char str3[] = { 'H', 'e', 'l', 'l', 'o', '\0'};

	// ���ڿ� �迭 �Ҵ� �� ���� ���� �Ҵ�
	char str4[6];
	str4[0] = 'H';
	str4[1] = 'e';
	str4[2] = 'l';
	str4[3] = 'l';
	str4[4] = 'o';
	str4[5] = '\0';

	// ���� ������ ���
	for (int i = 0; str1[i] != '\0'; i++) {
		printf("%c", str1[i]);

	}
	printf("\n");

	// puts �Լ��� ���
	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);

	// �����͸� ����Ͽ� ���ڿ� ���
	char* ptr = str2;
	while (*ptr != '\0') {
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");

	// printf �Լ��� ���
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);


	char charArray[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	printf("%s\n", charArray);
	return 0;

	char* str = "Hello";
	printf("%s\n", str);
	return 0;

}

