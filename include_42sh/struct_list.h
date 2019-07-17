/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:01:40+02:00
 */

#ifndef STRUCT_LIST_H_
#define STRUCT_LIST_H_

#include "lib.h"

typedef struct main_list_s {
    list_t env;
    list_t history;
    list_t *alias;
    arraylist_t *env_loc;
    char *str;
    int value_return;
    char **sec_path;
} main_list_t;

typedef struct term_s
{
    struct termios old;
    struct termios new;
    char *str;
    char *prompt;
    int pos;
    int ver;
} term_t;

enum {
    n_flag,
    e_flag
};

#endif /* !STRUCT_LIST_H_ */
