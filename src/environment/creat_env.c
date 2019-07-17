/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:24:30+02:00
 */

#include "mysh.h"

void create_new_env(list_t *list)
{
    char *path1 =
    "PATH=/home/la-montagne/bin:/home/la-montagne/.local/bin:/usr/local/sbin:";
    char *path2 =
    "/usr/local/bin:/usr/sbin:/usr/bin:/sbin:";
    char *path3 = "/bin:/usr/games:/usr/local/games:/snap/bin";
    char *path = my_strcat(path1, path2);
    char *term = "TERM=xterm-256color";
    char *pwd = malloc(sizeof(char) * 4096);

    path = my_strcat(path, path3);
    pwd = getcwd(pwd, 4096);
    push_back_haroun(list, path);
    push_back_haroun(list, term);
    push_back_haroun(list, my_strcat("PWD=", pwd));
}
