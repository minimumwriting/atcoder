/*
https://atcoder.jp/contests/cf17-final/tasks/cf17_final_a

AKIHABARA가 될 수 있는 문자열은 A가 4개이므로 16개
별로 많지 않으니 노가다로 전부 비교해보자
*/

#include <stdio.h>
#include <string.h>

char tar[][11] = {
    "KIHBR",
    "KIHBRA",
    "KIHBAR",
    "KIHABR",
    "AKIHBR",
    "KIHBARA",
    "KIHABRA",
    "KIHABAR",
    "AKIHBRA",
    "AKIHBAR",
    "AKIHABR",
    "KIHABARA",
    "AKIHABAR",
    "AKIHABRA",
    "AKIHBARA",
    "AKIHABARA",
    };

int main() {

    int i;
    char str[100];

    scanf("%s",str);

    for(i = 0;i < 16;i++){
        if(strcmp(tar[i],str) == 0) {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
    return 0;
}
