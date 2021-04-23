#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>

#define pb push_back
#define mp make_pair
#define ll long long

using namespace std;

/// vise informacija o ovom problemu:
/// https://www.topcoder.com/community/competitive-programming/tutorials/an-introduction-to-recursion-part-2/

char grid[1010][1010];
bool posjetili[1010][1010]; /// za svako polje matrica cuva da li je vec posjeceno
int n,m, sx, sy, ex, ey;

bool floodfill( int x, int y ) /// funkcija kao parametar cuva trenutne koordinate
{
    cout <<" Trenutno smo na polju : " << x << " " << y<<endl;
    posjetili[x][y] = true; /// oznacavamo da smo posjetili vec ovo polje


    if( x == ex && y==ey ){ ///stigli smo u finalno polje, vrati true!!
            return true;
    }

    /// x, y+1 -> desni susjed
    if( y+1 <= m && grid[x][y+1] != '*' && posjetili[x][y+1] == false  ){ /// provjeravamo da li smo u granicama, da li ima zida, i da li smo posjetili vec polje x,y+1
        if( floodfill( x,y+1 ) == true ){ ///  rekurzija se poziva za desnog susjeda, i obilazi sva polja do kojih se iz njega dolazi
            return true;
        }
    }

    /// x, y-1 -> lijevi susjed
    if( y-1 >0 && grid[x][y-1] != '*' && posjetili[x][y-1] == false  ){ /// provjeravamo da li smo u granicama, da li ima zida, i da li smo posjetili vec polje x,y-1
        if( floodfill( x,y-1 ) == true ){ ///  rekurzija se poziva za lijevog susjeda, i obilazi sva polja do kojih se iz njega dolazi
            return true;
        }
    }

    /// x+1, y -> donji susjed
    if( x+1 <= n && grid[x+1][y] != '*' && posjetili[x+1][y] == false  ){ /// provjeravamo da li smo u granicama, da li ima zida, i da li smo posjetili vec polje x+1,y
        if( floodfill( x+1,y ) == true ){ ///  rekurzija se poziva za donji susjeda, i obilazi sva polja do kojih se iz njega dolazi
            return true;
        }
    }

    /// x-1, y -> gornji susjed
    if( x-1 >0 && grid[x-1][y] != '*' && posjetili[x-1][y] == false  ){ /// provjeravamo da li smo u granicama, da li ima zida, i da li smo posjetili vec polje x-1,y
        if( floodfill( x-1,y ) == true ){ ///  rekurzija se poziva za desnog susjeda, i obilazi sva polja do kojih se iz njega dolazi
            return true;
        }
    }

    return false;
}


int main()
{
 ios_base::sync_with_stdio(false);


    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for( int j=1;j<=m;j++ ){
            cin>>grid[i][j]; /// ova matrica sadrzi * gdje se nalazi zid, '-' kad je slobodno, S kad je polazna tacka, E kad je finalna
            if( grid[i][j] == 'S' ) sx=i, sy=j;
            else if( grid[i][j] == 'E' ) ex=i, ey = j;
        }
    }
/*
3 3
S**
--*
*E*
*/

/*
5 5
****E
---*-
S--*-
---*-
****-
*/
    if( floodfill(sx,sy)  == true) cout<< " Moze se doci!" <<endl;
    else cout<<"Ne moze se doci"<<endl;




return 0;
}
