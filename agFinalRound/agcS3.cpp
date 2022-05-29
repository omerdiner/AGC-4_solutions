#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <vector>
#include <algorithm>
#include <set> 
#include <map>
#include <math.h>
#include <unordered_map>
#include <unistd.h>
#define MAXN 1000009
#define INF 1000000007
#define mp(x,y) make_pair(x,y)
#define all(v) v.begin(),v.end()
#define pb(x) push_back(x)
#define wr cout<<"----------------"<<endl;
#define ppb() pop_back()
#define tr(ii,c) for(__typeof((c).begin()) ii=(c).begin();ii!=(c).end();ii++)
#define ff first
#define ss second
#define debug(x)  cerr<< #x <<" = "<< x<<endl;

#define MAX 100 
using namespace std ;

int total = 0 ; 

void virus(vector<vector<int>> &matris , int x , int y  , int gun , int basx , int basy , int n ,int m){
    if(matris[y][x] == 0){
        matris[y][x] = 1 ;
        total++;
    }
   
        if(x-1 >= 0 && matris[y][x-1] == 0){
            if( abs(basx-(x-1)) <= gun)virus(matris,x-1,y,gun,basx,basy,n,m);
        }
        if(x+1 < n && matris[y][x+1] == 0){
           if( abs(basx-(x+1)) <= gun)virus(matris,x+1,y,gun,basx,basy,n,m);
        
        }
        if(y-1 >=0 && matris[y-1][x] == 0){
              if( abs(basy-(y-1)) <= gun)virus(matris,x,y-1,gun,basx,basy,n,m);
        }
        if(y+1 < m && matris[y+1][x] == 0) {
           if( abs(basy-(y+1)) <= gun)virus(matris,x,y+1,gun,basx,basy,n,m);
           
        }
   
        return ;
}


int main(){
    int n , m , x ,y , gun ;
    int xSol , xSag , yUst , yAlt ;

    cout << "matris boyutu x ekseni :" ;
    cin >> n ;
    cout << "matris boyutu y ekseni :" ;
    cin >> m ;
    cout << "enfekte kisi x :" ;
    cin >> x ;
    cout << "enfekte kisi y :" ;
    cin >> y ;
    cout << "gun sayisi :" ;
    cin >> gun ;
    vector<int>  arr(n,0);
	vector<vector<int>> matris(m,arr) ;
    matris[y-1][x-1] = 1;
   
   virus(matris,x-1,y-1,gun,x-1,y-1,n,m) ;
   cout << "\n" ;
   cout << "total : "<<  total << endl ;

    cout << "\n" ;
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cout << matris[i][j] << " " ;
       }
       cout << endl ;
   }
   


    return 0 ;

    
    
    
    
    
    
    
	
	

	
}