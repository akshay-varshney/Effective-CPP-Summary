// USE Const
// Const keyword is very versatile. It restricts that value should remain invariant for both complier and programmer.

// Several ways of declaring a const with pointers:
char *ptr="Value"; // non-const pointer and non-const data.

const char *ptr1="Value"; // non-const pointer and const data.

char *const ptr2="Valu"; //const pointer and non-const data.

const char *const ptr3="val"; //Const pointer and Const data.


/********************/
// There are two ways by which we can use const and both are correct

void fun(const char *ptr);
void fun1(char const *ptr);




