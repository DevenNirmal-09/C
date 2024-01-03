#include<stdio.h>
void display();
int main()
{
void (*func_ptr)();
func_ptr=display;
printf("Address of functions display is %u\n",func_ptr);
(*func_ptr)();
printf("23DEC058 - NITYARAJ KHER");
return 0;
}
void display()
{
 puts("By helping others, we help overselves!!");
}

