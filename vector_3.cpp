#include<iostream>
#include<vector>

using namespace std;

int main() 


{
    vector<int> v;
    
    int ch,i,x,n;
    do
    {
        cout<<"\nPress 1 to Add Element";
        cout<<"\nPress 2 to Show Element";
        cout<<"\nEnter your choice: ";

        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter Data ";
            cin>>n;
            v.push_back(n);

        }
        else if(ch==2)
        {
            for (int i = 0; i < v.size(); i++) {
                cout<< v[i] << " ";

        }
        
    }
    cout<<"\nPress 1 to continue: ";
    cin>>x;
}while(x==1);

return 0;

}