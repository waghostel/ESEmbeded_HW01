#include <stdio.h>
#include <stdlib.h>

typedef void (*pFun)(int, int);
int plus(int a, int b){return a+b;}
int minus(int a, int b){return a-b;}
int multiply(int a, int b){return a*b;}
int divide(int a, int b){return a/b;}

typedef void (*pFun)(int, int);
void pt(int a, char b, int c, pFun pF){
 printf("%d %c %d = %d\n",a,b,c,pF);
}

int main()
{
    int a,c;
    char b;

    printf("Enter a,b,c: ");
    scanf("%d %c %d", &a,&b,&c);

    if(b=='+')
    pt(a, b, c, plus(a,c));
    //printf("%d %c %d = %d\n",a,b,c,plus(a,c));
    if(b=='-')
    pt(a, b, c, minus(a,c));
    //printf("%d %c %d = %d\n",a,b,c,minus(a,c));
    if(b=='*')
    pt(a, b, c, multiply(a,c));
        //printf("%d %c %d = %d\n",a,b,c,multiply(a,c));
    if(b=='/')
    pt(a, b, c, divide(a,c));
        //printf("%d %c %d = %d\n",a,b,c,divided(a,c));

    return 0;
}


