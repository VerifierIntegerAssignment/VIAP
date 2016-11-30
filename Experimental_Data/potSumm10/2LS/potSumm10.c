void main()
{

		
		int sum,i;
                int X;
		sum=0;
		i=0;
                assume(X>=0);
		while(i<X)
		{
			i=i+1;
			sum=sum+i*i*i*i*i*i*i*i*i*i;
			
		}
		assert(sum == (6*X*X*X*X*X*X*X*X*X*X*X+33*X*X*X*X*X*X*X*X*X*X+55*X*X*X*X*X*X*X*X*X-66*X*X*X*X*X*X*X+66*X*X*X*X*X-33*X*X*X+5*X)/66);


}