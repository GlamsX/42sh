/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:22:15+02:00
 */

#include "mysh.h"

int find_opp(char *str)
{
    if (!str)
        return (1);
    if (strcmp(str, "|") == 0 || strcmp(str, "||") == 0 ||
    strcmp(str, ">") == 0 || strcmp(str, ">>") == 0 || strcmp(str, "<") == 0
    || strcmp(str, "<<") == 0 || strcmp(str, "&&") == 0|| strcmp(str, "(") == 0
    || strcmp(str, ")") == 0 || strcmp(str, ";") == 0)
        return (0);
    else
        return (1);
    return (0);
}

int next_op(char **pars, int i)
{
    while (pars[i] != NULL) {
        if (find_opp(pars[i]) == 0 && strcmp(pars[i], ";") == 0)
            return (0);
        if (find_opp(pars[i]) == 0 && strcmp(pars[i], ";") != 0)
            return (1);
        i++;
    }
    return (0);
}

int is__redirection(char *str)
{
    if (strcmp(str, ">") == 0 || strcmp(str, "<") == 0 ||
    strcmp(str, "<<") == 0 || strcmp(str, ">>") == 0)
        return (0);
    return (1);
}
