#include<iostream>
 
using namespace std;
 
bool moze[10][10];
int x,y,n;
 
void floodfill( int x, int y, int brojPoteza )
{
    if( brojPoteza == n ){
        moze[x][y] = true;
        return;
    } 
 
    if( x+1 <10 && y+2<10 ) floodfill(x+1,y+2, brojPoteza+1);
 
    if( x+1 <10 && y-2 >=0 ) floodfill(x+1,y-2, brojPoteza+1);
 
    if( x+2 <10 && y+1<10 ) floodfill(x+2,y+1, brojPoteza+1);
 
    if( x+2 <10 && y-1>=0 ) floodfill(x+2,y-1, brojPoteza+1);
 
    if( x-1 >=0 && y+2<10 ) floodfill( x-1,y+2,brojPoteza+1 );
 
    if( x-1 >= 0 && y-2>=0 ) floodfill( x-1,y-2, brojPoteza+1 );
 
    if( x-2 >=0 && y+1 < 10 ) floodfill( x-2, y+1, brojPoteza+1 );
 
    if( x-2>=0 && y-1 >= 0 ) floodfill( x-2, y-1, brojPoteza+1 );
}
 
int main()
{
 
    cin>>x>>y>>n;
    x--;
    y--;
 
    int cnt=0;
 
    floodfill(x,y,0);
 
    for(int i=0;i<10;i++){
        for( int j=0;j<10;j++ )
        {
            if( moze[i][j] ) cnt++;
        }
    }
    cout<<cnt<<endl;
 
    return 0;
}
 
