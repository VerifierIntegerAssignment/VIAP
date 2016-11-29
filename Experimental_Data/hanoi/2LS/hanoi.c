void main()
{


int i,h; 
int x;
i=1;
h=1;

  assume(x>=0);
  while (i < x) {
    h=2*h+1;
    i=i+1;     
  }
	
asset(h==power(2,x)-1);
	
	

}


int power(int a,int b)
{
    assume(a>=0 && b>=0);
    if (a == 0 && b>0)
    { return 0;
    }
    else
    {
        if (b == 0)
        {
            return 1;
        }
        else
        {
            return power(a,b-1)*a;
        }
    }
}