void main()
{
			
		
	    int q;
	    int r;
	    int b;    
	    int A;
            int B;

	    q=0;
	    r=A;
	    b=B;
        assume(A>=0 && B>0);
    
   	 while(r>=b)
       	 {
       		 b=2*b;
         }

    
    	while(b!=B)
        {
        q=2*q;
        b=b/2;

        if (r>=b) 
            {
            q=q+1;
            r=r-b;
            }

        }
	
	assert(r >= 0);
	
}
