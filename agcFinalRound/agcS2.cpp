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

int geri(string s , int n ){
	if(n == -1) return - 1 ;
	else if(s[n] == '1') return n + 1; 
	else return geri(s,n-1) ;
	

}

int ileri(string s , int n ){
	if(n == s.size()) return - 1 ;
	else if(s[n] == '1') return n + 1;
	else return ileri(s,n+1) ;

}



int main(){
	int n , b , f  ;
	string s ;
	cin >> n ;
	cin >> s ;
	
	if(s[n-1] == '1') cout << n ;

	else{
		b = geri(s,n-1) ;
		f = ileri(s,n) ;
	//	cout << f << " " << b << endl ;
		if(b != -1 || f != -1){
			if(b==-1) cout << f ;
			else if(f==-1) cout << b ;
			else{
				if(n-b <= f-n) cout << b ;
				else cout << f ;
			}
		}
		else cout << "urun bulunamadi" ;
	}
    return 0 ;
	
}