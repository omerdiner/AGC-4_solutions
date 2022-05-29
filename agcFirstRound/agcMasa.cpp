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
	int n , k , bas ;
	int kalan ;
	vector<int> arr ;

	cout << "n : " ;
	cin >>  n;
	cout <<"k : " ;
	cin >> k ;
	cout << "start :" ;
	cin >> bas ;
	
	for (int i = 0; i < n; i++)
	{
		arr.pb(i+1) ;
	}
	

	while(arr.size()>1){
		bas =( bas + k - 1) % arr.size();
		arr.erase(arr.begin()+bas) ;
	}
	
	cout << arr[0] ;

	
}