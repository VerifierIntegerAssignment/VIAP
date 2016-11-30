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
			sum=sum+i*i*i*i*i*i*i*i;
			
		}
		
                __VERIFIER_assert(sum == (10*X*X*X*X*X*X*X*X*X+45*X*X*X*X*X*X*X*X+60*X*X*X*X*X*X*X+-42*X*X*X*X*X+20*X*X*X-3*X)/90);

}