#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

/*prototype declaration*/

void adb(struct node*,int);    /*function to Create user Account' of the linked-list*/

void dep(struct node*,int);    /*function to deposit cash in the linked-list*/

void withdraw(struct node*,int);    /*function to withdraw cash in the linked-list*/

void search(struct node*);    /*function to search account of the linked-list*/

void del(struct node*,int);    /*function to delete account of the linked-list*/

int displaymenu(void);   /*function to display the menu*/

struct node *p=NULL;


int main()
{
    int addition(int z,int b);
    int x,choice;
    char a[100];
    char b[100];
    char c[100];
    int d;
    int e;
    int y;
    int z;
    int add;
    int sub;
    do
    {
        choice=displaymenu();
        switch(choice)
        {
            case 1:
                printf("Enter customer's full name :");
                scanf("%s",&a);
                printf("Enter IFSC (xxxxx-xxxxxxx-x) :");
                scanf("%d",&x);
                printf("Enter Gender (M/F) :");
                scanf("%s",&b);
                printf("Enter account type (C/S) :");
                scanf("%s",&c);
                printf("Your account number is :");
                scanf("%d",&d);
                printf("Enter pin :");
                scanf("%d",&y);      
                printf("Enter Balance (min:500) :");
                scanf("%d",&z);
   /* check the boolean condition */
   if( z < 500 ) {
      /* if condition is true then print the following */
      printf("minimum balance is Rs.500\n" );
   } else {
      /* if condition is false then print the following */
      printf("Congrats!!\n" );
   }
   cout<<" "<<endl;
      /* check the boolean condition */
   if( z >= 500 ) {
          /* if condition is true then print the following */
          cout<<"********************************************"<<endl;
                printf("Your Account has been created successfully");
                cout<<" "<<endl;
          cout<<"********************************************"<<endl;
   } else {
           /* if condition is false then print the following */
             cout<<"********************************************"<<endl;
      printf("Sorry,Your Account has not been created");    
             cout<<" "<<endl;
             cout<<"********************************************"<<endl;     
    }
                cout<<" "<<endl;
                adb(p,x);
                break;
         case 2:     
                printf("Enter pin :");
                scanf("%d",&y);
                /*check the boolean condition*/
                if(sub=z-e){
                printf("Current balance : %d\n",sub);
                } else {
                printf("Current balance : %d\n",z);
                }
                printf("Amount to be deposited :");
                scanf("%d",&e);
                add=sub+e;
                cout<<"Your account balance:"<<add<<endl;
                cout<<" "<<endl;
                cout<<"******************************"<<endl;
                printf("You have deposited Rs.%d\nin your account successfully",e);
                cout<<" "<<endl;
                cout<<"******************************"<<endl;
                dep(p,x);
                break;
         case 3:
                printf("Enter pin :");
                scanf("%d",&y);
                /*check the boolean condition*/
                if(add=z+e){
                printf("Current balance : %d\n",add);
                } else {
                printf("Current balance : %d\n",z);
                }
                printf("Amount to be withdrawn :");
                scanf("%d",&e);
                sub=add-e;
                cout<<"Your account balance:"<<sub<<endl;
                cout<<" "<<endl;
                cout<<"******************************"<<endl;
           printf("You have withdrawn Rs.%d\nfrom your account successfully",e);               cout<<" "<<endl;
                cout<<"******************************"<<endl;
                withdraw(p,x);
                break;                                 
        case 4:    
        printf("Enter pin :");
        scanf("%d",&y);
        cout<<" "<<endl;
        cout<<"**********************"<<endl;
        printf("NAME :%s\n",a); cout<<" "<<endl;
        printf("IFSC :%d\n",x); cout<<" "<<endl;
        printf("GENDER :%s\n",b); cout<<" "<<endl;
        printf("Acc_TYPE :%s\n",c); cout<<" "<<endl;
        printf("Acc_NUMBER :%d\n",d); cout<<" "<<endl;
        if(sub=add-e){
        printf("BALANCE :%d\n",sub);
        } else {
            printf("BALANCE :%d\n",z);
        }
        cout<<"**********************"<<endl;
        break;
        case 5:
                 printf("Enter customer's full name :");
                scanf("%s",&a);
                printf("Enter IFSC code(xxxxx-xxxxxxx-x) :");
                scanf("%d",&x);
                printf("Enter Gender (M/F) :");
                scanf("%s",&b);
                printf("Enter account type (C/S) :");
                scanf("%s",&c);
                printf("Your account number is :");
                scanf("%d",&d);
                printf("Enter pin :");
                scanf("%d",&y);
                cout<<" "<<endl;
                cout<<"*********************************************"<<endl;
                printf("Your account has been deleted successfully");
                cout<<" "<<endl;
                cout<<"*********************************************"<<endl;
                del(p,x);
                break;
        case 6:
                break;
        default:
                printf("Invalid choice");
        }
    }while(choice!=6);
}

/*function to Create user Account of the linked-list*/

void adb(struct node *q,int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=q;
    q=temp;
    p=q;
}

/*function to deposit cash in the linked-list*/

void dep(struct node *q,int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=q;
    q=temp;
    p=q;
}

/*function to withdraw cash in the linked-list*/

void withdraw(struct node *q,int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=q;
    q=temp;
    p=q;
}

/*function to display account of the linked-list*/

void display(struct node *p)
{
    while(p!=NULL)
    {
    printf("\t%d",p->data);
    p=p->link;
    }
}
     
 /*function to delete account of the linked-list*/

void del(struct node *q,int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=q;
    q=temp;
    p=q;
}

/*function to display the menu*/

int displaymenu()
{
    int c;
    cout<<" "<<endl;
   printf("BANK MANAGEMENT SYSTEM"); cout<<" "<<endl;
    printf("\n1.To Create User Account");
    printf("\n2.To Deposit Cash");
    printf("\n3.To Withdraw Cash");
    printf("\n4.Search Account");
    printf("\n5.Delete Account");
    printf("\n6.Exit");
    printf("\n\tchoice=");
    scanf("%d",&c);
    return c;
}
