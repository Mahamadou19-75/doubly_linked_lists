#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - teste la fonction get_dnodeint_at_index
 *
 * Return: Toujours EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head;  /* Pointeur vers le premier nœud de la liste */
	dlistint_t *node;  /* Pointeur pour récupérer le nœud à un index donné */

	head = NULL;       /* La liste est initialement vide */

    /* Ajout de plusieurs nœuds à la fin de la liste */
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

    /* Affichage de la liste */
	print_dlistint(head);

    /* Récupération du nœud à l'index 5 (commence à 0) */
	node = get_dnodeint_at_index(head, 5);
	if (node != NULL)
	printf("%d\n", node->n);  /* Affiche la valeur du nœud trouvé */

    /* Libération de toute la mémoire allouée pour la liste */
	free_dlistint(head);
	head = NULL;  /* Évite un pointeur suspendu */

	return (EXIT_SUCCESS);
}
