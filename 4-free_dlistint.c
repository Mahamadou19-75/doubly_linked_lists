#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - libère tous les nœuds d'une liste doubly linked list
 * @head: pointeur vers le premier nœud de la liste
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

    /* Parcours de la liste et libération de chaque nœud */
	while (head != NULL)
	{
	temp = head->next;  /* Sauvegarde du nœud suivant */
	free(head);         /* Libération du nœud courant */
	head = temp;        /* Passage au nœud suivant */
	}
}
