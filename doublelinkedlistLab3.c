#include<stdio.h>
#include<stdlib.h>
void createDoubleLinkedList();
void display();
void Search(int data);
struct node{
struct music{
    int id;
    char title[10] ;
    }*play;
struct node*next;
struct node*prev;

}*head,*last,*current = NULL;
int main(){
    int n,vb;

    printf("================================\n");
    printf("Enter 1 to store A music with id and title.\n");
    printf("Enter 2 to Display All musics.\n");
    printf("Enter 3 to Search Music (play music using previous and back keys).\n");
    printf("================================\n");

    scanf("%d",&n);
    switch(n){
    case 1:
       createDoubleLinkedList();
       break;
    case 2:
       display();
       break;
    case 3:
       printf("Enter a music to search.");
       scanf("%d",&vb);
       search(vb);
       break;
   default:
    printf("you enter illegal character");
          }
return 0;}


void createDoubleLinkedList(){
    int i, n;
    struct node *newNode;
    struct music play;
head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else

    {

        printf("how many music list do you want to have?\n");
        scanf("%d",&n);
        printf("Enter the first musics id\n");
                scanf("%d", &play.id);
                printf("Enter the first musics title\n");
                scanf("%s", &play.title);
        head->play=play.id;
        head->play=play.title;
        head->next=NULL;
        head->prev=NULL;
        last=head;



    for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter music of %d id: ", i);
                    scanf("%d", &play.id);
                    printf("Enter music of %d title: ", i);
                    scanf("%s", &play.title);

                    newNode->play = play.id;
                    newNode->play = play.title;
                    newNode->prev = last;
                    newNode->next = NULL;

                    last->next = newNode;
                    last = newNode;
                }}
            printf("your music list created successfully\n");
            display();

      }
   }

  void search(int id) {
   int pos = 0;
   struct node *temp;

   if(head==NULL) {
      printf("Linked List not initialized");
   }

   current = head;
   while(current!=NULL) {
      pos++;
      if(current->play->id == id) {
         printf("%s found at position %d\n", current->play->title, pos);
         printf("%d \n", current->play->id, pos);
         printf("\n############################################\n");
         printf("press one for previous\n");
         printf("press two for next");
         printf("\n#############################################\n");

		 int con;
		 scanf("%d",&con);
         switch(con){
         	case 1:
         		temp = current->prev;
         		printf("the previous number is %d",temp->play->id);
         		break;
         	case 2:
         		temp = current->next;
         		printf("the next number is %d",temp->play->id);
         		break;
         	default:
         		printf("hhhhhhhhh");
         		break;

		 }
         return;
      }
   }
      main();
   }



   void display()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->play->id);

            n++;

            temp = temp->next;
        }
    }
    main();
}
void disssplay(){
    printf("\n\n\n\nyour music List contains\n\n\n");
  while(head!=NULL){
    printf("\n%d\t=>\t",head->play->id);
    printf("%s\t=>\t\n",head->play->title);
   head=head->next;
  }
main();
}





