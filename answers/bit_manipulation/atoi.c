#include <string.h>
#include <stdbool.h>
int my_atoi(const char* str) {
short int sign = 1;
int my_val = 0;
while (*str == ' ' || *str == '0') {
    str++;
}
if (*str == '-') {
    sign = -1;
    str++;
}
while(*str && ((*str >= 48) && (*str <=57))) {
    int newval = *str - '0';
    my_val = (my_val*10) + newval;
    str++;
}
return my_val * sign;
}