#include <stdio.h>

int main() {
    int a = 0x4561;
    a |= 0xF123;    //0xF563
    a &= 0x3322;    //0x3122
    a >>= 4;        //0x0312
    printf("0x%X", a);
    return 0;
}
