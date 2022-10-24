#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int d[20][20];
bool v[20][20];
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> a;
    for(int  i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>d[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        a.push_back(i);
    }
    int mi=2147483647;
    int sum=0;
    bool find=true;
    
    do {
        sum=0;
        find=true;
        for(int i=0;i<a.size()-1;i++)
        {
            if(d[a[i]][a[i+1]]==0) 
            {
                find =false;
            }
            sum+=d[a[i]][a[i+1]];
        }
        if(find&&d[a[a.size()-1]][a[0]]!=0)
        {
            sum+=d[a[a.size()-1]][a[0]];
                
            mi=min(sum,mi);
        }
    
    }while(next_permutation(a.begin(),a.end()));
    
cout<<mi<<endl;
return 0;
 
}
