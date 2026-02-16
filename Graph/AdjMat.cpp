
#include<bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    // Creating adjacency matrix of size vertex x vertex
    //unweighted graph.
    // vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, 0));

    //if weighted graph.
    // vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));


    // int u, v,weight;
    // for (int i = 0; i < edges; i++) {
    //     cin >> u >> v >> weight;
    //     // for undirected graph
    //     AdjMat[u][v] = weight;
    //     AdjMat[v][u] = weight;
    // }
//   cout<<endl;
    //  printing adjacency matrix
    // for (int i = 0; i < vertex; i++) {
    //     for (int j = 0; j < vertex; j++) {
    //         cout << AdjMat[i][j] << " ";
    //     }
    //     cout << endl;
    // }


   //Implementation through AdjacentList.
   //undirected graph with weight.
     typedef pair <int,int>p;
   vector<p>AdjList[vertex];
   int u, v,weight;

   for(int i=0;i<edges;i++){
    cin>>u >> v >> weight;   //input the weight.
    AdjList[u].push_back(make_pair(v,weight)); //push in the pair format.
    AdjList[v].push_back(make_pair(u,weight));
      
   }

   //directed graph(direction given).
   for(int i=0;i<edges;i++){
    cin>>u >> v >> weight;   //input the weight.
    AdjList[u].push_back(make_pair(v,weight)); //push in the pair format.
     
   }

//for printing the output.
    for (int i = 0; i < vertex; i++) {
        cout<<i<<"->";
        for (int j = 0; j < AdjList[i].size(); j++) {
            cout << AdjList[i][j].first << " " << AdjList[i][j].second<<" " ;
        }
    cout<<endl;
    
}
return 0; 
}