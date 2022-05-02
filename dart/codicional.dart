import 'dart:io';

void main(){
    stdout.write("Enter your name: ");
    String? name = stdin.readLineSync();

    if(name == ""){
        print("You didn't enter a name!");
    }else{
        print("Hello, $name!");
    }
}