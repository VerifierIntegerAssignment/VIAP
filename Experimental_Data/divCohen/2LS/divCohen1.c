void main()
{
		 int q;
		int r;
		int A;
		int B;
                int X;
                int Y;

		q=0;
		r=X;	

		assume(X >= 0 && Y > 0);
		while(r >= Y)
		{
			A=1;
			B=Y;

			while(r >= 2*B)
				{
					A=2*A;
					B=2*B;
				}
		r=r-B;
		q=q+A;
			
		}
                assert(X==q*Y+r);
}
