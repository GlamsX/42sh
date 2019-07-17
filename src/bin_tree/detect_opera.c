/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:55:28+02:00
 */

#include "lib.h"

void skip_parantheses(char *opera, int *opera_pos)
{
    while (opera[*opera_pos] != '(' && *opera_pos > 0)
        *opera_pos -= 1;
}

int detect_opera(char *input, char *opera)
{
    int opera_pos = 0;

    if (!input)
        return (0);

    opera_pos = strlen(input) - strlen(opera);

    for (; opera_pos >= 0; opera_pos -= 1) {
        if (input[opera_pos + strlen(opera) - 1] ==  ')')
            skip_parantheses(opera, &opera_pos);
        if (my_strncmp(input + opera_pos, opera, strlen(opera)) == 0)
            return (opera_pos);
    }
    return (0);
}
