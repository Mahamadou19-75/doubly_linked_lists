#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insère un nouveau nœud à un index donné
 * @h: pointeur vers le pointeur de la tête de la liste
 * @idx: index où insérer le nouveau nœud (commence à 0)
 * @n: valeur à stocker dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL si échec ou index invalide
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (!h)
	return NULL;

    /* Si l'index est 0, on ajoute en tête */
	if (idx == 0)
	return add_dnodeint(h, n);

	temp = *h;
	for (i = 0; temp != NULL && i < idx - 1; i++)
	temp = temp->next;

    /* Vérifie si l'index est hors de portée */
	if (!temp)
	return NULL;

    /* Si on ajoute à la fin */
	if (temp->next == NULL)
	return add_dnodeint_end(h, n);

    /* Création et initialisation du nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return NULL;

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return new_node;
}

