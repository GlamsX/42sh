/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:00:28+02:00
 */

#include "include_linked_list/linked_list.h"

void push_start(list_t *list, elem_t *elem)
{
    list->start->prev = elem;
    elem->next = list->start;
    list->start = elem;
}

void push_end(list_t *list, elem_t *elem)
{
    list->end->next = elem;
    elem->prev = list->end;
    list->end = elem;
}

void move_temp(elem_t *temp, elem_t *elem)
{
    temp->prev->next = elem;
    temp->prev = elem;
    elem->prev = temp->prev;
    elem->next = temp;
}

void detect_position(list_t *list, elem_t *elem, int index)
{
    int i = 1;
    int j = list->size;

    for (elem_t *temp1 = list->start, *temp2 = list->end; temp1 != NULL ||
    temp2 != NULL; i += 1, j -= 1) {
        temp1 = temp1->next;
        temp2 = temp2->prev;
        if (i == index) {
            move_temp(temp1, elem);
            break;
        } else if (j == index) {
            move_temp(temp2, elem);
            break;
        }
    }
}

void insert_element_at(list_t *list, char *str, int index)
{
    elem_t *elem = malloc(sizeof(elem_t));

    if (elem == NULL)
        return;
    elem->data = str;
    elem->prev = NULL;
    elem->next = NULL;
    if (list->size == 0) {
        list->start = elem;
        list->end = elem;
    } else if (index == 1) {
        push_start(list, elem);
        list->size += 1;
        return;
    }
    if (index == list->size)
        push_end(list, elem);
    else if (index > 1 && index < list->size)
        detect_position(list, elem, index);
    list->size += 1;
}
