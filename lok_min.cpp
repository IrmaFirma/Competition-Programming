#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair

using namespace std;

vector<vector<int>> adjl; // lista susjedstva
vector<bool> visited; // cuvamo koje smo cvorove posjetili
int cvorovi_iz_komponente = 0; /// broji cvorove iz komponente pocetnog

void dfs(int v) {
    //cout << "Trenutno se nalazim u cvoru " << v+1<< endl;
    cvorovi_iz_komponente++;
    visited[v] = true;
    for ( int u=0; u < adjl[v].size(); u++ ) {
        if (!visited[ adjl[v][u] ])
            dfs( adjl[v][u]) ;
    }
}

int main()
{
 ios_base::sync_with_stdio(false);

int n; // broj cvorova u grafu
int m; /// broj ivica
int s; /// pocetni cvor

cin>>n>>m;

adjl.resize(n);
visited.resize(n);


for( int i=0;i<m;i++ ){
    int u,v;
    cin>>u>>v; /// u je odakle ivica pocinje, v gdje zavrsava
    u--; /// smanjujemo radi indeksacije!
    v--;
    adjl[u].push_back(v);
    adjl[v].push_back(u); /// moramo u oba smjera jer je graf neusmjeren
}

cin>>s; /// unosimo pocetni cvor
s--; /// da nam bude 0-indeksirano a ne 1-indeksirano

dfs(s);

/// nakon sto obidjemo sve cvorove do kojih S moze doci, svi preostali cvorovi su oni do kojih NE MOZE doci.
/// prema tome, rezultat je ukupan_broj_cvorova - cvorovi_iz_komponente

cout << n - cvorovi_iz_komponente <<endl;


return 0;
}

