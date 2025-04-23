#tre
#include<stdlib.h>
struct node(){
	struct node *left;
	int data;
	struct node *right;
};
struct node *createnode(int);
void inorder(struct node *);
void deletenode(struct node *,struct node *,struct node *,int);
void singlechild(struct node *,struct node *);
void deletenodetwochild(struct node *);
struct node *root=NULL;
struct node *createnode(){
	struct node *n1;
	n1=(struct node*)malloc(sizeof(struct node));
	printf("enter element :");
	scanf("%d",&n1->data);
	n1->left=n1->right=NULL;
	return n1;
}
void insert(){
	struct node *n1,*temp=root,*n2;
	n1=createnode();
	if(n1==NULL){
		root=n1;
		return;
	}
	while(temp!=NULL){
		n2=temp;
		if(n1->data < temp->data){
			temp=temp->left;
		}
		else{
			temp=temp->right;
		}
	}
}
void inorder(struct node *root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	printf("%d",n1->data);
	inorder(root->right);
}
void preorder(struct node *root){
	if(root == NULL)
		return;
	printf("%d",n1->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root){
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d",n1->data);
}
void deletenode(struct node *root,int value,struct node *l,struct node *r){
	if(root == NULL){
		return;
	}
	if(value < root->data){
		deletenode(root->left,value,root,NULL);
	}
	else if(value > root->data){
		deletenode(root->right,value,NULL,root);
	}
	else{
		if(root->left==NULL && root->right==NULL){
			if(l==NULL)
				r->right=NULL;
			if(r==NULL)
				l->left=NULL;
			free(root);
		}
		else if(root->left==NULL || root->right==NULL){
			if(root->left!=NULL){
				l->left=root->left;
				free(root);
			}
			else{
				r->right=root->right;
				free(root);
			}
		}
		else{
			deletenodetwochild(root);
		}
	}
}
void deletenodetwochild(struct node *root){
	struct node *prev=root,*temp=root->right;
	while(temp->left!=NULL){
		prev=temp;
		temp=temp->left;
	}
	root->data=temp->data;
	if(prev==root){
		prev->right=temp->right;
	}
	if(prev!=root){
		prev->left=temp->right;
	}
	free(temp);
}
void main(){
	int choice;
	..
}
#void main(){
#	struct node *root;clrscr();
#root=createnode(100);root->left=createnode(50);create->right=create(125);
#root->left->left=createnode(45);..inorder(root);
#deletenode(root,null,null,100);printf(inorderdelete);inorder(root);getch();
#}
#struct node *creartenode(int value){
#struct node *n1=(str....,n1->data=value;
#n1->left=n1->right=null;retrun n1;
#}
#bracket
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void push(char);
int pop(char);
struct node{
  char data;
  struct node *next;
};
struct node *top=NULL;
void main()
{
  char string[100];
  int i,success=0;
  printf("enter string");
  gets(string);

  for(i=0;i<strlen(string);i++)
  {
     if(string[i]=='['||string[i]=='('||string[i]=='{')
     {
       push(string[i]);

     }else if(string[i]==']'||string[i]==')'||string[i]=='}')
     {
      if(pop(string[i])==1)
      {
       success=1;
       }
       else
       {
	success=0;
	break;
       }
     }
     }
     if(success==1 && top==NULL)
     {
       printf("string is bracket balancing");
     }
     else
     {
       printf("not balancing");
      }
      getch();
     }
void push(char bracket)
{
  struct node *n1;
  n1=(struct node*)malloc(sizeof(struct node));
  n1->data=bracket;
  n1->next=top;
  top=n1;
}
int pop(char bracket)
{
  int match=0;
  struct node *n2;

  if(bracket==')')
  {
    match=isMatch('(');
  }else if(bracket=='}')
  {
    match=isMatch('{');
  }else{
    match=isMatch('[');
    }
 if(match==1)
 {
   n2= top;
   top=top->next;
   free(n2);
   return 1;
 }else{
    return 0;
 }
 }
 int isMatch(char bracket)
 {
   if(top->data==bracket)
   {
     return 1;
    }
     return 0;
  }
#cdoubli
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
   struct node *prev;
   int data;
   struct node *next;
}*head=NULL;
void append()
{
   struct node *temp=head,*n1;
   n1=(struct node*)malloc(sizeof(struct node));
   printf("enter a value..:");
   scanf("%d",&n1->data);
   if(head==NULL)
   {
      head=n1;
      head->prev=n1;
      head->next=n1;
   }
   else{
       while(temp->next!=head)
       {
	       temp=temp->next;
       }
	  n1->next=temp->next;
	  n1->prev=temp;
	  temp->next=n1;
	  head->prev=n1;
   }
			}
