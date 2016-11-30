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
			sum=sum+i*i*i*i*i*i;
			
		}
		assert(sum == (6*X*X*X*X*X*X*X+21*X*X*X*X*X*X+21*X*X*X*X*X-7*X*X*X+X)/42);


}