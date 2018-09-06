/*
피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다.
정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을 구하여라.



예제)

Input: N = 12

	Output : 10 // 0, 1, 2, 3, 5, 8 중 짝수인 2 + 8 = 10.

Not yet testing.
main 만들기 귀찮아서...아놔

*/

#include <stdio.h>
#include "pibonacci.h"


_pibonacci_t * pibonacci_initialization() {
	_pibonacci_t * pibo = (_pibonacci_t *)malloc(sizeof(_pibonacci_t *));
	pibo->pibonacci = (int *)malloc(sizeof(int *) * SHRT_MAX);

	pibo->num = get_number();
	pibo->sum = 0;
	pibo->count = 0;

	return pibo;
}

int get_number() {
	int num;
	printf("Input a number\n");
	scanf("%d", &num);
	return num;
}

void insert_pibonacci(_pibonacci_t * pibo) {
	printf("num : %d\n", pibo->num);
	for (int num = 0; ; num++) {
		pibo->pibonacci[pibo->count] = find_pibonacci(num);
		pibo->count++;
		if (pibo->pibonacci[num] > pibo->num)
			break;
	}
}


int find_pibonacci(int num) {
	if (num <= 0) {
		return 0;
	}
	switch (num) {
	case 1: return 1;
		break;
	default : return find_pibonacci(num - 1) + find_pibonacci(num - 2);
		break;
	}
}

void print_sum_pibonacci(_pibonacci_t * pibo) {
	printf("%d\n", pibo->sum);
}

void print_pibonacci(_pibonacci_t * pibo) {
	printf("PIBONACCI\n");
	for (int i = 0; i < pibo->count; i++) {
		printf("%d\t:\t%d\n", i, pibo->pibonacci[i]);
	}
}

void sum_pibonacci(_pibonacci_t * pibo) {
//	int sum = 0;
	for (int i = 0; i <= pibo->count; i++) {
		if (is_even(pibo->pibonacci[i])) {
			pibo->sum += pibo->pibonacci[i];
		}
		else
			continue;
	}
//	pibo->sum = sum;
}

int is_even(int num) {
	if (num % 2 == 0) {
		return 1;
	}
	else
		return 0;
}