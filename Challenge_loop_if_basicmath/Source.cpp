#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	float av, sd, diff, sigma = 0;
	int num1, num2, anum[1000], sum = 0;
	scanf("%d%d", &num1, &num2);
	diff = abs(num1 - num2);
	if (num1 > num2) {
		for (int i = 0; i < diff + 1; i++) {
			printf("%d ", num1);
			anum[i] = num1;
			sum += num1;
			num1--;
		}
		av = sum / (diff + 1);
		for (int j = 0; j < diff + 1; j++) {
			sigma += pow(anum[j] - av, 2);
			num1--;
		}
		sd = sqrt(sigma / diff);
		printf("\nAverage = %.1f", av);
		printf("\nSD = %.2f", sd);
	}
	else if(num1==num2){
		printf("%d", num1);
		printf("\nAverage = %d", num1);
		printf("\nSD = %.2f", 0);
	}
	else {
		for (int i = 0; i < diff + 1; i++) {
			printf("%d ", num1);
			anum[i] = num1;
			sum += num1;
			num1++;
		}
		av = sum / (diff + 1);
		for (int j = 0; j < diff + 1; j++) {
			sigma += pow(anum[j] - av, 2);
			num1++;
		}
		sd = sqrt(sigma / diff);
		printf("\nAverage = %.1f", av);
		printf("\nSD = %.2f", sd);
	}
	return 0;
}