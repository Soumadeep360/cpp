// when a and b is too large and m is also large (a*b)%m will give overflow. Hence binMult will work at that time..
// a*b in log(a) times
int binExp(long long int a,long long int b,long long int m){
        int ans=0;
        while(b){
            if(b&1)ans=(ans+a)%m;
            a=(a+a)%m;
            b=b>>1;
        }
        return ans;
    }
