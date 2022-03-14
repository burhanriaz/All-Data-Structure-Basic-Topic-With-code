
/*    
	   NAME:      		Burhan RIaz

	   Reg No:    		Sp20-MCS-036
	   
	   Subject:     	Data Structure 
	   	   
	   Topic:    		 All topic im use in this code with propper menu 
	   
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class singlelist
{
	struct node
	{
		int data;
		node * link;
	}*p;

	public:
		void inslast(int x)
		{
			node *q, *t;
			if (p == NULL)
			{
				p = new node;
				p->data = x;
				p->link = NULL;
			}
			else
			{
				q = p;
				while (q->link != NULL)
					q = q->link;
				t = new node;
				t->data = x;
				t->link = NULL;
				q->link = t;
			}

			cout << "\nInserted Successfully at the end...";
			disp();
		}

	void insbeg(int x)
	{
		node * q;
		q = p;
		p = new node;
		p->data = x;
		p->link = q;
		cout << "\n Inserted successfully at the beginning . .";
		disp();
	}

	void delelement(int x)
	{
		node *q, *r;
		q = p;
		if (q->data == x)
		{
			p = q->link;
			delete q;
			return;
		}

		r = q;
		while (q != NULL)
		{
			if (q->data == x)
			{
				r->link = q->link;
				delete q;
				return;
			}

			r = q;
			q = q->link;
		}

		cout << "\nElement you entered " << x << " is not found..";
	}

	void delbeg()
	{
		cout << "\nThe list before deletion:";
		disp();
		node * q;
		q = p;
		if (q == NULL)
		{
			cout << "\nNo data is present..";
			return;
		}

		p = q->link;
		delete q;
		return;
	}

	void dellast()
	{
		cout << "\n The list before deletion: ";
		disp();
		node *q, *t;
		q = p;
		if (q == NULL)
		{
			cout << "\nThere is no data in the list..";
			return;
		}

		if (q->link == NULL)
		{
			p = q->link;
			delete q;
			return;
		}

		while (q->link->link != NULL)
			q = q->link;
		q->link = NULL;
		return;
	}

	void disp()
	{
		node * q;
		q = p;
		if (q == NULL)
		{
			cout << " \nNo data is in the list..";
			return;

		}

		cout << " \nThe items present in the list are :";
		while (q != NULL)
		{
			cout << " " << q->data;
			q = q->link;
		}

		cout << endl;
	}

	int seek(int value)
	{
		node * temp;
		temp = p;
		int position = 0;
		while (temp != NULL)
		{
			if (temp->data == value)
				return position + 1;

			else
			{
				temp = temp->link;
				position = position + 1;
			}
		}

		cout << " Element " << value << " Not Found";
		return 0;
	}

	singlelist()
	{
		p = NULL;
	}~singlelist()
	{
		node * q;
		if (p == NULL)
			return;

		while (p != NULL)
		{
			q = p->link;
			delete p;
			p = q;
		}
	}
};
class list
{
	struct node
	{
		int data;
		node * NextLink;
		node * PreLink;
	}*p;

	public:
		void inslast(int x)
		{
			node *q, *t;
			if (p == NULL)
			{
				p = new node;
				p->data = x;
				p->NextLink = NULL;
				p->PreLink = NULL;
			}
			else
			{
				q = p;
				while (q->NextLink != NULL)
					q = q->NextLink;
				t = new node;
				t->data = x;
				q->NextLink = t;
				t->PreLink = q;
				t->NextLink = NULL;
			}

			cout << "\nInserted Successfully at the end...";
			disp();
		}

	void insbeg(int x)
	{
		node * q;
		q = p;
		p = new node;
		p->data = x;
		p->NextLink = q;
		p->PreLink = NULL;
		cout << "\n Inserted successfully at the beginning . .";
		disp();
	}

	void delelement(int x)
	{
		node *q, *r;
		q = p;
		if (q->data == x)
		{
			p = q->NextLink;
			delete q;
			return;
		}

		r = q;
		while (q != NULL)
		{
			if (q->data == x)
			{
				r->NextLink = q->NextLink;
				delete q;
				return;
			}

			r = q;
			q = q->NextLink;
		}

		cout << "\nElement you entered " << x << " is not found..";
	}

	void delbeg()
	{
		cout << "\nThe list before deletion:";
		disp();
		node * q;
		q = p;
		if (q == NULL)
		{
			cout << "\nNo data is present..";
			return;
		}

		p = q->NextLink;
		delete q;
		return;
	}

	void dellast()
	{
		cout << "\n The list before deletion: ";
		disp();
		node *q, *t;
		q = p;
		if (q == NULL)
		{
			cout << "\nThere is no data in the list..";
			return;
		}

		if (q->NextLink == NULL)
		{
			p = q->NextLink;
			delete q;
			return;
		}

		while (q->NextLink->NextLink != NULL)
			q = q->NextLink;
		q->NextLink = NULL;
		return;
	}

	void disp()
	{
		node * q;
		q = p;
		if (q == NULL)
		{
			cout << " \nNo data is in the list..";
			return;

		}

		cout << " \nThe items present in the list are :";
		while (q != NULL)
		{
			cout << " " << q->data;
			q = q->NextLink;
		}

		cout << endl;
	}

	int seek(int value)
	{
		node * temp;
		temp = p;
		int position = 0;
		while (temp != NULL)
		{
			if (temp->data == value)
				return position + 1;

			else
			{
				temp = temp->NextLink;
				position = position + 1;
			}
		}

		cout << " Element " << value << " Not Found";
		return 0;
	}

	list()
	{
		p = NULL;
	}~list()
	{
		node * q;
		if (p == NULL)
			return;

		while (p != NULL)
		{
			q = p->NextLink;
			delete p;
			p = q;
		}
	}
};
class circular_llist
{
	public:

		struct node
		{
			int info;
			struct node * next;
		}*p;

	void create_node(int value)
	{
		struct node * t;
		t = new(struct node);
		t->info = value;
		if (p == NULL)
		{
			p = t;
			t->next = p;
		}
		else
		{
			t->next = p->next;
			p->next = t;
			p = t;
		}
	}

	void add_after(int value, int position)
	{
		if (p == NULL)
		{
			cout << "First Create the list." << endl;
			return;
		}

		struct node *t, *s;
		s = p->next;
		for (int i = 0; i < position - 1; i++)
		{
			s = s->next;
			if (s == p->next)
			{
				cout << "There are less than ";
				cout << position << " in the list" << endl;
				return;
			}
		}

		t = new node;
		t->next = s->next;
		t->info = value;
		s->next = t;
		//Element inserted at the end/
		if (s == p)
		{
			p = t;
		}
	}

	void delete_element(int value)
	{
		struct node *t, *s;
		s = p->next;
		/*If List has only one element*/
		if (p->next == p && p->info == value)
		{
			t = p;
			p = NULL;
			free(t);
			return;
		}

		if (s->info == value)	//First Element Deletion/
		{
			t = s;
			p->next = s->next;
			free(t);
			return;
		}

		while (s->next != p)
		{
			//Deletion of Element in between/
			if (s->next->info == value)
			{
				t = s->next;
				s->next = t->next;
				free(t);
				cout << "Element " << value;
				cout << " deleted from the list" << endl;
				return;
			}

			s = s->next;
		}

		//Deletion of p element/
		if (s->next->info == value)
		{
			t = s->next;
			s->next = p->next;
			free(t);
			p = s;
			return;
		}

		cout << "Element " << value << " not found in the list" << endl;
	}

	void display_list()
	{
		struct node * s;
		if (p == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}

		s = p->next;
		cout << "Circular Link List: = ";
		while (s != p)
		{
			cout << s->info << "->";
			s = s->next;
		}

		cout << s->info << endl;
		cout << endl;
	}

	circular_llist()
	{
		p = NULL;
	}
};
class stack
{
	public:
		int stack[100], choice, n, top, x, i;
	void push(void)
	{
		if (top >= n - 1)
		{
			cout << "\n\tSTACK is over flow";

		}
		else
		{
			cout << " Enter a value to be pushed:";
			cin >> x;
			top++;
			stack[top] = x;
		}
	}

