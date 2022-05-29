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


void matrisEsitle(int m1[100][100] , int m2[100][100] , int n ,int k,int j){
	for (int i = 0; i < n; i++)
	{
		m1[j][i] = m2[k][i] ;
	}
	

}

int main(){
	int x , n , a  ;
	int k ;
	int i ;
	
	cout << "x :" ;
	cin >> x ;
	cout << "n: " ;
	cin >> n ;
	int arr[100][100] ;

	for (int i = 0; i < x; i++)
	{
		cout << endl << "X adet vektor icin " << i+1 <<". vektoru giriniz :" ;
		for(int j = 0; j < n; j++)
		{
			cin >> arr[i][j] ;

		}
		
	}
	cout << "a : " ;
	cin >> a ;
	if(n != x-a)cout << "?" ;
	else{
		int matris1[100][100] , matris2[100][100]  , carpim[a][n];
		int randomDeger[a] , flag = 0;
		i = 0 ;
		while(i<a){
			k = rand() % x ;
			flag = 0 ;
			for (int j = 0; j < i; j++)
			{
				if(k == randomDeger[j]){
					flag = 1 ;
					break ;
				}
			}
			if(flag == 0){
				randomDeger[i] = k ;
				matrisEsitle(matris1,arr,n,k,i);
				i++;
			}
			

		}
		k=0;
		
		for (int i = 0; i < x; i++)
		{
			if(randomDeger[i] != i){
				matrisEsitle(matris2,arr,n,i,k) ;
				k++;
			}
		}
		
		cout << "------ 1. matris ----- " << endl ;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << matris1[i][j] << " " ;
			}
			cout << endl ;
			
		}
		cout << endl ;
		cout << "------ 2. matris ----- " << endl ;
		for (int i = 0; i < x-a; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << matris2[i][j] << " " ;
			}
			cout << endl ;
			
		}
		cout << "----carpim-----" << endl ; 
		for(int i = 0; i < a; ++i){
        for(int j = 0; j < n; ++j){
            for(int k = 0; k < x-a; ++k)
            {
                carpim[i][j] = matris1[i][k] * matris2[k][j] ;
            }
			cout << carpim[i][j] << " " ;
		}
		cout << endl ;
		}
		
	}



	return 0 ;
}