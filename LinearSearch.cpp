 
#include <stdio.h>

int Lsearch(int ar[], int len, int target)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;
	}
	return -1;
}
int main(void)
{
	int arr[] = { 3,5,2,4,9 };
	int idx;

	idx = Lsearch(arr, sizeof(arr) / sizeof(int), 4); // sizeof arr= 4*5, sizeof int=4, ���� ����... �޸� ����?
	if (idx == -1)
		printf("Ž������ \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);
	idx = Lsearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
	return 0;
}