	void pop(void)
	{
		if (top <= -1)
		{
			cout << "\n\t Stack is under flow";
		}
		else
		{
			cout << "\n\t The popped elements is :" << stack[top];
			top--;
		}
	}

	void display(void)
	{
		if (top >= 0)
		{
			cout << "\n The elements in STACK \n";
			for (i = top; i >= 0; i--)
				cout << " " << stack[i];
			cout << "\n Press Next Choice";
		}
		else
		{
			cout << "\n The STACK is empty";
		}
	}
};

class selectionsort
{
	public:
		void swapping(int &a, int &b)
		{
			//swap the content of a and b
			int temp;
			temp = a;
			a = b;
			b = temp;
		}

	void display(int *array, int size)
	{
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
		cout << endl;
	}

	void selectionSort(int *array, int size)
	{
		int i, j, imin;
		for (i = 0; i < size - 1; i++)
		{
			imin = i;	//get index of minimum data
			for (j = i + 1; j < size; j++)
				if (array[j] < array[imin])
					imin = j;
			//placing in correct position
			swap(array[i], array[imin]);
		}
	}
};

class insertionsort
{
	public:

		void display(int *array, int size)
		{
			for (int i = 0; i < size; i++)
				cout << array[i] << " ";
			cout << endl;
		}

