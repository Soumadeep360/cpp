#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
#define ld long double
#define mod 998244353
const int N=1e7+10;
vector<bool>isPrime(N,1);
vector<int>lp(N,0),hp(N,0);  // highest prime and lowest prime..

void sol()
{
    int num;
    cin>>num;
    vector<int>prime_factors; // store all the prime factors of num..
    while(num>1){
        int prime_factor=hp[num];  // Using highest prime..
         while(num%prime_factor==0){
            num/=prime_factor;
            prime_factors.push_back(prime_factor);
         }
    }

}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++)                     // TC: O(log(log(N)))
    {
        if(isPrime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j=j+i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
       sol();
    }
return 0;
}