void display()
{
 struct node *temp=head;
 if(head==NULL)
 {
   printf("linked list empty..");
   return;
 }
 else
 {
 do{
   printf("%p|%d|%p->",temp->prev,temp->data,temp->next);
   temp=temp->next;
 }while(temp!=head);
 }
}
void insertbegin()
{
    struct node *temp=head,*n1;
    n1=(struct node*)malloc(sizeof(struct node));
    printf("enter value for insert at begin");
    scanf("%d",&n1->data);
    if(head==NULL)
    {
      head=n1;
      head->next=n1;
      head->prev=n1;
    }
    else
    {
      while(temp->next!=head)
      {
       temp=temp->next;
      }
      n1->next=temp->next;
      n1->prev=temp;
      temp->next=n1;
      head->prev=n1;
      head=n1;
    }
}
void insertlast()
{
  struct node *temp=head,*n1;
  n1=(struct node*)malloc(sizeof(struct node));
  printf("enter value insert at last:");
  scanf("%d",&n1->data);
  if(head==NULL)
  {
    head=n1;
    head->prev=n1;
    head->next=n1;
  }
  else
  {
    while(temp->next!=head)
    {
      temp=temp->next;
    }
	  n1->next=temp->next;
	  n1->prev=temp;
	  temp->next=n1;
	  head->prev=n1;
  }
}
void deletefirst()
{
 struct node *temp=head,*n2;
 if(head==NULL)
 {
  printf("empty..");
  return;
 }
 else
 {
    if(head->next==head)
    {
      head=NULL;
      return;
     }
     else{
    while(temp->next!=head)
    {
     temp=temp->next;
    }
    n2=head;
    head=head->next;
    temp->next=head;
    head->prev=temp;
    free(n2);
    }
 }
}
void deletelast()
{
   struct node *temp=head,*n2;
   if(head==NULL)
   {
    printf("empty..");
    return;
   }
   else{
   if(head->next==head)
   {
   head=NULL;
   return;
   }
   else{
   while(temp->next!=head)
   {
     n2=temp->next;
     if(n2->next==head)
     {
       temp->next=n2->next;
       head->prev=temp;
       free(n2);
       break;
     }
    temp=temp->next;
   }
    }
   }
}
void sort()
{
  struct node *i,*j;
  int temp;
  for(i=head;i->next!=head;i=i->next)
  {
    for(j=i->next;j!=head;j=j->next)
    {
       if(i->data>j->data)
       {
	 temp=i->data;
	 i->data=j->data;
	 j->data=temp;
       }
       }
       }
       display();
}
void search()
{
  int s,pos=1,found=0;
  struct node *temp=head;
  printf("enter search element:");
  scanf("%d",&s);
  do
  {
   if(temp->data==s)
   {
    printf("search element found at position:%d and element %d",pos,s);
    found=1;
    }
    pos++;
    temp=temp->next;
  }while(temp!=head);
  if(found==1)
  {
  printf("founded");
  }else{
  printf("not found");
  }
}
void main()
{
   int choice;
   clrscr();
   printf("\t----Menu----");
   printf("\n1.append\n2.display\n3.exit\n4.insertbegin\n5.insertlast\n6.deletefirst\n7.deletelast\n8.sort\n9.search");
   ..
}
#doubli
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;

};
struct node *head=NULL;
void append()
{
   struct node *n1,*temp=head;
   n1=(struct node*)malloc(sizeof(struct node));
   printf("enter element:");
   scanf("%d",&n1->data);
   if(head==NULL)
   {
    head=n1;
   }
   else
   {
   while(temp->next!=NULL)
   {
     temp=temp->next;
   }
   n1->next=temp->next;
   temp->next=n1;
   n1->prev=temp;
   }
}
void display()
{
  struct node *temp=head;
  if(head==NULL)
  {
    printf("linked list empty");
    return;
  }
  while(temp!=NULL)
  {
    printf("%p|%d|%p->",temp->prev,temp->data,temp->next);
    temp=temp->next;
  }
  printf("total node is %d:",counter());
}
void insertatposbefore()
{
 int pos,i;
 struct node *temp=head,*n1,*n2;
 printf("\nenter position :");
 scanf("%d",&pos);
 if(pos>counter()||pos<=0)
 {
  printf("enter valid position");
 }
 else
 {
  n1=(struct node*)malloc(sizeof(struct node));
  printf("enter element:");
  scanf("%d",&n1->data);
  if(pos==1)
  {
   n1->prev=temp->prev;
   n1->next=temp;
   temp->prev=n1;
   head=n1;
  }
  else
  {
    for(i=1;i<=pos;i++)
    {
      if(i==pos-1)
      {
       n2=temp->next;
       n1->prev=temp;
       n1->next=temp->next;
       temp->next=n1;
       if(n2!=NULL)
       {
	n2->prev=n1;
       }
       break;
      }
      temp=temp->next;
    }
  }
 }
 }
