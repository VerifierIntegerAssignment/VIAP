
public class subDafny{

	
	public void subDafny(int X,int Y) {
	  
        int r;
	int l;
	r = X;
    if(Y < 0) 
    {
       l = Y;
       while(l != 0) 
      {
        	r = r + 1;
        	l = l + 1;
      }
    } 
   else 
    {
      l = Y;
      while(l != 0) {
        r = r - 1;
        l = l - 1;
      }
    }	
	
 }
}
