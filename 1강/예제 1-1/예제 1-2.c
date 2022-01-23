/* 이 프로그램은 화씨를 섭씨로 변환하는 프로그램이다 */
#include <stdio.h>
// 변환 상수 정의
#define FZ_PT 32.0
#define S_FACTOR (5.0/9.0)

void main()
{
	float fa, ce;
	printf("Enter Fahrenheit temperature : ");
	scanf("%f", &fa);
	celsius = (fa - FZI_PT) * S_FACTOR;
	printf("Celsius equivalent : %.1f\n", ce);
}