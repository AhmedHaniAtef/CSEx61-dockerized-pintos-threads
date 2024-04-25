

typedef int fp;
 
#define q 14
#define f (1 << q) //f=2^14 = .....

// x and y are fixed-point numbers, n is an integer

fp Convert_to_fixed_point(int n);

int Convert_to_integer_toward_zero(fp x);

int Convert_to_integer_to_nearest(fp x);

fp Add_fixed_point_numbers(fp x ,fp y);

fp Subtract_fixed_point_numbers(fp x, fp y);

fp Add_fixed_point_and_int(fp x ,int n);

fp subtract_int_from_fixed_point(fp x ,int n);

fp Multiply_fixed_point_numbers(fp x ,fp y);

fp Multiply_fixed_point_by_int(fp x ,int n);

fp Divide_fixed_point_numbers(fp x ,fp y);

fp Divide_fixed_point_by_int(fp x ,int n);






