// #include <iostream>
// #include <malloc.h>
// #include<string.h>
// using namespace std;

// struct bank
// {

//     char ac[20],name[20],email[20],phone[20],address[20];
//     int pin,amt;
//     struct bank *next;

// };

// struct bank *first;


// void createAccount(char ac[],char na[],char em[],char ph[],char ad[],int pin,int a)
// {

//     struct bank *newaccount;
//     newaccount=(struct bank*)malloc(sizeof(struct bank));
//     strcpy(newaccount->ac,ac);
//     strcpy(newaccount->name,na);
//     strcpy(newaccount->email,em);
//     strcpy(newaccount->phone,ph);
//     strcpy(newaccount->address,ad);
//    newaccount->pin=pin;
//    newaccount->amt=a;
//    newaccount->next=NULL; 
//     if(first==NULL)
//     first=newaccount;
//     else
//     {
//         struct bank *p;
//         p=first;
//         while(p->next!=NULL)
//         {
//             p=p->next;
//         }
//         p->next=newaccount;
//     }
// }


// void showAccount()
// {
//     struct bank *p;
//     p=first;
//     while(p->next!=NULL)
//     {
//         cout<<"\n"<<p->ac<<"\t"<<p->name<<"\t"<<p->email<<"\t"<<p->phone<<"\t"<<p->address<<"\t"<<p->pin<<"\t"<<p->amt;
// p=p->next;
//     }
//     cout<<"\n"<<p->ac<<"\t"<<p->name<<"\t"<<p->email<<"\t"<<p->phone<<"\t"<<p->address<<"\t"<<p->pin<<"\t"<<p->amt;

// }


// void getWithdraw(char ac[],int pn,int a)
// {
//     struct bank *p;
//     p=first;
//     int cn=0,camt=0;
//     while(p->next!=NULL)
//     {
//         cout<<"\nCheck Account";
//         int x=strcmp(ac,p->ac);
//         if(x==0 && pn==p->pin);
//         {
//             cn=1;
//             camt=p->amt;
//         }


//         p=p->next;
//     }
//     cout<<"\nAfter Chck Account";
//         if(cn==1)
//         {
//             if(camt>=a)
//             {
//                 camt=camt-a;
//               p=first;
//               while(p->next!=NULL)
//               {
//                 int x=strcmp(p->ac,ac);
//                 if(x==0)
//                 {
//                     p->amt=camt;
                    
//                 }
//                 p=p->next;
//               }  

//         cout<<"\nAfter withdraw "<<a<<" YOur Currnet blance is = "<<camt;
//             }
//             else
//             cout<<"\nInsufficient blanace ";
//         }
//         else
//         cout<<"\nInvalid Account or Pin";
//     }
    




//     void getdeposit(char ac[],int pn,int a)
//     {
//         struct bank *p;
//         p=first;
//         int cn=0,camt=0;
//         while(p->next!=NULL)
//         {
//             int x=strcmp(ac,p->ac);
//             if(x==0 && pn==p->pin);
//             {
//                 cn=1;
//                 camt=p->amt;
//             }
    
    
//             p=p->next;
//         }
//         cout<<"\nAfter Chck Account";
//             if(cn==1)
//             {
//                     camt=camt+a;
//                   p=first;
//                   while(p->next!=NULL)
//                   {
//                     int x=strcmp(p->ac,ac);
//                     if(x==0)
//                     {
//                         p->amt=camt;
                        
//                     }
//                     p=p->next;
//                   }  
    
//             cout<<"\nAfter Deposit "<<a<<" YOur Currnet blance is = "<<camt;
//                 }
//             else
//             cout<<"\nInvalid Account or Pin";
//         }
        
    
    


// void balance(char ac[],int pn)
// {
//     struct bank *p;
//     p=first;
//     int cn=0,camt=0;
//     while(p->next!=NULL)
//     {
//         int x=strcmp(ac,p->ac);
//         if(x==0 && pn==p->pin);
//         {
//             cn=1;
//             camt=p->amt;

//         }
//         p=p->next;
//     }
//         if(cn==1)
//         {
//             cout<<"\nCurrent balacne is = "<<camt;
//         }
//         else
//         cout<<"\nInvalid Account or Pin";
//     }
    


// int main()

// {

//     void createAccount(char[],char[],char[],char[],char[],int,int);
//     void showAccount();
//     void getWithdraw(char[],int,int);
//     void balance(char[],int);
//     void getdeposoit(char[],int,int);

