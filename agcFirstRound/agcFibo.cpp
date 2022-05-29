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


using namespace std;

void carpim(int  fibo[2][2], int matris[2][2]) {
   int a = fibo[0][0] * matris[0][0] + fibo[0][1] * matris[1][0];
   int b = fibo[0][0] * matris[0][1] + fibo[0][1] * matris[1][1];
   int c = fibo[1][0] * matris[0][0] + fibo[1][1] * matris[1][0];
   int d = fibo[1][0] * matris[0][1] + fibo[1][1] * matris[1][1];
   fibo[0][0] = a;
   fibo[0][1] = b;
   fibo[1][0] = c;
   fibo[1][1] = d;
}
void usAl(int fibo[2][2], int n) {
   if(n <=1)return;
   int matris[2][2] = {{1,1},{1,0}};
   usAl(fibo, n / 2);
   carpim(fibo, fibo);
   if (n % 2 == 1)carpim(fibo, matris);
}
int fibonacci(int n) {
   int fibo[2][2] = {{1,1},{1,0}};
   if (n == 0) return 0;
   usAl(fibo, n - 1);
   return fibo[0][0];
}

int main() {
   int n;
   cout << "n : " ;
   cin >> n ;

   cout << fibonacci(n) ;
   return 0;
}