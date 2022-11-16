#include "shell.h"

/**
 * add_rvar_node - adds a variable at the end
 * of a varz_list list.
 * @head: head of the linked list.
 * @lvar: length of the variable.
 * @val: value of the variable.
 * @lval: length of the value.
 * Return: address of the head.
 */
varz_list *add_rvar_node(varz_list **head, int lvar, char *val, int lval)
{
	varz_list *new, *temp;

	new = malloc(sizeof(varz_list));
	if (new == NULL)
		return (NULL);

	new->len_var = lvar;
	new->val = val;
	new->len_val = lval;

	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

/**
 * free_rvar_list - frees a varz_list list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_rvar_list(varz_list **head)
{
	varz_list *temp;
	varz_list *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
