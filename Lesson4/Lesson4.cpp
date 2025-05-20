#include <stdio.h>

int main()
{
    // 비트 연산자 : <<, >>, &, |, ~, ^(eXclusive OR)
    //  sigh  64 32 16 8 4 2 1 
    //ex) 


    short n3 = 0;
    short n1 = 3;    // 0011
    short n2 = 5;    // 0101
   // n3 = n1 & n2;  //0001 = 1 // bit and
    n3 = n1 | n2;    // 0111 = 7 // bit or
    printf(" n3 = %d\n", n3);

    n3 = ~n1;
    printf(" n3 = %d\n", n3);

    //XOR
    n3 = n1 ^ n2;   // 0110
    printf(" n3 = %d\n", n3);

    // 0011(3) ===> 1100 (12)
    n3 = n1 << 2; // n1을 왼쪽으로 2비트 이동시킴 
    printf(" n3 = %d\n", n3);
    
    // 0101(5) ===> 0001 (1) //음수인 경우 이동 X
    n3 = n2 >> 2;  
    printf(" n3 = %d\n", n3);




    return 0;

}