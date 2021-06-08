
#include<bits/stdc++.h>


using namespace std;
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define PB(x, v) x.push_back(v);
#define M_P(a, b) make_pair(a, b)
#define pll pair<ll, ll>
#define ll long long int
#define mll map<ll, ll>
#define vl vector<ll>
#define fa(x, v) for(auto x: v)
#define fr(i, a, b, step) for(auto i= a;i <=b; i+=step)
#define TEST  Int test; cin >> test; while(test--)
#define FTEST Int TesT; cin >> TesT; for(Int test = 1; test<=TesT; test++)
/**So..a**/
#define B_ begin()
#define E_ end()
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define NL_ "\n"
#define F first
#define S second
#define FF first.first
#define FS first.second
#define SF second.first
#define SS second.second
#include <iomanip>
#define __lcm(a, b) (a/__gcd(a, b)*b)
#define PI acos(-1)
#define EXP 10e-6
  
  bool compare(pair<ll,ll> p1, pair<ll,ll> p2){
  	  double v1= (double) p1.F/p1.S;
  	  double v2= (double) p2.F/p2.S;
  	  return v1>v2;
  }
  
  
signed main()
{
     FAST;
        
        ll n,m,i,j,sum=0,cnt=0,x,tmp=0;
           string s,ss,str,st;
         bool sign=1,ok=true,cheak=1;
         ll t,tc;
       ll a,b,c,k,d,w;
        ll ans=0;
          	ok=1;
         	sum=0;
      cin>>n;
      vector<pair<ll,ll>>v(n);
      for(i=0;i<n;i++)
      {
      	cin>>v[i].F>>v[i].S;
      	
	  }
	  
	  cin>>w;
	  
         sort(v.begin(),v.end(),compare);
         
         for(i=0;i<n;i++)
         {
         	cout<<v[i].F<<" "<<v[i].S<<endl;
		 }
         
         for(i=0;i<n;i++)
         {
         	if(w>=v[i].S)
         	{
         		ans+=v[i].F;
         		w-=v[i].S;
         		continue;
			 }
			 double vw=(double )v[i].F/v[i].S;
			 ans+=vw*w;
			 w=0;
			 break;
		 }
          cout<<ans<<endl;
         
        
        
    return 0;
}

/*

5
21 7 
24 4
12 6 
40 5 
30 6
20

*/



 
