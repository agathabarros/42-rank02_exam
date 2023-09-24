#include <unistd.h>
#include <stdlib.h>

void write_num(long a)
{
    if (a <0)
    {
        write(1, "-", 1);
        a = - a;
    }
    if (a > 9)
        write_num(a / 10);
    write(1, &"0123456789"[a % 10], 1);
}
void do_op(int a, int b, char op)
{
    if(op == '-')
        write_num(a - b);
    else if (op == '+')
        write_num(a + b);
    else if (op == '/')
        write_num(a / b);
    else if (op == '*')
        write_num(a * b);
    else if (op == '%')
        write_num(a % b);
}
int main (int ac, char **av)
{
    if(ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        char op = av[2][0];
        do_op(a, b, op);
    }
    write(1, "\n", 1);
}