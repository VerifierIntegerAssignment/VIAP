void main()
{




    int r,ds,p,q;
    int X;
    int Y;

    r=X;
    ds=Y;
    p=1;
    q=0;
    assume(X>=0 && Y>0);
    while ( r>= ds )
        {
        ds=2*ds;
        p=2*p;
        }

     while ( p!=1 )
         {
         ds=ds/2;
         p=p/2;

         if ( r>=ds ) 
             {
             r=r-ds;
             q=q+p;
             }
         }
	

   assert(r < Y);
	

	
	

}
