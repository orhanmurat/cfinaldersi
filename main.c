//#include <stdio.h> // example 1
//int main()
//{
//    int testInteger = 5;
//    printf("Number = %d", testInteger);
//    return 0;
//}

//#include <stdio.h> //example2 float ve double
//int main()
//{
//    float number1 = 13.5; //%f kullan formatlamak için
//    double number2 = 12.4; //%lf kullan formatlamak için
//
//    printf("number1 = %f\n", number1);
//    printf("number2 = %lf", number2);
//    return 0;
//}

//#include <stdio.h> // example4 karakter %c kullan
//int main()
//{
//    char chr = 'a';
//    printf("character = %c", chr);
//    return 0;
//}

//#include <stdio.h> // c input scanf () kullanımı
//int main()
//{
//    int testInteger;
//    printf("Enter an integer: ");
//    scanf("%d", &testInteger);
//    printf("Number = %d",testInteger);
//    return 0;
//}

//#include <stdio.h>     // example6 Float Double
//int main()
//{
//    float num1;
//    double num2;
//
//    printf("Enter a number: ");
//    scanf("%f", &num1);
//    printf("Enter another number: ");
//    scanf("%lf", &num2);
//
//
//    printf("num1 = %f\n", num1);
//    printf("num2 = %lf", num2);
//
//    return 0;
//}

//#include <stdio.h> // example 7  scanf printf karakter
//int main()
//{
//    char chr;
//    printf("Enter a character: ");
//    scanf("%c",&chr);
//    printf("You entered %c.", chr);
//    return 0;
//}

//#include <stdio.h> // ASCII value
//int main()
//{
//    char chr;
//    printf("Enter a character: ");
//    scanf("%c", &chr);
//
//    // When %c is used, a character is displayed
//    printf("You entered %c.\n",chr);
//
//    // When %d is used, ASCII value is displayed
//    printf("ASCII value is %d.", chr);
//    return 0;
//}
//END OF WEEK 4-5

// Week 6-7 Math

// Working of arithmetic operators

//#include <stdio.h> // exercise
//int main()
//{
//    int a = 9,b = 4, c;
//
//    c = a+b;
//    printf("a+b = %d \n",c);
//    c = a-b;
//    printf("a-b = %d \n",c);
//    c = a*b;
//    printf("a*b = %d \n",c);
//    c = a/b;
//    printf("a/b = %d \n",c);
//    c = a%b;
//    printf("Remainder when a divided by b = %d \n",c);
//
//    return 0;
//}

// Working of increment and decrement operators
//#include <stdio.h> // c increment decrement
//int main()
//{
//    int a = 10, b = 100;
//    float c = 10.5, d = 100.5;
//
//    printf("++a = %d \n", ++a);
//    printf("--b = %d \n", --b);
//    printf("++c = %f \n", ++c);
//    printf("--d = %f \n", --d);
//
//    return 0;
//}


//#include <stdio.h> // Exercise 2- Working of assignment operators
//int main()
//{
//    int a = 5, c;
//
//    c = a;      // c is 5
//    printf("c = %d\n", c);
//    c += a;     // c is 10
//    printf("c = %d\n", c);
//    c -= a;     // c is 5
//    printf("c = %d\n", c);
//    c *= a;     // c is 25
//    printf("c = %d\n", c);
//    c /= a;     // c is 5
//    printf("c = %d\n", c);
//    c %= a;     // c = 0
//    printf("c = %d\n", c);
//
//    return 0;
//}


//#include <stdio.h> exercise-3 // Working of relational operators
//int main()
//{
//    int a = 5, b = 5, c = 10;
//
//    printf("%d == %d is %d \n", a, b, a == b);
//    printf("%d == %d is %d \n", a, c, a == c);
//    printf("%d > %d is %d \n", a, b, a > b);
//    printf("%d > %d is %d \n", a, c, a > c);
//    printf("%d < %d is %d \n", a, b, a < b);
//    printf("%d < %d is %d \n", a, c, a < c);
//    printf("%d != %d is %d \n", a, b, a != b);
//    printf("%d != %d is %d \n", a, c, a != c);
//    printf("%d >= %d is %d \n", a, b, a >= b);
//    printf("%d >= %d is %d \n", a, c, a >= c);
//    printf("%d <= %d is %d \n", a, b, a <= b);
//    printf("%d <= %d is %d \n", a, c, a <= c);
//
//    return 0;
//}



