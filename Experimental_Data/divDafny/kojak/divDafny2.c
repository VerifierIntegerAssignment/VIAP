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
			
		
	int r,q;
        int X;
        int Y;
	r = X;
    	q = 0;
        __VERIFIER_assume(X>=0 && Y>0);
        
    	while(r >= Y) {
      		r = r - Y;
      		q = q + 1;
    	}
	__VERIFIER_assert(r >= 0);
	
	
}