#include <stdio.h>
#include <string.h>

int main() {
	int n = 42;
	int* p = &n;
	
	printf("%d\n", n);
	printf("%d\n", &n);
	printf("%d\n", p);
	printf("%d\n", *p);
	
	// ���� �ּҷ� �Ѿ�� ���
	char* s = "Hello, World!";
	printf("%c", *s);
	printf("%c", *(s+1));
	printf("%c", *(s+2));
	printf("%c", *(s+3));
	return 0;

	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("�迭�� ���:");
	for (int i = 0; i < size; i++) {	
		printf("%d", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;

	char str1[5] = { 'H', 'e', 'l', 'l', 'o'};
	char str2[] = "Hello";
	printf("str1�� ����: %lu\n", sizeof(str1));
	printf("str2�� ����: %lu\n", sizeof(str2));

	printf("str1�� ����: ");
	for (int i = 0; i < sizeof(str1); i++) {
		printf("%c", str1[i]);
	}
	printf("\n");

	printf("str2�� ����: %s\n", str2);

	return 0;

	// ������ ������ �޸� ���� �ٸ���.
	// �¶����� ���: �������� �޸� �Ҵ�
	// ������ ���: �ü���� �޸𸮿� �Ҵ�
	int n = 50;
	printf("%s%d\n", "value:", n);
	printf("%s%d\n", "address:", &n);
}