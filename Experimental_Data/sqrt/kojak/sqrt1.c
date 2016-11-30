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

	

	int a,su,t;
        int X;

    	a=0;
    	su=1;
    	t=1;

        __VERIFIER_assume(X>=0);
    	while ( su <= X )
        {
        a=a+1;
        t=t+2;
        su=su+t;
        }

     __VERIFIER_assert((a+1)*(a+1)>X);
	

}