void insertafter()
{
 int pos,i;
 struct node *temp=head,*n1,*n2;
 printf("\nenter position :");
 scanf("%d",&pos);
 if(pos>counter()||pos<0)
 {
  printf("enter valid position");
  return;
 }
 else
 {
  n1=(struct node*)malloc(sizeof(struct node));
  printf("enter element:");
  scanf("%d",&n1->data);
  if(pos==1)
  {
   n1->prev=temp->prev;
   n1->next=temp;
   temp->prev=n1;
   head=n1;
  }
  else
  {
    for(i=1;i<=pos;i++)
    {
      if(i==pos)
      {
       n2=temp->next;
       n1->prev=temp;
       n1->next=temp->next;
       temp->next=n1;
       if(n2!=NULL)
       {
	n2->prev=n1;
       }
       break;
      }
      temp=temp->next;
    }
  }
 }
}
void deleteatposbefore()
{
 struct node *temp=head,*n2,*n3;
 int pos,i;
 if(head==NULL)
 {
 return;
 }
 else
 {
 printf("enter position");
 scanf("%d",&pos);
 if(pos>counter()||pos<=0)
 {
 printf("enter valid choice");
 return;
 }
 else{
 if(pos==1)
 {
  n2=head;
  head=head->next;
  head->prev=NULL;
  free(n2);
 }
 else
 {
   for(i=1;i<=pos;i++)
   {
     if(i==pos-1)
     {
      n2=temp->next;
      temp->next=n2->next;
      n3=n2->next;
      if(n3!=NULL)
      {
	n3->prev=n2->prev;
      }
      free(n2);
     }
     temp=temp->next;
   }
 }
 }
 }
}
void deleteatposafter()
{
 struct node *temp=head,*n2,*n3;
 int pos,i;
 printf("enter position");
 scanf("%d",&pos);
 if(head==NULL)
 {
 return;
 }
 else
 {
 if(pos>=counter()||pos<0)
 {
 printf("enter valid choice");
 return;
 }
 else{
 if(pos==0)
 {
  n2=head;
  head=head->next;
  head->prev=NULL;
  free(n2);
 }
 else
 {
   for(i=1;i<=pos;i++)
   {
     if(i==pos)
     {
      n2=temp->next;
      temp->next=n2->next;
      n3=n2->next;
      if(n3!=NULL)
      {
	n3->prev=n2->prev;
      }
      free(n2);
     }
     temp=temp->next;
   }
 }
 }
 }
}
void sort()
{
  struct node *i,*j;
  int temp;
  for(i=head;i->next!=NULL;i=i->next)
  {
    for(j=i->next;j!=NULL;j=j->next)
    {
    if(i->data>j->data)
    {
     temp=i->data;
     i->data=j->data;
     j->data=temp;
    }
    }
  }
  display();
}
void search()
{
  int se,pos;
  struct node *temp=head;
  if(head==NULL)
  {
    printf("linked list empty");
    return;
  }
  else
  {
   printf("enter search element:");
   scanf("%d",&se);
   for(pos=1;temp!=NULL;pos++)
   {
    if(temp->data==se)
    {
     printf("serach element is:%d and  found at position :%d",se,pos);
     return;
    }
    temp=temp->next;
   }
   printf("search element not found");
  }
}
int counter()
{
   int count=0;
   struct node *temp=head;
   while(temp!=NULL)
   {
      count++;
      temp=temp->next;
   }
     return count;
}
void main()
{
   int choice;
   clrscr();
    ..
}
//binarusearch
#define size 5
int binary_search(int a[size],int n,int data)
{
  int left,right,mid;
  left=0;
  right=n-1;
  mid=(left+right)/2;

  while(left<right && a[mid]!=data)
  {
     if(a[mid]>data)
       right=mid-1;
     else
	left=mid+1;
	mid=(left+right)/2;
   }
     if(a[mid]==data)
       return 1;
     else
       return 0;
   }
   void main()
   {
     int a[size],i,n,data;
     clrscr();
     printf("\nHow many Elements u want to insert=>>");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter Elements=>>",i);
       scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
       printf("Elements is  %d\n",a[i]);
     }

     printf("\nEnter Elements you want to search=>>");
     scanf("%d",&data);

     if(binary_search(a,n,data))
     {
	printf("%d is Found",data);
     }
     else
     {
	printf("%d is not Found!!",data);
     }
     getch();
   }
