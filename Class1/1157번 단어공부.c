#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000001];
    int max = 65;
    int count[91] = { 0, }; // char count[91]로 했을 경우 char형의 최댓값이 127로 모든 개수를 파악하지 못한다. 이것때매 엄청 고생했다...
    scanf("%s", a);
    for (int j = 0; a[j]!='\0'; j++) {
        for (int i = 65; i <= 90; i++) {
            if (a[j] == (char)(i) || a[j] == (char)(i + 32)) {
                count[i]++;
                break;
            }
        }
    }
    for (int i = 65; i <= 90; i++) {
        if (count[max] < count[i]) max = i;
    }
    for (int i = 65; i <= 90; i++) {
        if (count[max] == count[i] && max != i) {
            printf("?");
            return 0;
        }
    }
    printf("%c", max);
    return 0;
}
/*
만약 다시짠다면,
1. int count[26]으로 지정
2. ACSII 코드 값을 빼는 형식으로 0~26 범위 맞춤
3. 마지막 출력시 + 65를 통해 대문자로 변경
*/
