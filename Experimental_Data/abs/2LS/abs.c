int main()
{
	int a;
        int X;
        assume(X > -2147483647 && X<2147483647);	
	if(X<=0)
	{
		a=-X;
	}
	else
	{
		a=X;
	}
        assert(a>=0);
}
