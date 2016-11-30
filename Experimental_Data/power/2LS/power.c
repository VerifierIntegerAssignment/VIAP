void main()
{



		int J,P;
                int a;
                int b;
		J=0;
		P=1;
                assume(a>=0 && b>=0);
		while(J<b)
		{
			P=P*a;
			J=J+1;
		}
	

	assert(P == power(a,b));
	

}


int power(int a,int b)
{
    assume(a>=0 && b>=0);
    if (a == 0 && b>0)
    { return 0;
    }
    else
    {
        if (b == 0)
        {
            return 1;
        }
        else
        {
            return power(a,b-1)*a;
        }
    }
}