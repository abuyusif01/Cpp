/*
    Name: Abubakar Abubakar Yusif
    Matric: 1821881
    Section: 2
*/

#include <string>
#include <iostream>
using namespace std;

class Node {
    public:
	    double	data;		// data
	    Node*	next;		// pointer to next
};

class List {
    public:
        List(void) { head = NULL; }	// constructor
        		
        bool IsEmpty() { return head == NULL; }
        Node* InsertNode(int index, int x);	
        int FindNode(int x);	
        int DeleteNode(int x);
        void printListLenght();
        void DisplayList(void);
        int num;

    private:
	    Node* head;
};

Node* List::InsertNode(int index, int x) {
	if (index < 0) return NULL;	
	
	int currIndex	=	1;
	Node* currNode	=	head;
	while (currNode && index > currIndex) {
		currNode	=	currNode->next;
		currIndex++;
	}
	if (index > 0 && currNode == NULL)
    {
        cout<< "The Earlier Node is Empty "<< endl;
        return NULL;
    }
	
	Node* newNode	=	new	Node;
	newNode->data	=	x;	
	if (index == 0) {
		newNode->next	=	head;
		head		=	newNode;
	}
	else {
		newNode->next	=	currNode->next;
		currNode->next	=	newNode;
	}
	return newNode;
}


int List::DeleteNode(int x) {
	Node* prevNode	=	NULL;
	Node* currNode	=	head;
	int currIndex	=	1;
	while (currNode && currNode->data != x) {
		prevNode	=	currNode;
		currNode	=	currNode->next;
		currIndex++;
	}
	if (currNode) {
		if (prevNode) {
			prevNode->next	=	currNode->next;
			delete currNode;
		}
		else {
			head		=	currNode->next;
			delete currNode;
		}
		return currIndex;
	}
	return 0;
}


int List::FindNode(int x) {
	Node* currNode	=	head;
	int currIndex	=	1;
	while (currNode && currNode->data != x) {
		currNode	=	currNode->next;
		currIndex++;
	}
	if (currNode) return currIndex;
	return 0;
}

void List::printListLenght()
{
    cout <<"List length: "<< List::num <<endl;
}


void List::DisplayList()
{
    List::num = 0; 
    Node* currNode	= head;
    if ( currNode != NULL )
    {
        cout<< "Items in the list "<< endl;
    }
    
    while (currNode != NULL)
    {
        cout << currNode->data << endl;
        currNode	= currNode->next;
        List::num++;
   }
}



int main(void)
{
    List list;

    list.InsertNode(0, 5); // successful
    list.InsertNode(1, 5); // successful
    list.InsertNode(2, 7); // successful
    list.InsertNode(3, 5); // successful

    // print all the elements
    list.DisplayList();	

    int UserInput;
    UserInput = 53; // am using 53 to show that whenever the value doenst exist we can surely findout
    // implement FindNode
    if(list.FindNode(UserInput) > 0)
    {
        cout << UserInput <<" Found at index: "<< list.FindNode(UserInput) << endl;
    } 
    else			   
    {
        cout << UserInput << " not found" <<endl;
    }

    // delete some items
    list.DeleteNode(7);

    // display again
    list.DisplayList();

    // display listlenght
    list.printListLenght();
    return 0;
}