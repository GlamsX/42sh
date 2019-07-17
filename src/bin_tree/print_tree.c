/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:55:04+02:00
 */

#include "utils_functions.h"
#include "struct_tree.h"
#include "lib.h"

void print_tree(tree_t *tree)
{
    if (tree == NULL)
        return;
    if (tree->opera)
        printf("opera = %s\n", tree->opera);
    if (tree->command)
        printf("command = %s\n", tree->command);
    if (tree->left != NULL) {
        if (tree->left->opera)
            printf("left = %s\n", tree->left->opera);
        if (tree->left->command)
            printf("left = %s\n", tree->left->command);
        print_tree(tree->left);
    }
    if (tree->right != NULL) {
        if (tree->right->opera)
            printf("right = %s\n", tree->right->opera);
        if (tree->right->command)
            printf("right = %s\n", tree->right->command);
        print_tree(tree->right);
    }
}
