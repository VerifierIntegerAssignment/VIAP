void main()
{
 	int X;
        int Y;
        int r;
	int l;
	r = X;
    assume(X >= 0 && Y>=0);
    if(Y < 0) 
    {
       l = Y;
       while(l != 0) 
      {
        	r = r - 1;
        	l = l + 1;
      }
    } 
   else 
    {
      l = Y;
      while(l != 0) {
        r = r + 1;
        l = l - 1;
      }
    }
    assert(r == X+Y);
}
