void main()
{
		 int i,m,y,z;
                int X;
		i=1;
 		m=0;   
		y=1;   
		z=6;
        assume(X >= 0);
    	while( i<=X )
        {
               	i=i+1;
        	m=m+y;
        	y=y+z;
        	z=z+6;
        }
        assert(m == X*X*X);
}
