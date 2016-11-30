void main()
{

	

	int a,su,t;
        int X;

    	a=0;
    	su=1;
    	t=1;

        assume(X>=0);
    	while ( su <= X )
        {
        a=a+1;
        t=t+2;
        su=su+t;
        }

     assert((a+1)*(a+1)>X);
	

}