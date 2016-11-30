void main()
{


		int J,A;
                int a;
                int b;
		J=0;
		A=0;
                assume(a>=0 && b>=0);
		while(J<b)
		{
			A=A+a;
			J=J+1;
		}
                assert(A==a*b);
}