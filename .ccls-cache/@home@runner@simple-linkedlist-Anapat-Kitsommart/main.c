//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node *head ;
	
	typedef struct node Node;
	typedef Node* NodePtr;
	
	NodePtr p=(NodePtr) malloc(sizeof(Node));
	head=p;
    p->value = c;
	
	int j,N=4;
	
	for(j=0;j<N;j++){
		p->next=(NodePtr) malloc(sizeof(Node));
		p=p->next;
		p->value=c+j+1;
		p->next=NULL;
	}
	
    /*p->next=(NodePtr) malloc(sizeof(Node));
    p->next->value=head->value+3;
	
	//from exercise I
	
	p->next->next =(NodePtr) malloc(sizeof(Node));
	p->next->next->value=11;
	p->next->next->next=NULL;*/

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
	
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
 
	//struct node d;
	/*p->next->next =(NodePtr) malloc(sizeof(Node));
	p->next->next->value=11;
	p->next->next->next=NULL;*/
	
	printf("%d\n",head->next->next->value);
//	printf("%d\n",head->next->next->next);
	
	printf("End of Exercise I\n\n");
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
	
	/*struct node e;
	p=head;
	head=&e;
	e.next=p;
	e.value=2;
	
	printf("%d - ",head->value);
	printf("%d - ",head->next->value);
	printf("%d - ",head->next->next->value);
	printf("%d\n",head->next->next->next->value);
	
	printf("End of Exercise II\n\n");*/
	
	//typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */
	
	int i,n=4;
    for(i=0;i<n;i++){
        printf("%3d", tmp->value);
		tmp=tmp->next;
    }
	printf(" NULL\n");
    
	printf("End of Exercise III\n\n");
	
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
	
	tmp=head;
	
	while(tmp!=NULL){
        printf("%3d", tmp->value);
		tmp=tmp->next;
       }
	
	printf(" NULL\n");
	
	printf("End of Exercise IV\n\n");

    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
	
	

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
	 
	tmp=head;
	NodePtr TMP=head;
	 
	while(tmp!=NULL){
		TMP=tmp->next;
		printf("deleting %d\n",tmp->value);
		free(tmp);
		tmp=TMP;
	}
}