	void insertionSort(int *array, int size)
	{
		int key, j;

		for (int i = 1; i < size; i++)
		{
			key = array[i];	//take value
			j = i;

			while (j > 0 && array[j - 1] > key)
			{
				array[j] = array[j - 1];
				j--;
			}

			array[j] = key;	//insert in right place
		}
	}
};

class bubblesorting
{
	public:
		void swapping(int &a, int &b)
		{
			//swap the content of a and b
			int temp;
			temp = a;
			a = b;
			b = temp;
		}

	void display(int *array, int size)
	{
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
		cout << endl;
	}

	void bubbleSort(int *array, int size)
	{
		for (int i = 0; i < size; i++)
		{
			int swaps = 0;	//flag to detect any swap is there or not
			for (int j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					//when the current item is bigger than next
					swapping(array[j], array[j + 1]);
					swaps = 1;	//set swap flag
				}
			}

			if (!swaps)
				break;	// No swap in this pass, so array is sorted
		}
	}
};

class quicksorting
{
	public:

		void swapping(int &a, int &b)
		{
			//swap the content of a and b
			int temp;
			temp = a;
			a = b;
			b = temp;
		}

	void display(int *array, int size)
	{
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
		cout << endl;
	}

	int partition(int *array, int lower, int upper)
	{
		//Hoare partitioning technique to find correct location for pivot
		int pivot, start, end;
		pivot = array[lower];	//first element as pivot
		start = lower;
		end = upper;

		while (start < end)
		{
			while (array[start] <= pivot && start < end)
			{
				start++;	//start pointer moves to right
			}

			while (array[end] > pivot)
			{
				end--;	//end pointer moves to left
			}

			if (start < end)
			{
				swap(array[start], array[end]);	//swap smaller and bigger element
			}
		}

		array[lower] = array[end];
		array[end] = pivot;
		return end;
	}

	void quickSort(int *array, int left, int right)
	{
		int q;

		if (left < right)
		{
			q = partition(array, left, right);
			quickSort(array, left, q - 1);	//sort left sub-array
			quickSort(array, q + 1, right);	//sort right sub-array
		}
	}
};

class mergesort
{
	public:
		void swapping(int &a, int &b)
		{
			//swap the content of a and b
			int temp;
			temp = a;
			a = b;
			b = temp;
		}

	void display(int *array, int size)
	{
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
		cout << endl;
	}

	void merge(int *array, int l, int m, int r)
	{
		int i, j, k, nl, nr;
		//size of left and right sub-arrays
		nl = m - l + 1;
		nr = r - m;
		int larr[nl], rarr[nr];

		//fill left and right sub-arrays
		for (i = 0; i < nl; i++)
			larr[i] = array[l + i];
		for (j = 0; j < nr; j++)
			rarr[j] = array[m + 1 + j];

		i = 0;
		j = 0;
		k = l;
		//marge temp arrays to real array

		while (i < nl && j < nr)
		{
			if (larr[i] <= rarr[j])
			{
				array[k] = larr[i];
				i++;
			}
			else
			{
				array[k] = rarr[j];
				j++;
			}

			k++;
		}

		while (i < nl)
		{
			//extra element in left array
			array[k] = larr[i];
			i++;
			k++;
		}

		while (j < nr)
		{
			//extra element in right array
			array[k] = rarr[j];
			j++;
			k++;
		}
	}

	void mergeSort(int *array, int l, int r)
	{
		int m;
		if (l < r)
		{
			int m = l + (r - l) / 2;
			// Sort first and second arrays
			mergeSort(array, l, m);
			mergeSort(array, m + 1, r);
			merge(array, l, m, r);
		}
	}
};

