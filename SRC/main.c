
/***********************************************************************
 * Programme : main.c
 *
 * auteur :    Timothée Guy, Reynald Barbeaut
 *
 * resume :    Some algorithm about graph
 *
 * date :      21/02/05
 *
 ***********************************************************************
 */


#include "main.h"

/*---------------------*/
/* Main programm */
/*---------------------*/

int main() {
	struct node zero, first, second, third, fourth, empty;
	node_create(&first);
	node_create(&second);
	node_create(&third);
	node_create(&zero);
	node_create(&empty);


	third.node=3;
	third.weight=3;
	zero.node=1;
	zero.weight=1;
	first.node = 1;
	first.weight = 4;
	second.node = 2;
	second.weight = 3;
	first.nextnode = &second;


	second.previousnode = &first;

	list_dump(&second);
	printf("\n");

	node_destroy(&first);

	list_dump(&second);
	printf("\n");



	printf("Back :");
	node_add_back(&second,&third);

	list_dump(&second);
	printf("\n");



	node_create(&fourth);
	fourth.node=4;
	fourth.weight=4;

	printf("Between :");
	node_insert(&fourth,&second,&third);

	list_dump(&second);
	printf("\n");



	printf("Front: ");
	node_add_front(&second,&zero);
	list_dump(&second);
	printf("\n");

	node_list_destroy(&second);
	printf("Destroy :");
	list_dump(&second);
	printf("\n");

	/*
	printf("Possibles commands for this programm : \n");
	printf("\t create graph : graph creation\n");
	printf("\t load graph : graph loading from a text file\n");
	printf("\t add node : insertion of a node in the graph\n");
	printf("\t add edge : insertion of an edge in the graph\n");
	printf("\t remove node : deletion of a node from the graph\n");
	printf("\t remove edge : deletion of an edge from the graph\n");
	printf("\t view graph : graph display\n");
   	printf("\t save graph : graph saving in the text format\n");
	printf("\t quit : exit the program\n");
	*/


}
