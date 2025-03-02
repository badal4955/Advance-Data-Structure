#include<iostream>
#include<vector>
using namespace std;

void addedge(vector<vector<int>> &adj,int i,int j){
    adj[i].push_back(j);
    adj[j].push_back(i);
}

void dispalyadjlist(const vector<vector<int>>& adj){
    for(int i=0; i<adj.size(); i++){
        cout << i << " : ";
        for(int j: adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int v =4;
    vector<vector<int>> adj(v);

    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,2,3);

    cout<<"Ajacency list representation: "<<endl;
    dispalyadjlist(adj);

    return 0;
}