struct treeNode
{
	int data;
	treeNode * left;
	treeNode * right;
};
class tree
{
	public:
		treeNode* FindMin(treeNode *node)
		{
			if (node == NULL)
			{
				/*There is no element in the tree */
				return NULL;
			}

			if (node->left) /*Go to the left sub tree to find the min element */
				return FindMin(node->left);
			else
				return node;
		}

	treeNode* FindMax(treeNode *node)
	{
		if (node == NULL)
		{
			/*There is no element in the tree */
			return NULL;
		}

		if (node->right) /*Go to the left sub tree to find the min element */
			return (FindMax(node->right));
		else
			return node;
	}

	treeNode* Insert(treeNode *node, int data)
	{
		if (node == NULL)
		{
			treeNode * temp;
			temp = new treeNode;
			//temp = (treeNode*)malloc(sizeof(treeNode));
			temp->data = data;
			temp->left = temp->right = NULL;
			return temp;
		}

		if (data > (node->data))
		{
			node->right = Insert(node->right, data);
		}
		else if (data < (node->data))
		{
			node->left = Insert(node->left, data);
		}

		/*Else there is nothing to do as the data is already in the tree. */
		return node;
	}

	treeNode* Delet(treeNode *node, int data)
	{
		treeNode * temp;
		if (node == NULL)
		{
			cout << "Element Not Found";
		}
		else if (data < node->data)
		{
			node->left = Delet(node->left, data);
		}
		else if (data > node->data)
		{
			node->right = Delet(node->right, data);
		}
		else
		{
			/*Now We can delete this node and replace with either minimum element
			in the right sub tree or maximum element in the left subtree */
			if (node->right && node->left)
			{
				/*Here we will replace with minimum element in the right sub tree */
				temp = FindMin(node->right);
				node->data = temp->data;
				/*As we replaced it with some other node, we have to delete that node */
				node->right = Delet(node->right, temp->data);
			}
			else
			{
				/*If there is only one or zero children then we can directly
				remove it from the tree and connect its parent to its child */
				temp = node;
				if (node->left == NULL)
					node = node->right;
				else if (node->right == NULL)
					node = node->left;
				free(temp); /*temp is longer required */
			}
		}

		return node;
	}

	treeNode* Find(treeNode *node, int data)
	{
		if (node == NULL)
		{
			/*Element is not found */
			return NULL;
		}

		if (data > node->data)
		{
			/*Search in the right sub tree. */
			return Find(node->right, data);
		}
		else if (data < node->data)
		{
			/*Search in the left sub tree. */
			return Find(node->left, data);
		}
		else
		{
			/*Element Found */
			return node;
		}
	}

	void Inorder(treeNode *node)
	{
		if (node == NULL)
		{
			return;
		}

		Inorder(node->left);
		cout << node->data << " ";
		Inorder(node->right);
	}

	void Preorder(treeNode *node)
	{
		if (node == NULL)
		{
			return;
		}

		cout << node->data << " ";
		Preorder(node->left);
		Preorder(node->right);
	}

