#include <stdio.h>

// ���� �迭
int intArray[] = { 1, 2, 3, 4, 5 };
int intArray[5] = { 1, 2, 3, 4, 5 };

// ���� �迭
char charArray[] = { 'a', 'b', 'c', 'd', 'e' };
char charArray[5] = { 'a', 'b', 'c', 'd', 'e' };

// �Ǽ� �迭
float floatArray[] = {1.2, 3.4, 5.6, 7.8, 9.0};
float floatArray[9] = { 1.2, 3.4, 5.6, 7.8, 9.0, 1.2, 3.4, 5.6, 7.8 };

// ���ڿ� �迭
char* stringArray[] = { "apple", "banana", "cherry", "date", "elderberry" };
char stringArray[][20] = { "apple", "banana", "cherry", "date", "elderberry" };

// �迭�� ������ ���� ���� ũ�⸦ ���� ���� �ְ�, �� ���� ���� �ִ�.
// ���迡���� �迭�� ��ҿ� �����ϴ� ������ ���� ���´�.
// ���� ��Ҵ� ����[���°]�� �����Ѵ�.
// �ε����� 0���� ����!