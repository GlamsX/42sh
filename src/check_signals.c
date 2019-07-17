/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:22:04+02:00
 */

#include "mysh.h"

int check_signal(int status)
{
    if (status == 256)
        return (1);
    if (WTERMSIG(status) == SIGSEGV)
        my_printf("Segmentation fault");
    else if (WTERMSIG(status) == SIGFPE)
        my_printf("Floating exception");
    if (WCOREDUMP(status))
        my_printf(" (core dumped)\n");
    else
        (status > 1) ? my_printf("\n") : 0;
    return (status);
}
