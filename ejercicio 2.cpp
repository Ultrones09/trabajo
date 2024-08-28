//Prompt the user to enter an integer. End your prompting message with a colon (:) followed by a space and leave the cursor positioned after the space. 
#include <iostream>
int main() {
    int num_ent;

    std::cout<<"ingrese un numero: ";

    std::cin>>num_ent;

    std::cout<<"pusiste: "<<num_ent<<std::endl;

    return 0;
}