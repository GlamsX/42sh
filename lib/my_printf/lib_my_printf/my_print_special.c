/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:59:40+02:00
 */

#include "../my_printf.h"

void print_spaces(int spaces, int size, int *format)
{
    (void)format;
    if (spaces > size)
        for (int i = 0; i != spaces - size; i++)
            my_putchar(' ');

}

void print_zero(int spaces, int size)
{
    if (spaces > size)
        for (int i = 0; i != spaces - size; i++)
            my_putchar('0');
}

void print_spaces_or_zero(int spaces, int size, int *format)
{
    if (format[3] == 0)
        print_spaces(spaces, size, format);
    if (format[3] == 1)
        print_zero(spaces, size);
}

void speciale_print_exa(int spaces, int size, int *format)
{
    if (format[2] == 0)
        print_spaces_or_zero(spaces, size, format);
    else if (format[2] == 1) {
        my_putstr("0x");
        print_spaces_or_zero(spaces, size, format);
    }
}

void speciale_print_exa_maj(int spaces, int size, int *format)
{
    if (format[2] == 0)
        print_spaces_or_zero(spaces, size, format);
    else if (format[2] == 1) {
        my_putstr("0X");
        print_spaces_or_zero(spaces, size, format);
    }
}
