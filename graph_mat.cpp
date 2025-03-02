#include <bits/stdc++.h>
using namespace std;

void addedge(vector<vector<int>> &mat, int i, int j)
{
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void displaymatrix(vector<vector<int>> &mat)
{
    int v = mat.size();
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int v = 4;
    vector<vector<int>> mat(v, vector<int>(v, 0));

    addedge(mat, 0, 1);
    addedge(mat, 0, 2);
    addedge(mat, 1, 2);
    addedge(mat, 2, 3);

    cout << "Adjacency Matrix Representation" << endl;
    displaymatrix(mat);

    return 0;
}
