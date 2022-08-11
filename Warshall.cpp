#include<iostream>
using namespace std;
const int n_nodes = 20;
int main() {
   int n_nodes, k, n;
   char i, j, res, c;
   int adj[10][10], path[10][10];
   cout << "\n\tMaximum number of nodes in the graph :";
   cin >>n;
   n_nodes = n;
   cout << "\nEnter 'y' for 'YES' and 'n' for 'NO' \n";
   for (i = 97; i < 97 + n_nodes; i++)
      for (j = 97; j < 97 + n_nodes; j++) {
         cout << "\n\tIs there an edge from " << i << " to " << j << " ? ";
         cin >>res;
         if (res == 'y')
            adj[i - 97][j - 97] = 1;
         else
            adj[i - 97][j - 97] = 0;
      }
      cout << "\nTransitive Closure of the Graph:\n";
      cout << "\n\t\t\t ";
      for (i = 0; i < n_nodes; i++) {
         c = 97 + i;
         cout << c << " ";
      }
      cout << "\n\n";
      for (int i = 0; i < n_nodes; i++) {
         c = 97 + i;
         cout << "\t\t\t" << c << " ";
         for (int j = 0; j < n_nodes; j++)
            cout << adj[i][j] << " ";
            cout << "\n";
      }
      return 0;
}