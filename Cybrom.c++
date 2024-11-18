// comment
/* multi line comment
DEFINE:To enhance readibility of code,programmer use the comment,
basically whenever comment is encounter while compilation complier simpl ignore the content written afterwards
*/
/*1)header file add*
#include<iostream>
# pre processor directive
include directory/folder(path)
<header-file>standard library content
"header-file"user defined content
<iostream>madatory*/

#include<iostream>
using namespace std;
    // namespace:it is a scope where we defind our cpp component (identifier),
    // application:to avoid conflicts.

int main()
{
    // global space:before and after main()
    //here we define global variables,global function  classes,structure ,etc.
    // main():our programme execution begins from main
    // to create a block in C++ we used {}.
    // in main we write n numbers statements terminated by cemicolon.
    // parameter:in any programming language we may pass some input to function in the form of parameters,this is a optional part.
    // return 0;
    // our main() return 0,if  there is no runtime error while execution of code,
    // retrun 0 is a special message for operating system (success message).
    // cout=council output
    // cout+output and cin=input
    // objects,cout---> ostream class cin--->istream class 
    // cout<<"welcome students" <<insertion operator 
    // cin>>"DATA" >> extraction operator 
    // "DATA" string  
    // cout<<"welcome students"; // statement
    // cout<<'c';// character 
    // cout<<"world"<<endl;
    // Variables; In programming to process data, we have to store them and variables are the storage area in memory where our data recistes we can change this data with time that why it is called variables.
    // datatype; it is a representation of different type of data.
    // primitive:int(4 byte)(integer number,without fraction),float(4 byte )(real number )(6-7 digit),double(8 byte)(real number)(14-15 digit precision),char(8 byte)(real number)'a','b','c',boolean(1 byte)(true 1/false 0) C++ =non-zero=true 0=false,void(1 byte)(nothing(function)) non-primitive derived:pointer,array,function,reference/user-defined:class,structure,union,enumerator
    // 
    // int number1 = 1000.1000; // decleration of variable 
    // int number2 = 1000.1000;
    // int number3 = 1000.1000;
    // cout<<number1+number2+number3;

    // float number1 = 1000.1000; // decleration of variable 
    // float number2 = 1000.1000;
    // float number3 = 1000.1000;
    // cout<<number1+number2+number3;

    // double number1 = 1000.1000; // decleration of variable 
    // double number2 = 1000.1000;
    // double number3 = 1000.1000;
    // cout<<number1+number2+number3;
   
    // int number;
    // string name;
    // cout<<"Enter a number:";
    // cin>>number;
    // cout<<number;
    // cout<<endl;
    // cout<<"Enter a name:";
    // cin>>name;
    // cout<<name;

    // cascading of insertion operators

    // int number1,number2; 
    // cout<<"Enter number 1 and Enter number 2: ";
    // cin>>number1>>number2;
    // cout<<"Multiplication of "<<number1<<"and "<<number2<<" is "<<number1*number2;
    
    // Tokens;the smallest unit of code which has some meaning for compiler is called token.
    // int number1,number2; 5 tokens 
    // 1.Keywords(Reserved words)(break,if,else,int etc.)(Total 97 keywords) 2.Identifier(to identifier yhe component programme unickly we use identifier)(5 naming rules: 1.First character alphabet+underscore. 2.Rest of character alphabet+underscore+digits(0-9). 3.no void space is allowed in between. 4.no keywords is allowed to use as a identifier.5.the name of iden should according to the contest of programme) 3.Literal(literals are the data(object) part of our programme, int num =90; // 90 integeral literal , string name="rahul" // string literal , cout<<3.1415*rad*rad; , numeric literal(int,char,float,double),string literal more than or equals to 1 character. 'A"=65 or 'a'=97 ASCII(American standard ) value '0'=48)  4.Constants (pie=3.1415) 5.Delimiter(special symbol:limit set,interface (boundary) set, eg,{},[],<>) 6.Special-symbol(operation perform; 56+90 56,90 --->operands , +operators cout<<"welcome"; cout,"welcome" -->operands , << operators classified as uninary(increment(+1) prefix(++a),postfix(a++)/decrement(-1)) op,binary op,ternary op) 
    
    // const double pi=3.1415;
    // cout<<pi;


//     #include <iostream>
//     using namespace std;

//     int main() {
//     int x = 10, y = 7, z = 3;

//     int result = ++x + --y + z;
    
//     cout << "x = " << x << ", y = " << y << ", z = " << z << ", result = " << result << endl;
//     return 0;
// }
// ----------------------------------------------------------------------------
//     #include <iostream>
//     using namespace std;

//     int main() {
//     int a = 5, b = 8;

//     int result1 = ++a + b;
//     b--;
//     int result2 = a + ++b;

//     cout << "a = " << a << ", b = " << b << endl;
//     cout << "result1 = " << result1 << ", result2 = " << result2 << endl;
//     return 0;
// }
// -----------------------------------
//     #include <iostream>
//     using namespace std;

//     int main() {
//     int p = 9, q = 6, r = 2;

//     p--;
//     int result = p + --q + r;
//     r++;
//     p++;
    
//     cout << "p = " << p << ", q = " << q << ", r = " << r << ", result = " << result << endl;
//     return 0;
// }
// ---------------------------------------------------------

//     #include <iostream>
//     using namespace std;

//     int main() {
//     int x = 12, y = 4;

//     int result1 = ++x - y;
//     y--;
//     int result2 = x + ++y;

//     cout << "x = " << x << ", y = " << y << endl;
//     cout << "result1 = " << result1 << ", result2 = " << result2 << endl;
//     return 0;
// }

    // input size vary (in any range)
    // output size fixed (denominator ) cyclic
    // comparision operators!
    // > ,<,>=,<=,==,!=
     
    
    
    // int number1,number2,number3;
    // cout<<"Enter 3 num:";
    // cin>>number1>>number2>>number3;

    // cout<<number1<<" is bigger then"<<number2<<"-->"<<(number1>number2)<<endl;
    // cout<<number2<<" is smaller then"<<number3<<"-->"<<(number1<number2)<<endl;
    // cout<<(90==90);
    // cout<<(90!=90);

    // single equal assignment operator
    // double equal equity operator

    // logical operator 
    // and(binary)(&&),or(binary)(||),not(unary)()

    // Bitwise operator:
    // To implement low level language with the help of cpp we have to use bitwise operator.
    //  It is more faster then any other operator
    // Data incription/description

    // Binary(0,1),Decimal(0-9),Hexa-decimal(0-9,A,B,C,D,E,F),Octal(0-7)
    
    // Conversion of binary to decimal and decimal to binary:
    // 1 byte-8 bit

    // bitwise and ----> & (ampersand)
    // bitwise or  ----> |(pipeline)(Vertical bar)
    // bitwise not ----> ~(tilde)(unary)
    // bitwise xor(exclusiveor) ----> ^(cap,carrot)
    // bitwise leftshift ----> <<
    // bitwise rightshift ----> >>
    
    // syntax: A ? B : C;  (?:) Ternary operator  
    // A ---> Boolean expression
    // True ---> Part B execute 
    // False ---> C execute 

    // Write a program to findout the minimum number between two number 
    
    // int n1,n2;
    // cout<<"Enter two numbers:";
    // cin>>n1>>n2;
    // n1>n2 ? cout<<n2<<"Is smaller": cout<<n1<<"Is smaller";
     
    // int n1,n2,n3;
    // cout<<"Enter three numbers:";
    // cin>>n1>>n2>>n3;
    // n1<n2 && n1<n3 ? cout<<n1<<"is smaller":
    // n2<n1 && n2<n3 ? cout<<n2<<"is smaller":cout<<n3<<"is smaller";
    
    // Write a program to determine wheather a number is even and odd number ?
    
    // int num;
    // cout<<"enter number:";
    // cin>>num;
    // num%2 == 0? cout<<"even" : cout<<"odd";

    // int num;
    // cout<<"enter number:";
    // cin>>num;
    // num%5 == 0? cout<<"Multiple of 5" : cout<<"Not Multiple of 5";

    // Write a prog to swapp with each other ?
    // int num1,num2;
    // cout<<"Enter two numbers:";
    // cin>>num1>>num2;
    // cout<<"before swapping num1:"<<num1<<"num2:"<<num2<<endl;
    // int temp=num1;
    // num1=num2;
    // num2=temp;
    // cout<<"after swapping num1:"<<num1<<"num2:"<<num2<<endl;
   
    // if-else(Single condition),
    // if-else(ladder)(Multiple condition),
    // if-else(Nesting)(Poly-Multiple condition),

    // Write a program to determine wheather a person is eligible to castecode or not on the basis of age and nationality ?

    // int age;
    // string nation,name;
    // cout<<"Enter your name:";
    // cin>>name;
    // cout<<"Enter your age:";
    // cin>>age;
    // cout<<"Type your nationality 'indian' or 'other':";
    // cin>>nation;
    // if(age>=18 && nation == "indian"){
    //     cout<<name<<",u r eligible to cast vote:";

    // }
    // else{
    //     cout<<name<<",u r not eligible to cast vote:";
    // }

    
    

    // double salary,bonus;
    // string name;
    // int year;
    // cout<<"enter your name:";
    // cin>>name;
    // cout<<"Enter year of service and salary:";
    // cin>>year>>salary;
    // if(year>5){
    //     bonus=salary=(5.0/100);
    // }
    // else{
    //     bonus=0;
    // }
    // cout<<"u got:"<<bonus<<"bonus"<<endl;
    // cout<<"Total Salary:"<<salary*bonus<<endl;
  

    // int held,attend;
    // double per;
    // cout<<"Total class held:";
    // cin>>held;
    // cout<<"Total class attend:";
    // cin>>attend;
    // per =((double)attend/held)*100;
    // if(per>=75){
    //     cout<<"eligible";

    // }
    // else{
    //     cout<<"Not eligible";
    // }




    // int s1,s2,s3,s4,s5;
    // cout<<"Enter marks:";
    // cin>>s1>>s2>>s3>>s4>>s5;
    // double per=(s1+s2+s3+s4+s5)/5.0;
    // if(per<25)
    // {
    //     cout<<"F";
    // }
    // else if(per>=25 && per<45) {
    //     cout<<"E";

    // }
    // else if(per>=45 && per<50) {
    //     cout<<"D";

    // }
    // else if(per>=50 && per<65) {
    //     cout<<"C";

    // }
    // else if(per>=65 && per<75) {
    //     cout<<"B";

    // }
    // else if(per>=75 && per<100) {
    //     cout<<"A";

    // }


    // int amount;
    // cout<<"Enter amount:";
    // cin>>amount;
    // if(amount<=100){
    //     cout<<" No discount\n";
    //     cout<<" u have to pay:"<<amount<<endl;


    // }
    // else if(amount>100 && amount<=500) {
    //     cout<<"u r eligible for 10% discount\n";
    //     cout<<"discount:"<<amount*(10.0/100);
    //     cout<<"\n have to pay:"<<amount-amount*(10.0/100)<<endl;
    // }
    // else if(amount>500 && amount<=1000) {
    //     cout<<"u r eligible for 20% discount\n";
    //     cout<<"discount:"<<amount*(20.0/100);
    //     cout<<"\n have to pay:"<<amount-amount*(20.0/100)<<endl;
    // }
    
    // else if(amount>1000 ) {
    //     cout<<"u r eligible for 30% discount\n";
    //     cout<<"discount:"<<amount*(30.0/100);
    //     cout<<"\n have to pay:"<<amount-amount*(30.0/100)<<endl;
    // }

    //         weekday weekend
    // recliner 400 600
    // deluxe   200 300
    // luxury   150 200

    // string day,category;
    // int no_of_tickets;
    // cout<<"enter'weekend' or 'weekday':";
    // cin>>day;
    // if(day =="weekend"){
    //     cout<<"please select in the following category\n";
    //     cout<<"'recliner' \n 'deluxe' \n 'luxury'\n";
    //     cin>>category;

    //     if(category == "recliner"){
    //         cout<<"enter number of tickets:";
    //         cin>>no_of_tickets;
    //         cout<<"Total:"<<no_of_tickets*600;
    //     }
    //     else if(category == "luxury"){
    //         cout<<"enter number of tickets:";
    //         cin>>no_of_tickets;
    //         cout<<"Total:"<<no_of_tickets*300;
    //     }
    //     else if(category == "deluxe"){
    //         cout<<"enter number of tickets:";
    //         cin>>no_of_tickets;
    //         cout<<"Total:"<<no_of_tickets*200;
    //     }
    //     else{
    //         cout<<"Invalid input";
    //     }
    //     else if(day == "weekday"){


    //     }
    //     else{
    //         cout<<"invalid input";
    //     }
    // }

    

    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
    
    // Switch: whenever we know the number of possible inputs, --> switch case
    // (because --> switch is faster then if-else)
    // range --> if-else ladder
    // syntax:
    //{'a','b','c','d'}
    // switch(char/int){
    // Case-->Entry point Exist point 
    // case 'a': // body
    //             break;
    // case 'b': // body
    //             break;
    //case 'c': // body
    //             break;
    //case 'd': // body
    //             break;
    // default: // optional 
    // 
    // }

    // Write a program to create a calculator which perform simple arithmetic operation ?
    //  int n1,n2;
    //  char choice;
    //  cout<<"enter 2 number:";
    //  cin>>n1>>n2;
    //  cout<<"enter any operation +,-,*,/,%,:";
    //  cin>>choice;
    //  switch (choice){
    //     case '+': cout<<"Add"<<n1+n2;
    //                break;
    //  }
     
    // loop:
    // (while,do-while)1.Condition dependent loop(Number not know)
    // (for)2.Iteration dependent loop(Number know)
    
    // for loop:is used when we have number known every question which done by for loop has also done by while,but vice-versa is not true.
    // syntax
    // for(initilization;test_expression;updation){
    // body of for loop  
    //}

    // for( int i=10;i>=1;i--)
    // {
    //     cout<<i<<endl;
    // }
    
    // Write a programme to display a multiplication table of any given by user?
    
    // int num;
    // cout<<"enter a number:";
    // cin>>num;
    // for(int i=1;i<=10;i++){
    //     cout<<num<<"x"<<i<<"="<<num*i<<endl;
    // }
    // Write a programme to display the sum of n natural number?
    // Write a programme to display the sum of n number?

    // int n,sum=0;
    // cout<<"enter range:";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    //     if(i==n){
    //     cout<<i<<"=";
    //     }
    //     else{
    //         cout<<i<<"+";
    //     }
        
    // }
    // cout<<sum;

    // int n,num,sum=0;
    // cout<<"enter range:";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<"enter number:";
    //     cin>>num;
    //     sum=sum+sum;
        
        
    // }
    // cout<<sum;

    // int i=90;
    // for (int i=1;i<=10;i++); // loop terminates
    // {
    //     cout<<i<<endl; // out of loop
    // }
    // 90
    // for(;;)
    // { cout<<"@";}

    //Write a programme a display a following pattern ?
    //  for(char i='A';i<='Z';i++)
    //  {
    //     cout<<i<<"";
    //  }
     // ASCII American Standard Code Of Information Interchange
     //A--->65 a--->97 0--->48

    // Switch logical are not allow
    // Datatypes int or char
    // Defualt
    // Break
    
    // int Number;
    // cout<<"Enter a number:";
    // cin>>Number;
    // switch (Number)
    // {
    //     case 1: cout<<"Aditya";
    //     break;
    //     case 2:cout<<"Nitin";
    //     break;
    //     case 3:cout<<"Isha";
    //     break;
    //     default:cout<<"Python";

    //     break;
    // }

    // Calculator

    // char alpha;
    // cout<<"Enter a b and c:";
    // cin>>alpha;
    // switch (alpha)
    // {
    //     case 'a': cout<<"Aditya";
    //     break;
    //     case 'b':cout<<"Nitin";
    //     break;
    //     case 'c':cout<<"Isha";
    //     break;
    //     default:cout<<"Python";

    //     break;
    // }


    
    // Timing Clock 1 to 24

    // int hour,minute;
    // cout<<"Enter hour(1-24):";
    // cin>>hour;
    // cout<<"Enter minute(1-60):";
    // cin>>minute;
    // switch(hour){
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //     case 6:
    //     case 7:
    //     case 8:
    //     case 9:
    //     case 10:
    //     case 11:
    //     case 12:
    //     cout<<hour<<" AM ";
    //     break;
    //     case 13:
    //     case 14:
    //     case 15:
    //     case 16:
    //     case 17:
    //     case 18:
    //     case 19:
    //     case 20:
    //     case 21:
    //     case 22:
    //     case 23:
    //     case 24:
    //     cout<<hour -12<<" PM ";
    //     break;
    // }

    // int t;
    // cout<<"Enter a t:";
    // cin>>t;
    // switch (t/12)
    // {
    // case 0:cout<<"AM";
    //     break;
    //     case 1:cout<<"PM";
    //     break;
    //     default:cout<<"II";
    //     break;
    // }

    //  1.International
    //  2.National
    // 1.US
    // 2.UK
    // 1.US PRICE 400
    // 2.UK PRICE 200

    // int choice;
    // cout<<"Enter your destination, 1.International and 2.Domestic";
    // cin>>choice;
    // switch (choice)
    // {
    //     case 1:cout<<"Enter your destination 1.US and 2.Uk";
    //     cin>>choice;
    //     switch (choice)
    //     {
    //     case 1:cout<<"us price is 100rs";
    //     break;
    //     case 2:cout<<"uk price is 200rs";
    //     break;
    //     default:cout<<"invalide input";
    //     break;
    //     }
    //     break;
    //     default:cout<<"ii";
    //     break;

    // }

    // GOTO

    // skip:
    // cout<<"Statement 1";
    // goto skip;
    // cout<<"Statement 2";
    
    // cout<<"Statement 3";

    // cout<<"Statement 4";

    // int num=2;
    // int i=1;
    // skip:
    // cout<<num*1;
    // i++;
    // if(i<=10)
    // {
    // goto skip;
    // }

    // int num=3;
    // int i=3;
    // skip:
    // cout<<num*3;
    // i++;
    // if(i<=30)
    // {
    // goto skip;
    // }


    // For loop,While loop,Do-While loop

    // for(int i=1;i<=10;i=i+1)
    // {
    //     cout<<i;

    // }



    // for(int i=100;i>=1;i--)
    // {
    //     cout<<i<<endl;

    // }

    



    // int i;
    // int sum=0;
    // for(i=1;i<=10;i++)
    // {
    //    sum=sum+i;
    //    cout<<sum+i;

    // }
    // cout<<sum;

    // int i;
    // int factorial=1;
    // for(i=1;i<=5;i++)
    // {
    //     factorial=factorial*i;
    //     cout<<factorial*i;

    // }

    // for(int i=100;i>=1;i--)
    // {
    //     cout<<i<<endl;
    // }

    // int n=5;
    // int factorial=1;
    // for(int i=1;i<=n;i++)
    // {
    //     factorial=factorial*i;
        
    // }
    // cout<<factorial;

    // int a=2;
    // int n=5;
    // int power=1;
    // for(int i=1;i<=n;i++)
    // {
    //     power=power*a;
        
    // }
    // cout<<power;

    //ASCII Value


    // for(int i=0;i<=256;++i)
    // {
    //     cout<<ch(int);
    // }
    
    // for(char ch='A';ch<='Z';++ch)
    // {
    //     cout<<int(ch);
    // }





    // int i=1;
    // while(i<=10){
    //     cout<<i;
    //     i++;

    // }

    // int i=1;
    // int number=2;
    // while(i<=20){
    //     cout<<number*i;
    //     i++;

    // }

    // int i=1;
    // int sum=0;
    // while(i<=10)
    // {
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum;

    // int number=123;
    // int rv=0;
    // while(number!=0){
    // rv=rv*10+number%10;
    // number=number/10;
    // }  
    // cout<<rv;

    // int number =123;
    // int rv=0;
    // for(int i=number;number!=0;){
    //     rv=rv*10+number%10;
    //     number=number/10;
    // }   
    // cout<<rv;

    // int number=123;
    // int rv=0;
    // while(number!=0){
    // rv=rv*10+number%10;
    // number=number/10;
    // }  
    // cout<<rv;
    // if(number == rv)
    // {
    //     cout<<"This palindrome:";
    // }
    // else{
    //     cout<<"This is not palindrome:";
    // }

    // int d1,d2,d3,num;
    // d1=num%10;
    // cout<<"Enter a d1:";
    // cin>>d1;
    // d2=num%10;
    // cout<<"Enter a d2:";
    // cin>>d2;
    // d3=num%10;
    // cout<<"Enter a d2:";
    // cin>>d3;

    // int number=153;
    // int copy;
    // int digit;
    // int sum=0;
    // for(;number!=0;)
    // {
    //     digit=number%10;
    //     sum=sum+digit*digit*digit;
    //     number=number/10;
    // }
    // if(sum==copy)
    // {
    //     cout<<"armstrong no.";

    // }
    // else{
    //     cout<<"Not a armstrong no.";
    // }
    
    int i;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        if(n%4==0 && n%8==0)
        {
            cout<<"Valid number";
        }
        else
        {
            cout<<"Invalid number:";
        }
        cout<<endl;
        }




















    return 0;
    // return,non-return 
}