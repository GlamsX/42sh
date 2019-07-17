/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:01:30+02:00
 */

#ifndef TAB_POINTERS_H_
#define TAB_POINTERS_H_

#include "struct_list.h"
#include "struct_tree.h"

typedef struct pointeur_s
{
    char *name;
    int (*pointeur)(main_list_t *, tree_t *, char **);
} pointeur_t;

typedef struct execution_s
{
    char *opperator;
    int (*func)(tree_t *, main_list_t *);
} execution_t;

#endif /* !TAB_POINTERS_H_ */
