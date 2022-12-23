#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

/**
 * struct list-  linked list for environmental variables
 *@var: holds environmental variable string
 *@next: points to the next node
 */

typedef struct list
{
	char *var;
	struct list *next;
} list_t;


/* helper functions */
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *int_to_string(int number);


/* strtok custom function */
int t_strlen(char *str, int pos, char delm);
int t_size(char *str, char delm);
char *ignore_delm(char *str, char delm);
char **_strtok(char *str, char *delm);
char **c_str_tok(char *str, char *delm);


/* getline custom function */
size_t _getline(char **str);

/* frees malloc arrays */
void free_double_ptr(char **str);

/*Linkedlist helper functions */
size_t print_list(list_t *h);
list_t *add_node_end(list_t **head, char *str);
int delete_nodeint_at_index(list_t **head, int index);
void free_linked_list(list_t *list);
list_t *env_linked_list(char **env);
int _env(char **str, list_t *env);

/* advanced functions */
int _cd(char **str, list_t *env, int num);
char *get_env(char *str, list_T *env);











#endif
