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
using namespace std ;






int main(){
	int matrix[50][50] ;
	int n ;
	int x , y ;
	int bas ;

	cout << "n : " ;
	cin >> n ;
	cout << "x :" ;
	cin >> x ;
	cout << "y : " ;
	cin >> y ;

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << ". satir : " ;
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j] ;
		}
	}
	bas = matrix[x-1][y-1] ;

	for (int i = 0; i < n; i++)
	{
		bas+= matrix[i][y-1] * matrix[x-1][i] ;
	}
	cout << bas ;

	 
	
}