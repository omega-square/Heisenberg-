#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define f(a,b,c) for(ll a=b;a<c;a++)
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	                       // t1 contains original queries
	vector<pii> t1,fin;// fin contains final product
              // t1 reads here
	sort(t1.begin(),t1.end());
              // sort t1 wrt starting element
	ll _l, _r;// stores l and r to make a single query
	ll itr1=0;
	ll itr2=0;

	for(auto x:t1)
	{
		itr1++;
		itr2++;
		ll fir=x.first;// current query l
		ll sec=x.second;// current query r
		if(itr1==1) 
		{
			_r=sec;
			_l=fir;
		}
            // this was setup for _l _r 
		{
			if(fir<=_r) // if this is true means query needs update
			{
				if(sec<=_r)
				{
					// if this is true means query is completely inside no change
				}
				else
				{
					_r=sec;//else update _r for same _l
				}
				
			}
			else   // if query dont need update it means prepare for another set of _l _r and push previous result
			{
				fin.push_back(make_pair(_l,_r));
				_r=sec;
			    _l=fir;
			}
			if(itr2==t1.size()) 
				fin.push_back(make_pair(_l,_r));
			// this is the case when no queries are left so update has to be done by now
			
		}
		

	}
}

