#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - teste la fonction sum_dlistint
 *
 * Return: Toujours EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head;  /* Pointeur vers le premier nœud de la liste */
	int sum;           /* Variable pour stocker la somme des valeurs n */

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

    /* Calcul de la somme de toutes les valeurs n de la liste */
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);  /* Affiche la somme */

    /* Libération de toute la mémoire allouée pour la liste */
	free_dlistint(head);
	head = NULL;  /* Évite un pointeur suspendu */

	return (EXIT_SUCCESS);
}