//#include <stdio.h> exercise -4 // Working of logical operators
//int main()
//{
//    int a = 5, b = 5, c = 10, result;
//
//    result = (a == b) && (c > b);
//    printf("(a == b) && (c > b) is %d \n", result);
//
//    result = (a == b) && (c < b);
//    printf("(a == b) && (c < b) is %d \n", result);
//
//    result = (a == b) || (c < b);
//    printf("(a == b) || (c < b) is %d \n", result);
//
//    result = (a != b) || (c < b);
//    printf("(a != b) || (c < b) is %d \n", result);
//
//    result = !(a != b);
//    printf("!(a != b) is %d \n", result);
//
//    result = !(a == b);
//    printf("!(a == b) is %d \n", result);
//
//    return 0;
//}


//END OF WEEK 6-7 MATH

//WEEK 11 -12 POINTERS
//#include <stdio.h> // EXERCISE Example of Pointer demonstrating the use of & and *
//int main()
//{
//    /* Pointer of integer type, this can hold the
//     * address of a integer type variable.
//     */
//    int *p;
//
//    int var = 10;
//
//    /* Assigning the address of variable var to the pointer
//     * p. The p can hold the address of var because var is
//     * an integer type variable.
//     */
//    p= &var;
//
//    printf("Value of variable var is: %d", var);
//    printf("\nValue of variable var is: %d", *p);
//    printf("\nAddress of variable var is: %p", &var);
//    printf("\nAddress of variable var is: %p", p);
//    printf("\nAddress of pointer p is: %p", &p);
//    return 0;
//}

//#include <stdio.h> // C dilinde pointer kısa özet geç
//int main()
//{
//    int num = 10;
//    printf("Value of variable num is: %d\n\n"   , num);
//    /* To print the address of a variable we use %p
//     * format specifier and ampersand (&) sign just
//     * before the variable name like &num.
//     */
//printf("\nAddress of variable num is: %p", &num);
//    return 0;
//}

//#include <stdio.h> // C dilinde pointer kısa özet geç
//int main()
//{
//    int * pc, c;
//    c = 5;
//    pc= &c;
//    c=1;
//
//    printf("c degiskeni %d\n",c);
//    printf("pc pointeri %d",*pc);
//    return 0;
//}

//#include <stdio.h>  // pointer deklerasyonu alternatif
//int main() {
//    int *pc, c, d;
//    c = 5;
//    d = -15;
//    pc = &c;
//    printf("%d", *pc); // Output: 5 pc = &d; printf("%d", *pc); // Ouptut: -15
//}
//#include <stdio.h>  // pointer deklerasyonu
//int main()
//{
//    //Variable declaration
//    int num = 10;
//
//    //Pointer declaration
//    int *p;
//
//    //Assigning address of num to the pointer p
//    p = num ;
//
//    printf("Address of variable num is: %p", p);
//    return 0;
//}

// excersize 5

//#include <stdio.h>
//int main()
//{ int* pc, c; c = 22;
//    printf("Address of c: %p\n", &c);
//    printf("Value of c: %d\n\n", c); // 22
//    pc = &c;
//    printf("Address of pointer pc: %p\n", pc);
//    printf("Content of pointer pc: %d\n\n", *pc); // 22
//    c = 11;
//    printf("Address of pointer pc: %p\n", pc);
//    printf("Content of pointer pc: %d\n\n", *pc); // 11
//    *pc = 2;
//    printf("Address of c: %p\n", &c);
//    printf("Value of c: %d\n\n", c); // 2
//    return 0; }

// END OF WEEK 11-12 POINTERS

//WEEK 6-7 MATH AND CONDITIONS

//#include <stdio.h> // İF STATEMENT İÇİN ÖRNEK1
//int main()
//{
//    int x = 20;
//    int y = 22;
//    if (x<y)
//    {
//        printf("Variable x is less than y");
//    }
//    return 0;
//}

