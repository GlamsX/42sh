/*
** EPITECH PROJECT, 2019
** struct_tree.h
** File description:
** struct_tree.h
*/

#ifndef STRUCT_TREE_H_
#define STRUCT_TREE_H_

typedef struct tree_s {
    int *fd;
    char *opera;
    char *command;
    struct tree_s *left;
    struct tree_s *right;
} tree_t;

typedef struct tree_operator_s {
    char *op;
} tree_operator_t;

void print_tree(tree_t *tree);

tree_t *create_new_node(char *opera_node);
int complete_tree(tree_t *tree);

char **opera_separa(char *input, char *opera);
int detect_opera(char *input, char *opera);
int add_new_opera_node(tree_t *last_node, char **opera_node, char *opera);
void destroy_tree(tree_t *tree);

#endif /* !STRUCT_TREE_H_ */