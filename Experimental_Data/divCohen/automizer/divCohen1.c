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
		int A;
		int B;
                int X;
                int Y;

		q=0;
		r=X;	

		__VERIFIER_assume(X >= 0 && Y > 0);
		while(r >= Y)
		{
			A=1;
			B=Y;

			while(r >= 2*B)
				{
					A=2*A;
					B=2*B;
				}
		r=r-B;
		q=q+A;
			
		}
                __VERIFIER_assert(X==q*Y+r);
}