//#include <stdio.h> // İF STATEMENT İÇİN 2. ÖRNEK
//int main()
//{
//    int x, y;
//    printf("enter the value of x:");
//    scanf("%d", &x);
//    printf("enter the value of y:");
//    scanf("%d", &y);
//    if (x>y)
//    {
//        printf("x is greater than y\n");
//    }
//    if (x<y)
//    {
//        printf("x is less than y\n");
//    }
//    if (x==y)
//    {
//        printf("x is equal to y\n");
//    }
//    printf("End of Program");
//    return 0;
//}

// END OF WEEK  6-7 MATH

// WEEK 8-9 cONTROL STATEMENTS IF ELSEIF SWITCH GOTO LOOP
//IF STATEMENT
// EXAMPLE
//#include <stdio.h>
//void main () {
//    int varNumValue = 1;
//    if( varNumValue < 10 ) { // checks the condition
//        printf("if statement instructions");  // sets of instructions which needs to be executed
//    }
//}
// EXAMPLE 2
//#include <stdio.h>
//void main () {
//    char favoritePlaceToVisit[] = "New York";
//    if (favoritePlaceToVisit ==  "New York") { // checks the condition
//        printf(" Your favorite place to visit is New York ");  // sets of instructions which needs to be executed for if block
//    } else {
//        printf("Your favorite place is different city");  // sets of instructions which needs to be executed for else block
//    }
//}
// EXAMPLE 3
//
//#include <stdio.h>
//void main () {
//    char favoriteFruit[] = "Apple";
//    if (favoriteFruit ==  "Kiwi") { // checks the condition
//        printf("You like to eat Apple");  // sets of instructions which needs to be executed for if block
//    } else {
//        printf("You don't like to eat Apple");  // sets of instructions which needs to be executed for else block
//    }
//}
// EXAMPLE -4
//
//#include <stdio.h>
//void main () {
//    int enterNumberOfCarsYouHave = 1;
//    if( enterNumberOfCarsYouHave == 1 ) { // checks the condition
//        printf("You have one car");  // sets of instructions which needs to be executed for if block
//    }
//    else if( enterNumberOfCarsYouHave == 2 ) { // checks the condition
//        printf("You have two cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 3 ) { // checks the condition
//        printf("You have three cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 4 ) { // checks the condition
//        printf("You have four cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 5 ) { // checks the condition
//        printf("You have five cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 6 ) { // checks the condition
//        printf("You have six cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 7 ) { // checks the condition
//        printf("You have seven cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 8 ) { // checks the condition
//        printf("You have eight cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else if( enterNumberOfCarsYouHave == 9 ) { // checks the condition
//        printf("You have nine cars");  // sets of instructions which needs to be executed for if else block
//    }
//    else {
//        printf("You have more than 10 cars");  // sets of instructions which needs to be executed for else block
//    }
//}


// SWITCH
// EXAMPLE 1
//#include <stdio.h>
//int main() {
//    int range_of_number=50;
//    switch (range_of_number) {
//        case 10:
//        case 20:
//        case 30:
//            printf("The number is 10 or 20 or 30 ");
//            break;
//        case 50:
//        case 55:printf("This case also executes because there is no break ");
//            printf("\n");
//        case 60:
//            printf("The number is either 40 or 50 or 60");
//            break;
//        default:
//            printf("The number is greater than 60");}}

// EXAMPLE 2
//#include <stdio.h>
//int main()
//{
//    int x = 10, y = 5;
//    switch(x==y && x+y<10)
//    {
//        case 1:
//            printf("hi");
//            break;
//        case 0:
//            printf("bye");
//            break;
//        default:
//            printf(" Hello bye ");
//    }  }
//EXAMPLE 3
//#include <stdio.h>
//int main() {
//    int ID = 300;
//    int password = 1000;
//    printf("Enter Your ID:\n ");
//    scanf("%d", & ID);
//    switch (ID) {
//        case 300:
//            printf("Enter your password:\n ");
//            scanf("%d", & password);
//            switch (password) {
//                case 1000:
//                    printf("Welcome to the portal\n");
//                    break;
//                default:
//                    printf("Enter correct password");
//                    break;
//            }
//            break;
//        default:
//            printf("Enter correct ID");
//            break;
//    }
//}

// cONDITIONAL OPERATOR STATEMENT

