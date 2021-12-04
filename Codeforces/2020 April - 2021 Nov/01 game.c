#include <stdarg.h>

#include <stdio.h>

int f(int n, ...) {

va_list list;

va_start(list,n);

char c;

while(va_arg(list,int) != 0)

c = va_arg(list,int);

va_end(list);
va_end(list);
va_end(list);
va_end(list);

return c;

}

int main(void) {

printf("[%c]\n", f('a','b','c','\0'));

return 0;

}
