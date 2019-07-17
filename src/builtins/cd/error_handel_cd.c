/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:53:25+02:00
 */

#include "mysh.h"

int gest_error(char *buf, int ret)
{
    struct stat st;

    if (!buf || ret == 0)
        return (0);
    lstat(buf, &st);
    if (!access(buf, F_OK) && S_ISDIR(st.st_mode)) {
        my_printf("%s: Permission denied.\n", buf);
        return (1);
    } else if (!access(buf, F_OK) && !S_ISDIR(st.st_mode)) {
        my_printf("%s: Not a directory.\n", buf);
        return (1);
    } else {
        if (buf[0] == '-')
            my_printf(": No such file or directory.\n");
        else
            my_printf("%s: No such file or directory.\n", buf);
        return (1);
    }
    return (0);
}
