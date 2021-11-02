#include <stdio.h>
// Operator is a symbol used to performe operations.
// Ex 3 + 4 where + is operator.


// THERE IS:

//  Arithmatic operators:
// + addition
// - substraction
// * multiplication
// / Division
// % Modulus

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("a + b is %d\n", a + b);
    printf("a + b is %d\n", a + b);
    printf("a - b is %d\n", a - b);
    printf("a * b is %d\n", a * b);
    printf("a / b is %d\n", a / b);
    
    return 0;
}





//  Relational operators
// == is equal to
// != is not equal to
// > Greater than
// < Less than
// >= Greater than or equal to
// <= Less than or equal to

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("a + b is %d\n", a == b);
    printf("a + b is %d\n", a != b);
    printf("a - b is %d\n", a >= b);
    printf("a * b is %d\n", a <= b);
    printf("a / b is %d\n", a > b);
    
    return 0;
}





//Logical operators:
//  Logical AND operator: && when both conditions are satisfied. EX: (A && B) is false 

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("a + b is %d\n", a && b);
        
    return 0;
}

//  Logical OR operator: || if any codition is true then it is true. EX: (A || B) is True
//  Logical Not operator: ! for reverse the logical state of its operands. if condition is true it wil make is false. EX: !(A && B) is true









//Bitwise operators:
a b  a&b a|b a^b(^ = one true and one false needed)
0 0 = 0   0   0
0 1 = 0   1   1
1 1 = 1   1   0
1 0 = 0   1   1
//  these work on bits 
//  this will convert first in bianary then answer it.
//  for a&b = if a = 2, b = 3 binary of a, b = 10, 11 (here o + 1 = wrong(0) (becasue one is false) and 1 + 1 = true(1)) the answer is 10 which is 2 in bianary

int main()
{
    int a, b;
    a = 2;
    b = 3;

    printf("a + b = %d\n", a&b)
}
//  There are more bitwise operators like ~(binary one's complement operator) <<(bianary left shift operator) >>(binary right shift operator) 






//  Assignment operators
=   (simple assignment operator)        assign value with variable
+=  (add AND assignment operator)       it will add and assign +=(any value) into variable (EX: a+=1). 
_=  (Subtract AND assignment operator)  it will remove and assign _=(any value) into variable (EX: a_=1)
*=  (Multiply AND assignment operator)  it will multiplies and assign *=(any value) into variable (EX: a*=2)
/=  (Divide AND assignment operator)    it will divide and assign /=(any value) into variable (EX: a/=10)




// MICELLANEOUS OPERATOR.
Operator    Description                         Example
sizeof()    Return the size of a variable       sizeof(a)
&           Return the address of a variable    &a
*           pointer to a variable               *a;
?:          Conditional Expression              if condition is true ? then value x:
                                                    otherwise value y


for math 1+2*3 
rule = BODMAS (bracket, off divide, multiplie, addition, substract)