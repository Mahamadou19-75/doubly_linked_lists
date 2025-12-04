#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - test de la fonction dlistint_len
 *
 * Return: Toujours EXIT_SUCCESS ou EXIT_FAILURE en cas d'erreur
 */
int main(void)
{
	dlistint_t *head;   /* Pointeur vers le premier nœud de la liste */
	dlistint_t *new;    /* Pointeur pour créer un nouveau nœud */
	dlistint_t hello = {8, NULL, NULL}; /* Nœud initial avec valeur 8 */
	size_t n;           /* Variable pour stocker le nombre de nœuds */

	head = &hello;      /* La tête de la liste pointe sur le nœud hello */

    /* Allocation mémoire pour un nouveau nœud */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
	dprintf(2, "Error: Can't malloc\n"); /* Message d'erreur si malloc échoue */
	return (EXIT_FAILURE);
	}

    /* Initialisation du nouveau nœud */
	new->n = 9;
	head->prev = new;   /* L'ancien nœud hello pointe vers le nouveau en arrière */
	new->next = head;   /* Le nouveau nœud pointe vers hello */
	new->prev = NULL;   /* Comme c'est la tête, prev = NULL */
	head = new;         /* La tête de la liste devient le nouveau nœud */

    /* Appel de la fonction pour obtenir le nombre de nœuds */	n = dlistint_len(head);
	printf("-> %lu elements\n", n);

    /* Libération de la mémoire du nœud créé dynamiquement */
    free(new);

	return (EXIT_SUCCESS);
}
