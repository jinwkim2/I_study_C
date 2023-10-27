/* 프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서, 
입력 받은 문자가 대문자면 이를 소문자로 변환해서 출력해주고,
입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력해주는 프로그램을 작성해보자.
단, 문자의 입출력에는 getchar 함수와 putchar 함수를 사용하기로 하자.
그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를 간단히 출력하기로 하자. */

#include <stdio.h>

int main(void)
{
    int ch;

    printf("알파벳 문자를 하나 입력하세요 \n");
    ch = getchar();
        
    if ('A' <= ch && ch <= 'Z')
        ch = ch + ('a'-'A');
    else if ('a' <= ch && ch <= 'z')
        ch = ch - ('a'-'A');
    else
    {
        printf("알파벳 이외의 문자를 입력하셨습니다 \n");
        return 0;
    }

    putchar(ch);

    return 0;
}