//     int ch,x;
//     do
//     {
//         cout<<"\nPress 1 to Create Account ";
//         cout<<"\nPress 2 to Show Account ";
//         cout<<"\nPress 3 to Withdraw ";
//         cout<<"\nPress 4 to Balance Enquiry ";
//         cout<<"\nPress 5 to Deposit ";
        
//         cout<<"\nENter Your Choice ";
//         cin>>ch;
//         if(ch==1)
//         {
//             char ac[20],n[20],e[20],ph[20],ad[20];
//             int pin,a;
//             cout<<"\nENter Account Numbe  ";
//             cin>>ac;
//             cout<<"\nEnter Name ";
//             cin>>n;
//             cout<<"\nEnter Email ";
//             cin>>e;
//             cout<<"\nEnter Phone ";
//             cin>>ph;
//             cout<<"\nEnter Address ";
//             cin>>ad;
//             cout<<"\nEnterPin ";
//             cin>>pin;
//             cout<<"\nEnter Opening Blaance  ";
//             cin>>a;
//             createAccount(ac,n,e,ph,ad,pin,a);
            
            
//         }
//         else if(ch==2)
//         showAccount();
//         else if(ch==3)
//         {
//             char ac[20];
//             int pin,a;
//             cout<<"\nENter Account Numbe  ";
//             cin>>ac;
//             cout<<"\nEnter Pin ";
//             cin>>pin;
//             cout<<"\nEnter Amount ";
//             cin>>a;
//             getWithdraw(ac,pin,a);
            
//         }

//         else if(ch==4)
//         {
//             char ac[20];
//             int p;
//             cout<<"\nENter Account Numbe  ";
//             cin>>ac;
//             cout<<"\nEnter Pin ";
//             cin>>p;
//             balance(ac,p);
            
//         }

//         else if(ch==5)
//         {
//             char ac[20];
//             int pin,a;
//             cout<<"\nENter Account Numbe  ";
//             cin>>ac;
//             cout<<"\nEnter Pin ";
//             cin>>pin;
//             cout<<"\nEnter Amount Deppsoit ";
//             cin>>a;
//             getdeposit(ac,pin,a);
            
//         }

//         cout<<"\nPress 1 to contineu ";
//         cin>>x;
//     }while(x==1);

// return 0;
// }



#include <iostream>
#include <malloc.h>
using namespace std;

struct node {
    int data;
    struct node *prev, *next;
};

struct node *first = NULL;

void createnode(int n) {
    struct node *nw = (struct node *)malloc(sizeof(struct node));
    if (nw == NULL) {
        cout << "Memory allocation failed!\n";
        return;
    }
    
    nw->data = n;
    nw->next = NULL;
    nw->prev = NULL;

    if (first == NULL) {
        first = nw;
    } else {
        struct node *p = first;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = nw;
        nw->prev = p;
    }
}

void show() {
    if (first == NULL) {
        cout << "\nList is empty!\n";
        return;
    }

    struct node *p = first;
    cout << "\nDoubly Linked List: ";
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void insertAtFirst(int n) {
    struct node *nw = (struct node *)malloc(sizeof(struct node));
    if (nw == NULL) {
        cout << "Memory allocation failed!\n";
        return;
    }

    nw->data = n;
    nw->prev = NULL;
    nw->next = first;

    if (first != NULL) {
        first->prev = nw;
    }

    first = nw;
}

void deleteAtIndex(int ind) {
    if (first == NULL) {
        cout << "List is empty!\n";
        return;
    }

    struct node *p = first;
    int count = 0;

    while (p != NULL && count < ind) {
        p = p->next;
        count++;
    }

    if (p == NULL) {
        cout << "Invalid index!\n";
        return;
    }

    if (p->prev != NULL) {
        p->prev->next = p->next;
    } else {
        first = p->next;  // Deleting the first node
    }

    if (p->next != NULL) {
        p->next->prev = p->prev;
    }

    free(p);
    cout << "Node deleted at index " << ind << endl;
}

int main() {
    int ch, x, n, index;
    
    do {
        cout << "\nMenu:";
        cout << "\n1. Create node";
        cout << "\n2. Show list";
        cout << "\n3. Insert at first";
        cout << "\n4. Delete at index";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter data for node: ";
                cin >> n;
                createnode(n);
                break;
            case 2:
                show();
                break;
            case 3:
                cout << "Enter value to insert at first: ";
                cin >> n;
                insertAtFirst(n);
                break;
            case 4:
                cout << "Enter index to delete: ";
                cin >> index;
                deleteAtIndex(index);
                break;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "\nPress 1 to continue: ";
        cin >> x;

    } while (x == 1);

    return 0;
}
