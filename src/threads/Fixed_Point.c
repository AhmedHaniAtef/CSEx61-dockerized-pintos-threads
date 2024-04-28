
#include "threads/Fixed_Point.h"

#define q 14
#define f (1 << q) //f=2^14

fp Convert_to_fixed_point(int n){
    
    return (n * f);
}

int Convert_to_integer_toward_zero(fp x){
     return(x / f);
}

int Convert_to_integer_to_nearest(fp x){
    
        if(x >= 0){
            return ((x + f / 2) / f);
        }
       else{

        return ((x - f / 2) / f);
       } 
}

fp Add_fixed_point_numbers(fp x ,fp y){
   
    return(x + y);

}

fp Subtract_fixed_point_numbers(fp x, fp y){
   
    return(x - y);

}

fp Add_fixed_point_and_int(fp x ,int n){
    return( x + n * f);
}

fp subtract_int_from_fixed_point(fp x ,int n){
     return(x - n * f);
}

fp Multiply_fixed_point_numbers(fp x ,fp y){
      return ((long int)(x) * y / f); //////((int64_t) x) * y / f
}

fp Multiply_fixed_point_by_int(fp x ,int n){
      return(x * n);
}

fp Divide_fixed_point_numbers(fp x ,fp y){
       	return ((long int) (x) * f / y);///////////////(int64_t) x) * f / y
}

fp Divide_fixed_point_by_int(fp x ,int n){
    return(x / n);

}