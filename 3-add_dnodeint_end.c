#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - ajoute un nouveau nœud à la fin d'une liste doubly linked list
 * @head: pointeur vers le pointeur de la tête de la liste
 * @n: valeur à stocker dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	if (!head)
	return NULL;

    /* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return NULL;

    /* Initialisation du nouveau nœud */
	new_node->n = n;
	new_node->next = NULL;   /* Ce sera le dernier nœud, next = NULL */

	if (*head == NULL)       /* Si la liste est vide */
	{
	new_node->prev = NULL;
	*head = new_node;    /* Le nouveau nœud devient la tête */
	return new_node;
	}

    /* Parcours de la liste jusqu'au dernier nœud */
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new_node;   /* Le dernier nœud pointe vers le nouveau nœud */
	new_node->prev = temp;   /* Le nouveau nœud pointe vers l'ancien dernier nœud */

	return new_node;
}
