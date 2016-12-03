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


		int J,A;
                int a;
                int b;
		J=0;
		A=0;
                __VERIFIER_assume(a>=0 && b>=0);
		while(J<b)
		{
			A=A+a;
			J=J+1;
		}
                __VERIFIER_assert(A==a*b);
}