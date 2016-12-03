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

	

		int sum,i;
		sum=0;
		i=0;
                int X;
                __VERIFIER_assume(X>=0);
		while(i<X)
		{

			sum=sum+2*i+1;
			i=i+1;

		}
	       __VERIFIER_assert(sum == X*X);
	

}