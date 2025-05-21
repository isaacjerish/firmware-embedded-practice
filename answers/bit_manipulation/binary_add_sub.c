#include<stdlib.h>
#include<stdio.h>
int bitwiseArithmetic(int a, int b, int c) {
    switch (c){
        case (0): //add
            while (b) {
                int carry = (a&b) << 1;
                a = a ^ b;
                b = carry;
            }
            return a;
        case (1):
            b= ~b;
            while (b) {
                int carry = (a&b) << 1;
                a = a^b;
                b = carry;
            }
            b = 1;
            while (b) {
                int carry = (a&b) << 1;
                a = a^b;
                b = carry;
            }
            return a;
        default:
            printf("Unrecogonized operation select");
            return -1;
    }
}