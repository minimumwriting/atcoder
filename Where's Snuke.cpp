/*
https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_a

snake중 snuke를 찾는 문제
그저 입력 받으면서 비교하면 된다.
*/

#include <cstdio>
#include <string.h>

int main(){
    int i,j;
    int H,W;
    char buf[10];

    scanf("%d %d",&H,&W);

    for(i = 0; i < H;i++){
        for(j = 0;j < W;j++){
            scanf("%s",buf);

            if(strcmp(buf,"snuke") == 0) { 
                printf("%c%d\n",j + 'A',i + 1);
                return 0;
            }
        }
    }
    return 0;
}
