/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:59:08+02:00
 */

#include "../my_printf.h"

int check_nbrs(char c)
{
    if ((c >= '0' && c <= '9') || (c == '+' || c == '-' || c == '.'))
        return (0);
    return (1);
}

int check_flags(char c)
{
    char *flags = "csidupxXSbfo";

    for (int i = 0; flags[i] != '\0'; i++)
        if (flags[i] == c)
            return (0);
    return (1);
}

int check_format(char c)
{
    if (c == 'l')
        return (0);
    return (1);
}

int check_doublons(char c)
{
    char *flags = "csidupxXSbfo";

    for (int i = 0; flags[i] != '\0'; i++)
        if (flags[i] == c)
            return (0);
    return (1);
}
