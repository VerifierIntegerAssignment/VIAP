import leon.lang._

object subDafny {

 def subDafny(x : BigInt, y : BigInt): BigInt = ({
 require(x >= 0 && y>=0)
     var r = x
     if(y < 0) {
       var n = y
       while(n != 0) {
         r = r + 1
         n = n + 1
       } 
     } else {
       var n = y
       while(n != 0) {
         r = r - 1
         n = n - 1
       }
     }
     r
  }) ensuring(res => res == x-y)

}
