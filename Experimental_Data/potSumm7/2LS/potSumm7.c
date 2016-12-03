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
                int X;
		sum=0;
		i=0;
                __VERIFIER_assume(X>=0);
		while(i<X)
		{
			i=i+1;
			sum=sum+i*i*i*i*i*i*i;
			
		}
		
                __VERIFIER_assert(sum == (3*X*X*X*X*X*X*X*X+12*X*X*X*X*X*X*X+14*X*X*X*X*X*X-7*X*X*X*X+2*X*X)/24);

}