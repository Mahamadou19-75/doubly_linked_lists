#include "lists.h"

/**
 * get_dnodeint_at_index - retourne le nœud à l'index donné
 * @head: pointeur vers le premier nœud de la liste
 * @index: index du nœud à récupérer (commence à 0)
 *
 * Return: adresse du nœud à l'index, ou NULL si inexistant
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

    /* Parcours de la liste jusqu'à l'index souhaité */
	while (head != NULL)
	{
	if (i == index)
		return head;  /* Retourne le nœud trouvé */
	head = head->next; /* Passe au nœud suivant */
	i++;
	}

	return NULL;  /* Retourne NULL si l'index dépasse la taille de la liste */
}
