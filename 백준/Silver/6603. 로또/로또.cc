#include<iostream>

using namespace std;

const int MAX = 13;
int lotto[MAX];
int arr[MAX];
int k;
 
void dfs(int start, int depth) {
    
    if(depth == 6) {                  
        for(int i=0; i<6; i++) {
            cout << arr[i] << ' ';    
        }
        cout << '\n';
        return;
    }
                                        
    for(int i=start; i<k; i++) {    
        arr[depth] = lotto[i];        
        dfs(i+1, depth+1);            
    }
    
}
 
int main() {
 
    while(cin >> k && k) {            
        for(int i=0; i<k; i++) {
            cin >> lotto[i];
        }
        dfs(0,0);
        cout << '\n';
    }
}