#priority
#include<stdlib.h>
void insertion();
void display();
void deletion();
struct node
{
 int data;
 int priority;
 struct node*next;
};
struct node *head=NULL;
void main()
{
	int choice;
	clrscr();
	..
}
void insertion()
{
 struct node* n1,*temp = head,*temp2;
 n1=(struct node*)malloc(sizeof(struct node));
 n1->next=NULL;
 printf("\n enter elements");
 scanf("%d",&n1->data);
 printf("\n enter priority");
 scanf("%d",&n1->priority);
 if(head == NULL)
   head=n1;
 else
 {
   if(n1->priority<temp->priority)
   {
      n1->next=head;
      head=n1;
   }
   else
   {
     while(temp !=NULL)
     {
       temp2=temp->next;
       if(temp2->priority > n1-> priority||temp2==NULL)
       {
		n1->next=temp->next;
		temp->next=n1;
		break;
       }
       temp=temp->next;
     }
   }
 }
}
void display()
{
  struct node * temp =head;
  while(temp!=NULL)
  {
    printf("\n%d\t%d\t%p",temp->data,temp->priority,temp->next);
    temp=temp->next;
  }
}
void deletion()
{
 struct node *n2=head,*temp=head;
 int priority;
 printf("\n enter priority to deletion");
 scanf("%d",&priority);
 if(n2->priority==priority)
 {
   head=n2->next;
   free(n2);
 }
 else{
   while(temp!=NULL)
   {
     n2=temp->next;
     if(n2->priority==priority)
     {
       temp->next=n2->next;
       free(n2);
       break;
     }
     temp=temp->next;
   }
   if(temp==NULL)
   {
    printf("invalid");
   }
  }
  }
#bubble
#include<stdio.h>
#include<stdlib.h>
int main() {
    int a[100], i, j, temp, swap, n;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        swap = 0;  // Reset swap before each pass
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = 1;
            }
        }
        if(swap == 0) {
            break;
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
     getch();
    return 0;
}
#Insertion
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a[10], n, i, j, temp;
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    // Insertion Sort
    for(i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    getch(); 
}
#linear
#include <stdio.h>
#include<conio.h>
int main() {
    int a[100], n, i, data;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
	printf("Enter element: ");
	scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &data);
    for(i = 0; i < n; i++) {
	if(data==a[i]) {
	    printf("Element found at %d is %d", i,a[i]);
	    break;
	}
    }
    if(i==n) {
	printf("Element not found.\n");
    }
