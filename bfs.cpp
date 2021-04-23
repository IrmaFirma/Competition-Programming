#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>

#define pb push_back
#define mp make_pair

using namespace std;
// zadatak : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/


int main()
{
 ios_base::sync_with_stdio(false);

vector<vector<int>> adjl;  // lista susjedstva - adjacency list
vector<int> nivo; /// cuva nivo za svaki cvor
int n; // broj cvorova u stablu
int trazeni_nivo;



cin>>n;

adjl.resize(n);
nivo.resize(n);

for( int i = 0; i<n-1;i++ ){
        int u,v;
    cin>>u>>v;
    u--;
    v--;
    adjl[u].push_back(v);
    adjl[v].push_back(u);
}

cin>>trazeni_nivo;

queue<int> q;
vector<bool> used(n);


int s = 0; /// pocetni cvor
int broj_cvorova_u_trazenom_nivou=0;


q.push(s);
used[s] = true;
nivo[s] = 1; /// pocetni cvor je na prvom nivou


while (!q.empty()) {

    int v = q.front();
//cout << "U cvoru smo " << v << " na nivou " << nivo[v] <<endl;
    q.pop();
    for (int u : adjl[v]) {
        if (!used[u]) {
            used[u] = true;
            q.push(u);
            nivo[ u ] = nivo[ v ] + 1;
            if( nivo[u] == trazeni_nivo )
                broj_cvorova_u_trazenom_nivou++;
        }
    }

}

cout << broj_cvorova_u_trazenom_nivou <<endl;



return 0;
}



