/*
x의 배수 중 y의 배수가 아닌 것을 찾는 문제
x역시 x의 배수이다.
그렇다면 x가 y의 배수가 아니라면????
*/

#include <cstdio>

unsigned long long X,Y;

int main() {
    scanf("%llu %llu",&X,&Y);

    if(X % Y == 0) puts("-1");
    else {
        printf("%llu",X);
    }
    return 0;
}
