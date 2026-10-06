// variables
#include<stdio.h>
// int main(){
//     int a=10;
//     int b=30;
//     printf("%d",a+b);
// }

// int main(){
//     int a=35;
//     float b=5.5;
//     float sum;
//     sum=a+b;
//     float diff=a-b;
//     printf("%f\n",sum);
//     printf("%f",diff);

// }
// rules: Variables Can contain>>letters,digits,underscore _
// Cannot>> start with a digit,contain spaces,use C keywords
// Keywords cannot be variable names

// changing variables>>
// int main(){
//     int count = 0;
//     count = 1;
//     count = 2;
//     count = 3;
//     printf("%d\n",count);
//     printf("%d",sizeof(count));
// }


// void counter() {
//     static  count = 0;  // initialized only once
//     count++;
//     printf("Count = %d\n", count);
// }

// int main() {
//     counter();  // Count = 1
//     counter();  // Count = 2
//     counter();  // Count = 3
//     return 0;
// }
// static with a local variable (inside a function)>> A static local variable is a variable declared inside a function with the static keyword.
// It is created only once when the program starts, keeps its value between function calls, and is visible only inside that function

//static with a global variable or function> A static global variable or function is declared at the top of a .c file with the static keyword.
// It exists for the whole program, but it can be used only in that same .c file (other files cannot access it).
// ---------------------------------------
// volatile>>

// A volatile variable is a variable whose value may change at any time without any action by the current code.
// The compiler must always read it from memory and always write it to memory, and must not optimize accesses to it

// Without volatile:
// You look at the board once, see “0”, and then assume it will always be “0”. You never look again. Even if someone changes it to “1”, you don’t notice.

// With volatile:
// Every time you need the value, you go and actually look at the board again. So when it changes to “1”, you see it.


// #include <signal.h>

// volatile int flag = 0;

// void handler(int s) { flag = 1; }

// int main() {
//     signal(SIGINT, handler);
//     while (flag == 0) {}      // wait for Ctrl+C
//     printf("Got signal\n");
// }
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("i*i,%d");
    }
}
// n=2 k=2*2=4,  row=k-1, coloumn=k-1 print=row*"n", print column=clomn*"n"