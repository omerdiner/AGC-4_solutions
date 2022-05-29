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

void matrisOlustur(vector<int> arr , vector<vector<int>> &matris,int row,int n){

	for (int i = 0; i < (arr[row-1]+1)/2; i++)
	{
		
		matris[row][n/2-i] = 1 ;
		matris[row][n/2+i] = 1 ;
	}
	
	if(row < n)matrisOlustur(arr,matris,row+1,n);


}


int main(){
	int n ; 
	int k  ;
	
	

	cout << "n :" ;
	cin >> n ;
	int m = 2*n+3 ;
	vector<int> arr , x(m,0);
	vector<vector<int>>matris(m,x) ;
	
	
	for (int i = 1; i < 2*n+2; i++)
	{
		cout << "Total 1 in row " << i << " :" ;
		cin >> k ;
		arr.pb(k)  ;
	}

	matrisOlustur(arr,matris,1,m) ;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matris[i][j]<< " " ;
		}
		cout << endl ;
		
	}
	
	
	
	

	


	return 0 ;
}