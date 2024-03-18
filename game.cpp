#include <iostream>
#include <string>

std::string Util();

void Game(){
    std::string num1="1",num2="2";
    std::cout<<"Enter a answer: ";
    num1=Util();

    while(true){
        std::cout<<"Enter a guess: ";
        num2=Util();
        int Stri=0,Ball=0;

        for(int y=0; y<3; y++){
            for(int x=0; x<3; x++){
                if(num2[y]==num1[x]){
                    if(y==x){
                        Stri++;
                        break;
                    }
                    Ball++;
                }
            }
        }
        if(Stri==3){
            std::cout<<"You Win!"<<std::endl;
            break;
        }
        std::cout<<"Strikes: "<<Stri<<", Balls: "<<Ball<<std::endl;
    }
}