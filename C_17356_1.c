/*
오늘은 운명의 라이벌 권욱과 권제가 숙명의 대결을 펼치는 날이다. 대결 종목은 바로 2019년 천하제일 코딩대회 본선 문제 중 하나인 "욱 제"를 더 빨리 푸는 것이다.
욱과 제는 "욱 제"를 빨리 푸는 능력, 일명 "욱제력"을 가지고 있다. 이 욱제력은 하나의 정수로 수치화할 수 있다. 욱의 욱제력이 A, 제의 욱제력이 B일 때, M을 (B-A)/400이라고 하자. 
이때 욱이 제를 이길 확률은 1/(1+10의 M 제곱)이다. 이 값은 얼마일까?

욱의 욱제력과 제의 욱제력이 한 줄에 주어진다. 욱제력은 0 이상 5,000 이하의 정수이다.

욱이 제를 이길 확률을 출력한다. 정답과의 절대오차 또는 상대오차가 10-4 이하이면 정답으로 인정한다.
*/

#include <stdio.h>
#include <math.h> // pow() 함수를 사용하기 위해서

int main(void)
{
    int A, B; // 변수 선언
    double M, result; // 변수 선언
    scanf("%d %d", &A, &B); // 사용자로부터 두 개의 정수 입력받기
    M=(B-A)/400.0; // M에 (B-A)/400.0 대입하기
    result=1/(1+pow(10, M)); // result에 1/(1+pow(10, M)) 대입하기
    
    printf("%lf\n", result); // 결과 출력하기
    
    return 0;
}
