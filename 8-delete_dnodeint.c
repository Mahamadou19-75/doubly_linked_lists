#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - supprime le nœud à un index donné
 * @head: pointeur vers le pointeur de la tête de la liste
 * @index: index du nœud à supprimer (commence à 0)
 *
 * Return: 1 si succès, -1 si échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head || !*head)
	return -1;

	temp = *head;

    /* Si on supprime le premier nœud */
	if (index == 0)
	{
	*head = temp->next;        /* Nouvelle tête */
	if (*head)
	(*head)->prev = NULL;  /* Met à jour prev */
	free(temp);
	return 1;
	}

    /* Parcours jusqu'au nœud à supprimer */
	for (i = 0; temp != NULL && i < index; i++)
	temp = temp->next;

    /* Si l'index est hors de portée */
	if (!temp)
	return -1;

    /* Mise à jour des pointeurs des nœuds voisins */
	if (temp->prev)
	temp->prev->next = temp->next;
	if (temp->next)
	temp->next->prev = temp->prev;

	free(temp);
	return 1;
}
