#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num[3], i, j, subNum = 0;
	printf("Enter 3 Number : ");
	scanf("%d%d%d", &num[0], &num[1], &num[2]);
	int max = num[0], med = 0, min = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (num[i] < num[j]) {
				subNum = num[i];
				num[i] = num[j];
				num[j] = subNum;
			}
		}
	}
	//	for(i=0;i<3;i++){
	//		printf("%d\t",num[i]);
	//	}
	//	printf("\n");
	printf("Maximum\t= %d \nMedium\t= %d \nMinimum\t= %d", num[2], num[1], num[0]);
	return 0;
}