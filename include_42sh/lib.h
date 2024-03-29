/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:02:02+02:00
 */

#ifndef LIB_H_
#define LIB_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>
#include <ncurses.h>
#include <getopt.h>
#include <stdbool.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <term.h>
#include <math.h>
#include <glob.h>

#include "utils_functions.h"
#include "../lib/my_printf/my_printf.h"
#include "get_next_line.h"
#include "../lib/arraylist/include_vector/vector.h"
#include "../lib/linked_list/include_linked_list/linked_list.h"

void my_printf(char *, ...);

#endif /* !LIB_H_ */
