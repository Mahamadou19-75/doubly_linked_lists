#include "lists.h"

/**
 * dlistint_len - retourne le nombre de nœuds dans une liste doubly linked list
 * @h: pointeur vers le premier nœud de la liste
 *
 * Return: nombre de nœuds
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;  /* Compteur de nœuds */

    /* Parcours de la liste jusqu'à la fin */
	while (h != NULL)
	{
	count++;       /* Incrémente le compteur pour chaque nœud */
	h = h->next;   /* Passe au nœud suivant */
	}

	return count;      /* Retourne le nombre total de nœuds */
}
