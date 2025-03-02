#include<iostream>
using namespace std;
int stack[5];
int push=-1,pop=4;

void getinsert(int n)
{
    if(push==4)
    {
        cout<<"\nstack is overflow";
    }
    else
    {
    push++;
    stack[push]*n;
    }
}
void getdelete()
{
    if(push==-1 || pop==0){
    cout<<"\nUnderflow no element to deleted";
    }
    else{
        pop--;
    }
}
void show()
{
    if(push==-1 || pop==0)
    cout<<"\nUnderflow no element to be display";
    else
    {
        int i;
        for(i=0;i<=push;i++)
        {
            cout<<"\n"<<stack[i];
        }
    }
}
int main(){
    void getinsert(int);
    void getdelete();
    void show();
    int ch,x,n;

    do{
        cout<<"\npress 1 to insert ";
        cout<<"\npress 2 to delete ";
        cout<<"\npress 3 to show ";
        cout<<"\nEnter your choice ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter element to be insert ";
            cin>>n;
            getinsert(n);
        }
        else if(ch==2)
        getdelete();

        else if(ch==3)
        show();
        else
        cout<<"\ninvalid choice ";
        cout<<"\npress 1 to continue: ";
        cin>>x;
    }while(x==1);
    return 0;
}