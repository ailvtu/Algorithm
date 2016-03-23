/**2016-03-09*/
//dash 
/**note: num of list**/

#include"iostream"
#include<stdio.h>
#include<stdlib.h>

using namespace std;
typedef  struct node *list;
typedef  struct  node *position;

struct node
	{
                 int value;
                 position next;
	};

list init(void){
	list L;
	L = (position)malloc(sizeof(struct node));
	L->next = NULL;
	return L;
}
bool is_NULL(list L){
	return((L->next)==NULL);
}
void print_L(list L){
	if(is_NULL(L)){
		cout<<"L is empty"<<endl;
	}
	position np;
	while(np -> next != NULL){
		cout<<np -> value<<endl;
		np = np ->next;
	}
	cout<<np -> value<<endl;
}
void insert_node(position np,int value){
	position temp;
	temp = (position)malloc(sizeof(struct node));
	temp ->value = value;
	temp ->next = np ->next;
	np->next = temp;

}
void delete_L(list L){
	position NP,next;
	 NP = L;
	{
		next = NP->next;
		free(NP);
		NP = next;
	}while(next!=NULL);

}
int main(int argc,char* argv[]){
 	list L;
 	position np;
 	char a[] = {2,3,4,5,6,7,8,9};
 	L = init();
 	for (int i = 0; i < 8; i++)
 	{
 		insert_node(L,a[i]);
 	}
 	delete_L(L);
 	print_L(L);
}