//#include <stdio.h>
//int main()
//{
//    int marks_obtained ;
//    printf ( " Please enter the obtained marks : " ) ;
//    scanf ( " %d " , &marks_obtained ) ;
//    if ( marks_obtained >= 36 )
//        printf ( " \n Congratulations!! You Passed " ) ;
//    else
//        printf ( " \n You Failed " ) ;
//    return 0 ;
//}

// GOTO STATEMENT

//#include<stdio.h>
//void numberPrint()
//{
//    int a = 1;
//    label:
//    printf("%d \n", a);
//    a=a+1;
//    if (a <= 5)
//        goto label;
//}
//int main()
//{
//    numberPrint();
//    return 0;
//}
// LOOP STATEMENT

// WHILE LOOP

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int num=1;
//    while(num<=5)
//    {
//        printf("%d\n",num);
//        num++;
//    }
//    return 0;
//}

//DO WHILE LOOP

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int num=1;
//    do
//    {
//        printf ("%d\n",2*num);
//        num++;
//    }
//    while(num<=5);
//    return 0;
//}

// FOR LOOP

//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i=1; i<=3; i++)
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}

//EXAMPLE 2
//
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//    int number;
//    for(number=1;number<=5;number++)
//    {
//        printf("%d\n",number);
//    }
//    return 0;
//}
// yarışma oyun
// Soru:Girilen bir sayının tekmi çiftmi olduğunu bulunuz (hint: % mod işareti)



















//#include <stdio.h>
//int main() {
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//
//    // true if num is perfectly divisible by 2
//    if(num % 2 == 0)
//        printf("%d is even.", num);
//    else
//        printf("%d is odd.", num);
//
//    return 0;
//}

//Yarışma oyun 2- ünlü ünsüz kontrolü   !!!!
//


















//#include <stdio.h>
//int main() {
//    char c;
//    int lowercase_vowel, uppercase_vowel;
//    printf("Enter an alphabet: ");
//    scanf("%c", &c);
//
//    // evaluates to 1 if variable c is a lowercase vowel
//    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//
//    // evaluates to 1 if variable c is a uppercase vowel
//    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//
//    // evaluates to 1 (true) if c is a vowel
//    if (lowercase_vowel || uppercase_vowel)
//        printf("%c is a vowel.", c);
//    else
//        printf("%c is a consonant.", c);
//    return 0;
//}
// END OF WEEK 8-9

// WEEK 14 STRINGS

//EX-1
//#include <stdio.h>
//int main()
//{ char name[20];
//    printf("Enter name: ");
//    scanf("%s", name);
//    printf("Your name is %s.", name);
//    return 0;
//}

//WEEK 10- FUNCTIONS SUBFUNCTIONS

//#include <stdio.h>
//int sum(int n);
//
//int main() {
//    int number, result;
//
//    printf("Enter a positive integer: ");
//    scanf("%d", &number);
//
//    result = sum(number);
//
//    printf("sum = %d", result);
//    return 0;
//}
//
//int sum(int n) {
//    if (n != 0)
//        // sum() function calls itself
//        return n + sum(n-1);
//    else
//        return n;
//}
//
//#include <stdio.h>
//
///* function declaration */
//int max(int num1, int num2);
//
//int main () {
//
//    /* local variable definition */
//    int a = 100;
//    int b = 200;
//    int ret;
//
//    /* calling a function to get max value */
//    ret = max(a, b);
//
//    printf( "Max value is : %d\n", ret );
//
//    return 0;
//}
//
///* function returning the max between two numbers */
//int max(int num1, int num2) {
//
//    /* local variable declaration */
//    int result;
//
//    if (num1 > num2)
//        result = num1;
//    else
//        result = num2;
//
//    return result;
//}
//
//#include <stdio.h>
//
//void checkPrimeNumber();
//
//int main() {
//    checkPrimeNumber();    // argument is not passed
//    return 0;
//}
//
//// return type is void meaning doesn't return any value
//void checkPrimeNumber() {
//    int n, i, flag = 0;
//
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//
//    // 0 and 1 are not prime numbers
//    if (n == 0 || n == 1)
//        flag = 1;
//
//    for(i = 2; i <= n/2; ++i) {
//        if(n%i == 0) {
//            flag = 1;
//            break;
//        }
//    }
//
//    if (flag == 1)
//        printf("%d is not a prime number.", n);
//    else
//        printf("%d is a prime number.", n);
//}
//branche kayıt ettik
