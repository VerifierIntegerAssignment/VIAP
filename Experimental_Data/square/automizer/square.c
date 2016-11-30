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

	
		int s,i;
                int M;
		s=0;
		
		i=0;
    __VERIFIER_assume(M>=0);
		while(i<M)
		{
			s=s+M;
			i=i+1;
			
		}

                __VERIFIER_assert(s == M*M);

}
