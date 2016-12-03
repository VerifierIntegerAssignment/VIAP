extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
      ERROR: __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();
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
        __VERIFIER_assume(A>=0 && B>0);
    
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
	
	__VERIFIER_assert(r < B);
	
}