#include <iostream>

using namespace std;

int main()
{
   long long n, m;
   long long res = 1;
    
   cin >> n >> m;
    
   if(n>=m){
       cout << 0;
       return 0;
   }
   
   for(int i = 1; i <= n; i++){
       res = ((res * (i % m)))% m;
   }
   cout << res;
   return 0;
}