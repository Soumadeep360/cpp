#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
#define ld long double
#define mod 998244353
const int N=1e5+10;

vector<int> divisors[N];

int main() 
{
/*
Note:
    ex: If u want div of 8 as: 1,2,4,8 (1 and 8 included then start j=i)
        If u want div of 8 as: 1,2,4 (1 and 8 included then start j=2*i)
        If u want div of 8 as: 2,4,8 (1 and 8 included then start i=2 and j=i)
*/
    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j=j+i) 
        {
             divisors[j].push_back(i);  
        }
    }
  
    for(int i=1;i<10;i++){
        for(auto &it:divisors[i])cout<<it<<" ";
        cout<<endl;
    }
return 0;
}