getch();
}
#quicksort
#include<stdlib.h>
void quicksort(int *a,int lb,int ub)
{
   int pos;
   if(lb<ub)
   {
     pos=partition(a,lb,ub);
     quicksort(a,lb,pos-1);
     quicksort(a,pos+1,ub);
   }
}
int partition(int *a,int lb,int ub)
{
  int start=lb,end=ub;
  int pivot=a[start],temp;
  while(start<=end || start > end)
  {
    while(a[start]<=pivot)
    {
      start++;
    }
    while(pivot<a[end])
    {
     end--;
    }
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
  }
  temp=a[lb];
  a[lb]=a[end];
  a[end]=temp;
  return end;
}
void main()
{
  int a[5],lb=0,ub=5,i;
  clrscr();
  for(i=0;i<5;i++)
  {
   printf("enter elements");
   scanf("%d",&a[i]);
  }
  quicksort(a,lb,ub);
  for(i=0;i<5;i++)
  {
   printf("%d",a[i]);
  }
  getch();
}
#scircula
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};struct node  *head=NULL;
void append()
{
  struct node *n1,*temp=head;
  n1=(struct node*)malloc(sizeof(struct node));
  printf("enter value:");
  scanf("%d",&n1->data);
  if(head==NULL)
  {
    head=n1;
    head->next=n1;
  }
  else
  {
   while(temp->next!=head)
   {
     temp=temp->next;
   }
   n1->next=temp->next;
   temp->next=n1;
  }
}
void display()
{
  struct node *temp=head;
  if(head==NULL)
  {
   printf("linked list empty");
   return;
  }
  else
  {
    do
    {
      printf("\n %d|%p",temp->data,temp->next);
      temp=temp->next;
    }while(temp!=head);
  }
}
void insertbegin()
{
  struct node *temp=head,*n1;
  n1=(struct node*)malloc(sizeof(struct node));
  printf("\nenter value that put in begin:");
  scanf("%d",&n1->data);
  if(head==NULL)
  {
    head=n1;
    head->next=n1;
    }
    else{
  while(temp->next!=head)
  {
	 temp=temp->next;
  }
  n1->next=head;
  temp->next=n1;
  head=n1;
  }
}
void insertend()
{
    struct node *temp=head,*n1;
    n1=(struct node*)malloc(sizeof(struct node));
    printf("\nenter element that put at end:");
    scanf("%d",&n1->data);
    if(head==NULL)
    {
       head=n1;
       head->next=n1;
    }
    else{
    while(temp->next!=head)
    {
     temp=temp->next;
    }
    n1->next=temp->next;
    temp->next=n1;
    }
}
void deletefirst()
{
  struct node *temp=head,*n2;
  if(head==NULL)
  {
    printf("\n linkedlist is empty");
    return;
  }
  else
  {
    while(temp->next!=head)
    {
     temp=temp->next;
    }
    n2=head;
    temp->next=head->next;
    head=head->next;
    free(n2);
  }
}
void deletelast()
{
  struct node *temp=head,*n2;
  if(head==NULL)
  {
    printf("linked list empty");
    return;
  }
  else
  {  if(head->next==head)
  {
   head=NULL;
   free(head);
  }
   while(temp->next!=head)
   {
     n2=head->next;
     if(n2->next==head)
     {
       break;
     }
     temp=temp->next;
   }
   temp->next=head;
   free(n2);
  }
}
void sort()
{
 struct node *i,*j;
 int temp;
 if(head==NULL)
 {
   printf("linkedlist empty");
   return;
 }
 else{
 for(i=head;i->next!=head;i=i->next)
 {
  for(j=i->next;j!=head;j=j->next)
  {
   if(i->data>j->data)
   {
    temp=i->data;
    i->data=j->data;
    j->data=temp;
   }
  }
 }
 display();
}
}
void search()
{
 int pos;
}
void main()
{
  int choice;
  clrscr();
    ..
}
#singlink
#include<stdlib.h>
void append();
void sort();
void display();
void search();
void deleteatposbefore();
void insertatposbefore();
int counter();
struct node
{
 int data;
 struct node *next;
};
struct node *head=NULL;
void main()
{
 int choice;
 clrscr();
..
}
void append()
{
 struct node *n1,*temp=head;
 n1=(struct node*)malloc(sizeof(struct node));
 printf("Enter the Element:");
 scanf("%d",&n1->data);
 if(head==NULL)
 {
   head=n1;
 }
 else
 {
   while(temp->next!=NULL)
   {
    temp=temp->next;
   }
   n1->next=temp->next;
   temp->next=n1;
 }
}
void display()
{
 struct node *temp=head;
  if (head==NULL)
  {
   printf("The List Is Empty..");
  }
  else
  {
      while (temp!=NULL)
      {
	printf("%d|%p->",temp->data,temp->next);
	temp=temp->next;
      }
      printf("total number of node is : %d",counter());
  }
}
int counter(){
 int count=0;
 struct node *temp=head;
 while(temp!=NULL)
 {
  count++;
  temp=temp->next;
 }
 return count;
}
void insertatposbefore()
{
  struct node *temp=head,*n1;
  int pos,i;
  printf("enter position that you want to enter");
  scanf("%d",&pos);
  if(pos>counter()||pos<=0)
  {
  printf("enter valid position");
  return;
  }
  else
  {
  n1=(struct node*)malloc(sizeof(struct node));
  printf("enter element that you want ot enter:");
  scanf("%d",&n1->data);
  if(pos==1){
  n1->next=head;
  head=n1;
  }
  for(i=1;i<=pos;i++)
  {
   if(i==pos-1)
   {
     n1->next=temp->next;
     temp->next=n1;
     break;
   }
   temp=temp->next;
  }
  }
}
void deleteatposbefore()
{
  struct node *temp=head,*n2;
  int pos,i;
  printf("enter position");
  scanf("%d",&pos);
  if(head==NULL||pos>counter()||pos<=0)
  {
   printf("enter valid position");
   return;
  }
  else{
  if(pos==1){
   n2=head;
   head=temp->next;
   free(n2);
  } else{
  for(i=1;i<=pos;i++){
   if(i==pos-1){
   n2=temp->next;
   temp->next=n2->next;
   free(n2);
   }
   temp=temp->next;
   }
  }
  }
}
void sort()
{
 struct node *i,*j;
 int temp;
 for(i=head;i->next!=NULL;i=i->next){
  for(j=i->next;j!=NULL;j=j->next){
  if(i->data>j->data){
  temp=i->data;
  i->data=j->data;
  j->data=temp;
  }
  }
 }
 display();
}
void search(){
int i,s;
struct node *temp=head;
printf("enter element that you want to search:");
scanf("%d",&s);
for(i=1;temp!=NULL;i++)
{
if(temp->data==s)
{
printf("%d found at position number %d",s,i);
return;
}
 temp=temp->next;
}
printf("%d not found",s);
}
#marges
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void merge(int *a,int lb,int mid,int ub){
	int i=lb,j =mid+1,k=lb;
	int b[10];
	while(i<=mid && j<=ub){
		if(a[i] < a[j]){
			b[k]=a[i];
			i++;
		}else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=ub){
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=lb; i<=ub; i++){
		a[i]=b[i];
	}
}
void mergeSort(int *a,int lb,int ub){
	int mid;
	if(lb < ub){
		mid = (lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void main(){
	int a[10];
	int i,lb=0,ub=9;
	clrscr();
	for(i=0; i<10; i++){
		printf("\nEnter element: ");
		scanf("%d",&a[i]);
	}
	mergeSort(a,lb,ub);
	for(i=0; i<10; i++){
		printf("%d|",a[i]);
	}
	getch();
}
#selection
#include <stdio.h>
int main() {
    int a[100], n, i, j, min, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        // Swap smallest found with a[i]
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
    getch();
}
#stack
struct node{
    int data;
    struct node *next;
    struct node *top=NULL;
};
void push(){
    struct node *n1;
    n1=(Struct node*)malloc(sizeof(struct node));
    printf("enter ");
    scanf("%d",&n1->data);
    n1->next=top;
    top=n1;
}
pop(){
    struct node *n2=top;
    if(top==NULL){
        node is emty;
        retrun;
    }else{
        top=top->next;free(n2);
    }
}
peek(){
    printf("%d",top->data,top->next);
}
dispaly(){
    struct node * temp=top;
    while(temp!=NULL){
        printf("%d,%p",temp->data,temp->top);
        temp=temp->next;
    }
}