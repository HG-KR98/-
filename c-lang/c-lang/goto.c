#include <stdio.h>

int main() {
	
	printf("ù ��° ��¹��Դϴ�.\n");
	printf("�� ��° ��¹��Դϴ�.\n");

	goto third; // third ���̺�� �̵�

	printf("�� ������ ������ ���� ���Դϴ�.\n");

third:
	printf("�� ��° ��¹��Դϴ�.\n");
	printf("�� ��° ��¹��Դϴ�.\n");
	printf("�ټ� ��° ��¹��Դϴ�.\n");


	int i;

	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			goto target;
		}
		else {
			printf("%d", i);
		}
		printf("i = %d\n", i);
	}

target:
	printf("Ÿ�� ���̺�� �̵�\n");
	printf("i = %d\n", i);


	int j, k;

	for (j = 0; j < 5; j++) {
		for (k = 0; k < 5; k++) {
			if (j*k == 3) {
				goto end;
			}
			printf("j = %d,k = %d\n", j, k);
		}
	}

end:
	printf("�ݺ����� ���� �����ϴ�.\n");


	return 0;
}