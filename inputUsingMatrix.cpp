#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> matrix) {
    for(auto arr : matrix) {
        for(auto ele : arr) {
            cout << ele << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m; // n -> number of nodes, m -> number of edges
    cin >> n >> m;
    vector<vector<int>> matrix(n + 1, vector<int> (n + 1));
    for(int i = 0 ; i < m ; i++) {
        int u, v;
        cin >> u >> v; // There is an edge between u and v nodes
        matrix[u][v] = 1;
    }

    display(matrix);

    // Time Complexity: O(m)
    // Space Complexity: O(n^2) -> Too costly

}