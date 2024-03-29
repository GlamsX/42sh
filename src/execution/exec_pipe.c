/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:23:50+02:00
 */

#include "mysh.h"

int exec_pipe(tree_t *tree, main_list_t *main)
{
    int fd[2];
    int my_fork = 0;
    int status = 0;

    if (pipe(fd) == -1)
        return (1);
    tree->right->fd[0] = fd[0];
    tree->left->fd[1] = fd[1];
    my_fork = fork();
    if (my_fork == 0) {
        do_execution(tree->left, main);
        close(tree->fd[1]);
        exit(0);
    }
    close(tree->left->fd[1]);
    do_execution(tree->right, main);
    waitpid(my_fork, &status, 0);
    return (status);
}
