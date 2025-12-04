#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - affiche tous les éléments d'une liste doubly linked list
 * @h: pointeur vers le premier nœud de la liste
 *
 * Return: le nombre de nœuds
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;  /* Compteur de nœuds */

	/* Parcours de la liste jusqu'à la fin */
	while (h != NULL)
	{
	printf("%d\n", h->n);  /* Affiche la valeur du nœud courant */
	count++;               /* Incrémente le compteur */
	h = h->next;           /* Passe au nœud suivant */
	}

	return count;  /* Retourne le nombre total de nœuds */
}
