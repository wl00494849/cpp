#include "iostream"
#include "vector"

using namespace std;

void add_adj_list(vector<int> adj[],int v1,int v2){
    adj[v1].push_back(v2);
    adj[v2].push_back(v1);
}

int main(){
    vector<int> adj[8];
    int edge[9][2] = {{1,2},{2,3},{3,4},{1,5},{2,5},{1,6},{1,7},{5,4},{6,7}};
    for (int i = 0; i < 9; i++)
    {
        add_adj_list(adj,edge[i][0],edge[i][1]);
    }
    
    for (int i = 0; i < 8; i++)
    {
        cout << i ;
        for (int v : adj[i])
        {
            cout << "->" << v ;
        }
        cout << " " << endl;
    }
    

    return 0;
}