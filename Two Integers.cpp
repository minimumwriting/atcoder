
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
