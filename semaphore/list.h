#ifndef LINK_LIST_H
#define LINK_LIST_H

struct customer_info_obj
{
    int val;
    int remain_time;
    bool has_scanner;
    struct customer_info_obj *next;
};

struct list_object_struct
{
    int    meta_data;
    struct customer_info_obj *head;
    struct customer_info_obj *curr;
};

struct customer_info_obj* create_list(struct list_object_struct* obj, int val);
struct customer_info_obj* add_to_list(struct list_object_struct* obj, int val);
struct customer_info_obj* search_in_list(struct list_object_struct* obj, int val, struct customer_info_obj **prev);
int delete_from_list(struct list_object_struct* obj, int val);
void print_list(struct list_object_struct* obj);
int list_count_down(struct list_object_struct* obj, struct customer_info_obj *curr_cust_obj );

#endif 