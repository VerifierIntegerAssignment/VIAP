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
			sum=sum+i*i*i*i*i*i*i*i*i;
			
		}
		assert(sum == (2*X*X*X*X*X*X*X*X*X*X+10*X*X*X*X*X*X*X*X*X+15*X*X*X*X*X*X*X*X-14*X*X*X*X*X*X+10*X*X*X*X-3*X*X)/20);


}