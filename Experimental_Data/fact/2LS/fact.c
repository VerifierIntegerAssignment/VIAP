
void main()
{
		int i;
		int F;
		int X;
		
		i=1;
		F=1;
		assume(X>=0);
		
		while(i <= X)
		{
			F=F*i;
			i=i+1;
		}
                assert(F==factorial(X));
}


int factorial(int n) 
{
        assume(n>=0);
        if (n == 0){
            return 1;
            }
       else {
           return factorial(n-1)*n;
           }
}