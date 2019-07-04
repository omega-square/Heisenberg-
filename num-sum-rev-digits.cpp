ll son (ll a) // sum of numbers
{
	ll rem,r=0;
	while(a>0)
	{
		rem=a%10;
		r+=rem;
		a/=10;
	}
	return r;
}
ll don (ll a) // digits of numbers
{
	ll r=0;
	while(a>0)
	{
		r++;
		a/=10;
	}
	return r;
}
ll ron (ll a) // reverse of numbers
{
	ll rem,r=0;
	while(a>0)
	{
		rem=a%10;
		r=r*10+rem;
		a/=10;
	}
	return r;
}
