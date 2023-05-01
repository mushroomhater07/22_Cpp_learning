// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

 /*Tips for Getting Started: 
   1. Use the Solution Explorer window to add/manage files
   2. Use the Team Explorer window to connect to source control
   3. Use the Output window to see build output and other messages
   4. Use the Error List window to view errors
   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
   6. In the future, to open this project again, go to File > Open > Project and select the .sln file*/



   /*app for demanding on performance energy consumption and speed
   performance and res time
   useful+ learn how to program
   working direct on hardware, effecient + high level
   C++ Programming Language, 4th Edition*/

   //C++ program contains
   //preprocessor directive + main function


//header = info how to do a task
#include "main.h"     //search from local => std

void userinput();
int beautifulcout(); //before main() // otherwise doesnt work
void array1();
void formatdisplay();
void moremath();
void bitwise();
void notlearnt();


int main() //you can have main func without return int;
//program what to do
{   
    //int, short, long, char, float, double, bool
    //auto extern goto register register short sizeof struct typedef union volatile _Packed static
    unsigned int a;//positive and negative value
    signed int b;  //onlypositive
    notlearnt();
    bitwise();
}
void notlearnt() {
    volatile int a;
    static int b;
    const int c = 5;
    std::cout << 3 << std::endl;
    goto LOOP;
    std::cout << 4;
    LOOP: std::cout << c<< std::endl;
}
void formatdisplay() {
    //printf only
    float a = 12.23423437;
    printf("in int = %d and 3floatpt = %.3f \n", (int)a, a);
    printf("in hexadec = %x", (double)a);
    printf("in string = %s", "SHDJAHD");
    printf("in char = %c", '(');

}
int beautifulcout() { //definition of function after main()
    int a = 45;
    float b = 45323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;

    std::cout << "print with set width = 10\n";
    std::cout << "Ints" << std::setw(10);           //setw() set width/space
    std::cout << "Floats" << std::setw(10);
    std::cout << "Doubles" << std::setw(10) << "\n";

    std::cout << a;
    std::cout << std::setw(11) << b;
    std::cout << std::setw(11) << c << "\n\n";
    return 0;
}
void userinput() {
    float age = 0;
    float year = 0;
    using namespace std; string num, name;
    cout << "Tell me your age?: ";
    getline(cin, num);
    stringstream(num) >> age; //convert string to other var type

    cout << "what year do you birth\n";
    cin >> year;
    cout << "Hello " << age+ year << "\n";
    cout << "what is your name?"<< "\n";

    //if you type any space, it will think it is the end of the input
    getline(cin, name); //doesnt work//ignores white space characters and leaves it in the stream as garbage.
    getline(cin >> ws, name); //cant use same variable???? 'name'
    cout << "Hello " << name << "\n";
}
void array1() {
//declartion
    //variableType arrayName [ ] = {variables to be stored in the array};
    //variableType arrayName[array size]
//uses
    //variableType arrayName[ index number ]

    int userInput[40];
    //int c;
    //scanf("%d", &c); //cin but include<stdio.h> //read the value between each spacebar
    //                    //%d = spacebar //&var == store into var
    //std::cout << c; //scanf use buffer // if you type in 54 65, 65 will affect next scanf
    
    for (int i = 0; i < 6; i++)
    {     scanf_s("%d", &userInput[i]);} //if (input have space, add it to userinput)
    std::cout << "\nThe array\n";
    for (int i = 0; i < 6; i++)
    {     std::cout << userInput[i] << " ";}
    
    //multidimension
    //typeOfVariable arrayName[size of dim.1][size of dim. 2] ...[size of dim. n];
    //int varname[row][col] = {row0col0, row0col1, ...}
    int array2Dim[2][3] = { 'a','b' ,'c' ,'d' ,'e','f'};
//  0   1   2
//0 a   b   c
//1 d   e   f
    for (int i = 0; i < 2;i++)
        for (int j = 0;j < 3;j++)
            std::cout << "array2Dim[" << i << "][" << j << "] = " << (char)array2Dim[i][j] << "\n";

    //vector + array
    const int row = 3, col = 5;
    int arr[row][col];
    int vector[row], product[row];
    int sum;
    //sum = (arr[i][j] * vector[i]) + sum;
}
void bitwise() {
    int a = 5;
    std::cout << (a >> 2) << std::endl;// binary shift right = /2 /2
    std::cout << (a << 2) << std::endl; // binary shift left = *2 *2
}
void moremath(int param1) {
    int a = 1;
    a += 2;
    a -= 2;
    a *= 2;
    a /= 2;
    a %= 2;

    //what is that
    a &= 2; // a&b
    a |= 2; // a|b
}
int function1(int param1, int param2) {
    moremath(5);
    return 9;
}
void opertator() {
    std::string TorF[] = { "False", "True" }; //created array instead of 1 and 0
    int a = 5; 
    int b = 4;
    std::cout << "a < b is " << TorF[a < b];
    std::cout << "\na > b is " << TorF[a > b];
    int c = a != b;
    std::cout << "\na != b is " << c;
    if(a == b){}
    if(a >= b){}
    if(a <= b){}
    // && and || or ! not  // (!B || !C) && A
    if(true){}else if(true){} else{}
    switch (a) {
    case(1): //hi lo
        std::cout << "hi";
    case('E'): // lo
        std::cout << "lo";
        break;
    default:
        break;
    }
}
int foreverloop() {//use break; = exit // continue; = skip that one 
    int a = 0;
    while (a < 5)
    {
        std::cout << "a = " << a << "\n";
        a++;
        if (a == 3)
            break;
    }
    std::cout << "The first statement after the first while loop\n\n";


    while (a < 15)
    {
        a++;
        if (a == 10)
        {
            std::cout << "\tWhen a=10, go back to the top of the loop";
            std::cout << "\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout << "After continue a = " << a << "\n";
    }
    for (; ;)
    {        std::cout << "This for loop will run forever\n";    }
    while (1)
    {
        std::cout << "This while loop will run forever\n";
    }return 0;
}
void pointer() {
    //Java called it reference
    //c++, low-level (ASM) machine address - deal with hardware
    //hide it by vector, handle memory change in size and element (pointer inside/ internally)
    //use local var instead of pointer // no need de-reference, chasing around //just pop and push from stack
    //pointer usually for implementation - linked list, OOP class, vector in C++

    //dereference = have pointer need variable
    //indicated by adding the operator * before the variable's name

    //pointer = address of variable
    int a = 0;
    std::cout << &a << std::endl; // &var is address  

    // this is a pointer that holds the address of the variable 'a'.
    // if 'a' was a float, rather than int, so should be its pointer.
    int* pointerToA = &a;

    // If we were to print pointerToA, we'd obtain the address of 'a':
    std::cout << "pointerToA stores " << pointerToA << '\n';

    // If we want to know what is stored in this address, we can dereference pointerToA:
    std::cout << "pointerToA points to " << *pointerToA << '\n';
}
int moreonpointer() {// 'char' and "string" 
    using namespace std;
    int givenInt;

    string givenString;
    char givenChar;

    int* pointerGivenInt = &givenInt;
    int** pointerPointerGivenInt = &pointerGivenInt;

    //Get the values of each variable
    cout << "integer = \n";
    cin >> givenInt;
    //We need to use cin.ignore so cin will ignore 
   //the characters in the buffer leftover from the givenDouble
    cin.ignore();
    cout << "character = \n";
    cin >> givenChar;

    cout << "string = \n";
    cin.ignore();
    getline(cin, givenString);


    //The value stored in the data    //The address of the data - use pointers
    cout << "integer = " << givenInt << "\n";
    cout << "string = " << givenString << "\n";
    cout << "character = " << (char)givenChar << "\n\n";
    cout << "address integer = " << &givenInt << "\n";
    cout << "address string = " << &givenString << "\n";
    cout << "address character = " << (void*)&givenChar << "\n\n";

    //Use indirection to the get the value stored at the address
    cout << "pointer of givenInt = " << *pointerGivenInt << "\n";
    cout << "pointer of pointer of givenInt = " << **pointerPointerGivenInt << "\n";

    //another one
    string sentence;
    string* pointerS = &sentence;
    *pointerS = "Hey look at me, I know pointers!";
    cout << "sentence = " << sentence << "\n";

    return 0;
}
int random() {
    int target;
    srand(time(NULL));  //set the seed for the random number generator
    target = rand() % 100 + 1; //generate the 'random' number
    return target;
}
void loop() {
    int count = 0, entry = 0;
    //for (declaration : range) statement;
    //for (initialization; condition; increase) statement;
    for (int i = 0; i < 10;i++)
    {       std::cout << "i = " << i << "\n";
            std::cout << "What is the next number?\n";
            std::cin >> count;
    }
    while (entry <= 5)
    {
        std::cout << "incrementing entry = " << entry << "\n";
        entry++;
    }
    do{   std::cout << "Count = " << count << "\n";
        count++;
    } while (count < 5);

}
void math() {
    using namespace std;
    // + - * / %(mod)
    float mod;
    mod = 18 % 4;
    double powerof;
    powerof = pow(4, 3); // base, exponent 4^3=216
    double pi = M_PI;
    cout << pi;
    float width = 4.5;
    float height = 5.5;
    int area = width * height; //24.75 ~= 24
}

int prefixpostfix() {
    using namespace std;
    int a =0, b = 0;
    int post=0, pre = 0;
    cout << "Inital values: \t\t\tpost = " << post << " pre= " << pre << "\n";
    post = a++;// a+1 = 1 return a = 0
    pre = ++b;// b+1 = 1 return b+1 = 1
    cout << "After one postfix and prefix: \tpost = " << post << " pre= " << pre << "\n";
    post = a++;
    pre = ++b;
    cout << "After two postfix and prefix: \tpost = " << post << " pre= " << pre << "\n";
    return 0;
}
void filehandling() {
    using namespace std;string line;
    ofstream myfileW("input.txt", ios::app); //Writing
    if (myfileW.is_open()) { myfileW << "adding a line"; myfileW.close(); }
    else { cout << "Unable to open"; }
    
    ifstream myfileR;//reading
    myfileR.open("input.txt");
    if(myfileR.is_open()){
        while( getline(myfileR, line))
        {
            cout << line << '\n';
        }
        myfileR.close();
    }else cout << "Unable to open file for reading";
    fstream myfileWR; //
    myfileWR.open("input.txt");
    myfileWR.close();
}
void enumerated_constant() { //enumerate = 0,1,2 or 5,6,7
    using namespace std;
    enum month { Jan = 5, Feb }; //assign many possible value //month is var type
    cout << Jan << Feb << endl;
    month newMonth;
    newMonth = Feb; //assign one of the value in month-type
    if (newMonth == Feb) { cout << "wrong" << endl; }
}
void consoleoutput(){
    using namespace std; //get rid of std:: but cons is not specific
    
    const int intconst = 1;
    int variableno = 233;
    cout << variableno << " is the number" << endl; //cout =console.log()
    cout << "the size =" << sizeof(int) << endl; //sizeof(var-type) //memory used of var type
    cout << "\t" << "\n"; //"\n" new line//"\t" tab //endl to end the text
}

// cmd: g++ main.cpp -o main.out //g++ is c++ compiler //-o => ouput to
// cmd: ./main.out  //check output