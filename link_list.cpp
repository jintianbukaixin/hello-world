#include<iostream>

using namespace std;

struct node{

	int num;
	node* next;
};

node* seperate_odd_even(node* test_node){

	if(test_node==NULL ||test_node->next ==NULL)
	return test_node;
	else{

	node* odd = test_node;
	node* even = test_node->next;
	node* even_head = even;

	while(even !=NULL && even->next != NULL){
	odd->next = even->next;
	odd = odd->next;
	even->next = odd->next;
	even = even->next;
	}

	odd->next = even_head;
	return test_node;
	}

}

node* create_test_node(){
	node* test_node;
	node* temp;
	test_node = new node;
	temp = test_node;
	for(int i = 0 ; i < 5; i++){
		node* new_node = new node;
		new_node->num = i;
		new_node->next = NULL;
		temp->next = new_node;
		temp = temp->next;

	}
	return test_node;
}

void print(node* test_node){

	node* temp = test_node->next;
	while(temp != NULL){
		cout << temp->num << " ";
		temp = temp->next;
	}
	cout << endl;
}



int main(){
	node* test_node;
	test_node = create_test_node();
	print(test_node);

	test_node = seperate_odd_even(test_node);
	print(test_node);
	

}
