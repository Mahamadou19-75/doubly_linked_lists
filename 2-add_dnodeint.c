#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - ajoute un nouveau nœud au début d'une liste doubly linked list
 * @head: pointeur vers le pointeur de la tête de liste
 * @n: valeur à stocker dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
	return NULL;

    /* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return NULL;

    /* Initialisation du nouveau nœud */
	new_node->n = n;
	new_node->prev = NULL;       /* Comme c'est le nouveau head, prev = NULL */
	new_node->next = *head;      /* next pointe vers l'ancien head */

    /* Mise à jour du prev de l'ancien head si la liste n'est pas vide */
	if (*head != NULL)
		(*head)->prev = new_node;

    /* Mise à jour de la tête de la liste */
	*head = new_node;

	return new_node;
}
