#include <stdio.h>

#define HELLO "Hello World!"
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main(){
    printf("hello world!\n");
    printf(HELLO);
    printf("\n");
    printf("MIN(5, 3)=%d\n", MIN(5, 3));
    printf("当前文件名：%s, 当前行号：%d\n", __FILE__, __LINE__);
    return 0;
}