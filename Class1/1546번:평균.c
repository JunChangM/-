#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int score[1000];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	// max 값 찾기
	int M = -1;
	for (int i = 0; i < n; i++) if (score[i] > M) M = score[i];
	//mean 찾기
	int sum = 0;
	for (int i = 0; i < n; i++) sum += score[i];
	double mean = (float)sum / n; // 계산전 float로 변환해주어야 소수점 계산이 원활히 됨.
	printf("%lf", mean / M * 100);
	return 0;
}
