
// Importing dart:io file
import 'dart:io';
 
void number_is(int n){
    if(n % 2 == 0){
        print("Your number is even");
    } else {
        print("Your number is odd");
    }
}

void main()
{
    // Asking for favourite number

    print("Enter your favourite number:");

    // Scanning number

    int? n = int.parse(stdin.readLineSync()!);

    // Here ? and ! are for null safety

    // Printing that number

    print("Your favourite number is $n");

    number_is(n);
}