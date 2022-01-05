#include <stdio.h>

int Bsearch(int ar[], int len, int target)
{
	int first = 0;// Ž�� ����� ���� �ε��� ��
	int last = len - 1;//Ž�� ����� ������ �ε��� ��
	int mid;
	int OpCount = 0;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (target == ar[mid])
		{
			return mid;
		}
		else
		{
			if (target < ar[mid])

				last = mid - 1;

			else

				first = mid + 1;

		}
		OpCount += 1;
	}
	printf("���� Ƚ��: %d\n", OpCount);
	return -1;
}

int main(void)
{
	int arr[50] = {0, };
	int arr1[500] = { 0, };
	int arr2[5000] = { 0, };
	int idx;

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 3);

	if (idx == -1)
	{
		printf("Ž�� ����\n");
	}
	else
	{
		printf("Ÿ�� ���� �ε���:%d\n", idx);
	}

	idx = Bsearch(arr1, sizeof(arr1) / sizeof(int), 4);

	if (idx == -1)
	{
		printf("Ž�� ����\n");
	}
	else
	{
		printf("Ÿ�� ���� �ε���:%d\n", idx);
	}

	idx = Bsearch(arr2, sizeof(arr2) / sizeof(int), 4);

	if (idx == -1)
	{
		printf("Ž�� ����\n");
	}
	else
	{
		printf("Ÿ�� ���� �ε���:%d\n", idx);
	}
	return 0;

}
