  int binExp(int a,int b,int m){
        int ans=1;
        while(b){
            if(b&1)ans=(ans*1LL*a)%m;
            a=(a*1LL*a)%m;
            b=b>>1;
        }
        return ans;
    }
