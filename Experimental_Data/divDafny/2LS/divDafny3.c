void main()
{
			
		
	int r,q;
        int X;
        int Y;
	r = X;
    	q = 0;
        assume(X>=0 && Y>0);
        
    	while(r >= Y) {
      		r = r - Y;
      		q = q + 1;
    	}
	assert(r < Y);
	
	
}