	void Postorder(treeNode *node)
	{
		if (node == NULL)
		{
			return;
		}

		Postorder(node->left);
		Postorder(node->right);
		cout << node->data << " ";
	}
};
int main()
{
	system("color 37");
	cout<<"  \t\t*************************************************\t\t\n";
	cout<<"\t\t\t       LAB FINAL ASSIGNMENT               \n";
	cout<<"\n\t\t                     BY		                 \n";
	cout<<"\n\t\t         Burhan Riaz [Sp20-MCS-036]                 \n";

	cout<<"\n\t\t*************************************************\t\t\n\n";
	
	int ch;
	main: 
	do{
	cout << "1. Use Linked list Data Structure" << endl;
	cout << "2. Use Stack Data Structure" << endl;
	cout << "3. Use Queue Data Structure" << endl;
	cout << "4. Use Sorting method" << endl;
	cout << "5. Use Tree data Structure" << endl;
	cout << "6. Exit" << endl;
	cout << "Enter your chosie" << endl;

	cin >> ch;

	switch (ch)
	
	{
		case 1:
			{
				cout << "\n-----------------------\n";
				cout << "1. Use Singly Linked list" << endl;
				cout << "2. Use Doubly linked list" << endl;
				cout << "3. Use Circular linked list" << endl;
				cout << "4. Main Menu " << endl;
				cout << "5. Exit" << endl;
				cout << "Enter your chosie" << endl;

				int ch;
				cin >> ch;

				switch (ch)
				{
					case 1:
						{
							singlelist l;
							int ch, v, p, ps;

							do {
								cout << "\n------------------------\n";
								cout << "\nOperations on Singly List\n";
								cout << "\n1. Insertion\n2. Deletion\n3. Display\n4. Seek\n5. Exit \n6. Main Menu\n";
								cout << "\nEnter your choice: ";
								cin >> ch;

								switch (ch)

								{
									case 1:
										cout << "\n1. Insertion at the beginning\n2. Insertion at the end";
										cout << "\n3. Enter your choice:";
										cin >> ps;
										cout << "\nEnter the value to insert: ";
										cin >> v;

										switch (ps)

										{
											case 1:
												l.insbeg(v);
												break;
											case 2:
												l.inslast(v);
												break;

											default:
												cout << "\nThe choice is invalid..";
												return 0;
										}

										break;

									case 2:
										cout << "\n1. Delete the first element\n2. Delete the last element";
										cout << "\n 3 Enter the element to delete from list";

										cout << "\nEnter your choice: ";
										cin >> ps;

										switch (ps)
										{
											case 1:
												l.delbeg();
												cout << "\nThe list after deletion: ";
												l.disp();
												break;

											case 2:
												l.dellast();
												cout << "\nThe list after deletion";
												l.disp();
												break;

											case 3:
												l.disp();
												cout << "\nEnter the element to delete  :";
												cin >> v;
												l.delelement(v);
												cout << "\nThe list after deletion: ";
												l.disp();
												break;

											default:
												cout << "\nThe option is invalid..";
												break;

										}

										break;

									case 3:
										l.disp();
										break;

									case 4:
										l.disp();
										cout << "\nEnter the element to search: ";
										cin >> v;
										cout << "\nThe position of the element " << v << " is " << l.seek(v);
										system("pause");
										break;

									case 5:

										exit(1);
										break;
									case 6:
										goto main;

									default:

										cout << "\nThe option is invalid..";
										return 0;
								}
							} while (ch != 5);
							break;

						}

					case 2:
						{
							list l;
							int ch, v, p, ps;

							do {
								cout << "\n--------------------------------\n";
								cout << "\nOperations on  Doubly Linked List\n";
								cout << "\n1. Insertion\n2. Deletion\n3. Display\n4. Seek\n5. Exit\n6. Main Menu";
								cout << "\nEnter your choice: ";
								cin >> ch;

								switch (ch)

								{
									case 1:
										cout << "\n1. Insertion at the beginning\n2. Insertion at the end";
										cout << "\n3. Enter your choice:";
										cin >> ps;
										cout << "\nEnter the value to insert: ";
										cin >> v;

										switch (ps)

										{
											case 1:
												l.insbeg(v);
												break;
											case 2:
												l.inslast(v);
												break;

											default:
												cout << "\nThe choice is invalid..";
												return 0;
										}

										break;

									case 2:
										cout << "\n1. Delete the first element\n2. Delete the last element";
										cout << "\n 3 Enter the element to delete from list";

										cout << "\nEnter your choice: ";
										cin >> ps;

										switch (ps)
										{
											case 1:
												l.delbeg();
												cout << "\nThe list after deletion: ";
												l.disp();
												break;

											case 2:
												l.dellast();
												cout << "\nThe list after deletion";
												l.disp();
												break;

											case 3:
												l.disp();
												cout << "\nEnter the element to delete  :";
												cin >> v;
												l.delelement(v);
												cout << "\nThe list after deletion: ";
												l.disp();
												break;

											default:
												cout << "\nThe option is invalid..";
												break;

										}

										break;

									case 3:
										l.disp();
										break;

									case 4:
										l.disp();
										cout << "\nEnter the element to search: ";
										cin >> v;
										cout << "\nThe position of the element " << v << " is " << l.seek(v);
										system("pause");
										break;

									case 5:

										exit(1);
										
									case 6:
										goto main;

									default:

										cout << "\nThe option is invalid..";
										return 0;
								}

								system("pause");

							} while (ch != 5);

							system("pause");
							break;
						}

					case 3:
						{
							int choice, element, position;
							circular_llist cl;
							do
							{
								cout << "\nOperations on  Circular Linked List\n";
								cout << "1. Create Node" << endl;
								cout << "2. Add after" << endl;
								cout << "3. Delete" << endl;
								cout << "4. Display" << endl;
								cout << "5. Exit" << endl;
								cout << "6. Main menu" << endl;
								cout << "Enter your choice : ";
								cin >> choice;
								switch (choice)
								{
									case 1:
										cout << "Enter the element: ";
										cin >> element;
										cl.create_node(element);
										cout << endl;
										break;
									case 2:
										cout << "Enter the element: ";
										cin >> element;
										cout << "Insert element after position: ";
										cin >> position;
										cl.add_after(element, position);
										cout << endl;
										break;
									case 3:
										if (cl.p == NULL)
										{
											cout << "List is empty, nothing to delete" << endl;
											break;
										}

										cout << "Enter the element for deletion: ";
										cin >> element;
										cl.delete_element(element);
										cout << endl;
										break;
									case 4:
										cl.display_list();
										break;
									case 5:
										exit(1);
										break;
									case 6:
										goto main;

									default:
										cout << "Wrong choice" << endl;
								}
							} while ( choice !=5);
							
							break;
					
			}
		}
	}

		case 2:
			{
				stack a;

				a.top = -1;
				cout << "\n Enter the size of STACK[MAX=100]:";
				cin >> a.n;
				cout << "\n\t STACK OPERATIONS USING ARRAY";
				cout << "\n\t--------------------------------";
				cout << "\n\t 1. PUSH\n\t 2. POP\n\t 3. DISPLAY\n\t 4. EXIT\n5. Main menu";
				do {
					cout << ("\n Enter the Choice:");
					cin >> a.choice;
					switch (a.choice)
					{
						case 1:
							{
								a.push();
								break;
							}

						case 2:
							{
								a.pop();
								break;
							}

						case 3:
							{
								a.display();
								break;
							}

						case 4:
							{
								cout << "\n\t EXIT ";
								break;
							}
						case 5:
							goto main;

						default:
							{
								cout << "\n\t Please Enter a Valid Choice(1/2/3/4)";
							}
					}
				}

				while (a.choice != 4);
			}

		case 3:
			{
				int n = 10;
				int queue[n], ch = 1, front = 0, rear = 0, i, j = 1, x = n;

				cout << "\nOperations on Queue using Array\n";
				cout << "\n1.Insertion \n2.Deletion \n3.Display \n4.Exit\n5. Main Menu";
				while (ch)
				{
					cout << "\nEnter the Choice:";
					cin >> ch;
					switch (ch)
					{
						case 1:
							if (rear == x)
								cout << "\n Queue is Full";
							else
							{
								cout << "\n Enter Value " << j++ << " : ";
								cin >> queue[rear++];
							}

							break;
						case 2:
							if (front == rear)
							{
								cout << "\n Queue is empty";
							}
							else
							{
								cout << "\n Deleted Element is:" << queue[front++];
								x++;
							}

							break;
						case 3:
							cout << "\nQueue Elements are:\n ";
							if (front == rear)
								cout << "\n Queue is Empty";
							else
							{
								for (i = front; i < rear; i++)
								{
									cout << queue[i];
									cout << "\n";
								}

								break;
								case 4:
									exit(1);
								case 5:
									goto main;
								break;
								default:
								cout << "Wrong Choice: please see the options";
							}
					}
				}
			}

		case 4:
			{
				do {
					int ch;
					cout << "\nDifferent sorting methood " << endl;
					cout << "\n----------------------------\n";
					cout << "1. Selection sort " << endl;
					cout << "2. Insertion Sort" << endl;
					cout << "3. Bubble Sort" << endl;
					cout << "4. Quick Sort" << endl;
					cout << "5. Mergr Sort" << endl;
					cout << "6. Exit" << endl;
					cout << "7. Main menu" << endl;
					cout << "Enter your chosie " << endl;
					cin >> ch;
					switch (ch)
					{
						case 1:
							{
								selectionsort s;
								int n;
								cout << "Enter the number of elements: ";
								cin >> n;
								int arr[n];	//create an array with given number of elements
								cout << "Enter elements:" << endl;
								for (int i = 0; i < n; i++)
								{
									cin >> arr[i];
								}

								cout << "Array before Sorting: ";
								s.display(arr, n);
								s.selectionSort(arr, n);
								cout << "Array after Sorting: ";
								s.display(arr, n);
								break;
							}

						case 2:
							{
								insertionsort i;
								int n;
								cout << "Enter the number of elements: ";
								cin >> n;
								int arr[n];	//create an array with given number of elements
								cout << "Enter elements:" << endl;

								for (int i = 0; i < n; i++)
								{
									cin >> arr[i];
								}

								cout << "Array before Sorting: ";
								i.display(arr, n);
								i.insertionSort(arr, n);
								cout << "Array after Sorting: ";
								i.display(arr, n);

							}

						case 3:
							{
								bubblesorting b;
								int n;
								cout << "Enter the number of elements: ";
								cin >> n;
								int arr[n];	//create an array with given number of elements
								cout << "Enter elements:" << endl;
								for (int i = 0; i < n; i++)
								{
									cin >> arr[i];
								}

								cout << "Array before Sorting: ";
								b.display(arr, n);
								b.bubbleSort(arr, n);
								cout << "Array after Sorting: ";
								b.display(arr, n);

								break;
							}

						case 4:
							{
								quicksorting q;
								int n;
								cout << "Enter the number of elements: ";
								cin >> n;
								int arr[n];	//create an array with given number of elements
								cout << "Enter elements:" << endl;

								for (int i = 0; i < n; i++)
								{
									cin >> arr[i];
								}

								cout << "Array before Sorting: ";
								q.display(arr, n);
								q.quickSort(arr, 0, n - 1);	//(n-1) for last index
								cout << "Array after Sorting: ";
								q.display(arr, n);
								break;

							}

						case 5:
							{
								mergesort m;
								int n;
								cout << "Enter the number of elements: ";
								cin >> n;
								int arr[n];	//create an array with given number of elements
								cout << "Enter elements:" << endl;

								for (int i = 0; i < n; i++)
								{
									cin >> arr[i];
								}

								cout << "Array before Sorting: ";
								m.display(arr, n);
								m.mergeSort(arr, 0, n - 1);	//(n-1) for last index
								cout << "Array after Sorting: ";
								m.display(arr, n);
								break;
							}

						case 6:
							exit(1);
						case 7:
							goto main;

						default:
							cout << "\nInvalid input\n";
					}
				} while (ch != 6);

			}

		case 5:
			{
				tree t;
				treeNode *root = NULL, *temp;
				int ch;
				cout << "\n Operation on Binary Tree Search Data Structure\n";
				cout << "\n-----------------------------------------------\n";

				while (1)
				{ 
					cout << "\n1. Insert\n2. Delete\n3. Inorder\n4. Preorder\n5. Postorder\n6. FindMin\n7. FindMax\n8. Search\n9. Exit\n10. Main Menu\n";
					cout << "Enter ur choice:";
					cin >> ch;
					switch (ch)
					{
						case 1:
							cout << "\nEnter element to be insert:";
							cin >> ch;
							root = t.Insert(root, ch);
							cout << "\nElements in BST are:";
							t.Inorder(root);
							break;
							
						case 2:
							cout << "\nEnter element to be deleted:";
							cin >> ch;
							root = t.Delet(root, ch);
							cout << "\nAfter deletion elements in BST are:";
							t.Inorder(root);
							break;
						case 3:
							cout << "\nInorder Travesals is:";
							t.Inorder(root);
							break;
						case 4:
							cout << "\nPreorder Traversals is:";
							t.Preorder(root);
							break;
						case 5:
							cout << "\nPostorder Traversals is:";
							t.Postorder(root);
							break;
						case 6:
							temp = t.FindMin(root);
							cout << "\nMinimum element is :" << temp->data;
							break;
						case 7:
							temp = t.FindMax(root);
							cout << "\nMaximum element is :" << temp->data;
							break;
						case 8:
							cout << "\nEnter element to be searched:";
							cin >> ch;
							temp = t.Find(root, ch);
							if (temp == NULL)
							{
								cout << "Element is not foundn";
							}
							else
							{
								cout << "Element " << temp->data << " is Found\n";
							}

							break;
						case 9:
							exit(1);
							break;
						case 10:
							goto main;
							break;
						default:
							cout << "\nEnter correct choice:\n";
							break;
					}
				}
			}
		
			case 6:
				exit(1);
				break;
			default:
				cout<<"\nPlease In valid Choice\n";
	}


} while ( ch != 6);


 
	return 0;
}
