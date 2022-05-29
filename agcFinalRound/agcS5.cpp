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

int main(){

    int n ,k;
    vector<int> arr ;
    vector <int> cikti ;
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        cin >> k ;
        arr.pb(k) ;
    }

    for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0)  cikti.pb(arr[i] / 4 + 1) ;

            else cikti.pb(0) ;
        }
        

    

    for (int i = 0; i < n; i++)
    {
        cout << cikti[i] << " " ;
    }
    


    return 0 ;
}