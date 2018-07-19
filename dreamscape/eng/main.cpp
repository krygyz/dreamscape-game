#include <iostream>
#include <windows.h>
#include "include/player/guilds.h"
#include "include/player/gender.h"

int main(){
    SetConsoleTitle("Dreamscape"); //puts the title on the application window :)

    std::string charName; //character name
    std::string gender; //character's gender

    name:
        std::cout<<"What is your character's name?"<<std::endl; //queries the player for the character's name
        std::cin>>charName; //takes the user input, and puts it into the variable "charName"

    std::cout<<std::endl; //just gives more space in between the two statements

    genderSelection:
        std::cout<<"Hello, "<<charName<<"!"<<std::endl<<std::endl; //friendly little greeting ^^
        std::cout<<"What is "<<charName<<"'s gender?"<<std::endl; //asks player for the characters gender
        std::cout<<"Male = 1, Female = 0"<<std::endl<<std::endl; //numbers key
        std::cin>>genderChoose;

        switch(genderChoose){ //switch statement > if else statements...
            case 1: //if the variable matches this number (1), then execute the following
                gender="male";
                pronoun="he";
                pronounCaps="He";
                pronounPossessive="his";
                pronounPossessiveCaps="His";
                pronounAccussative="him";
                pronounAccussativeCaps="Him";
                break; //tells the program to stop looking inside this switch statement IF it matches

            case 0:
                gender="female";
                pronoun="she";
                pronounCaps="She";
                pronounPossessive="her";
                pronounPossessiveCaps="Her";
                break;

            default: //if none of the cases matched the user input, this is executed
                std::cout<<"Please enter a valid gender (1 = male, 0 = female)."<<std::endl;
                system("cls"); //clears the console. here's a reminder that this apparently has errors, so i dunno
                std::cin.get();
                goto genderSelection;
                break;
        }

    std::cout<<std::endl;

    std::cout<<"Ah, so "<<charName<<" is a "<<gender<<"."<<std::endl<<std::endl;

    system("cls"); //clears the screen, this was the most straight forward one i could find. there has been problems with this apparently

    guildSelection:
        std::cout<<"Now, what is "<<pronounPossessive<<" guild? This determines how effective certain weapons are, as well as effectiveness in combat."<<std::endl;
        std::cout<<"The available guilds are:"<<std::endl;
        std::cout<<"[1] Warrior"<<std::endl;
        std::cout<<"[2] Sorcerer"<<std::endl;
        std::cout<<"[3] Rogue"<<std::endl;
        std::cin>>guildChoose;
        //the following WILL BREAK if in the form of a switch statement
        if(guildChoose == 1){
            warrior=true;
            sorcerer=false;
            rogue=false;
        }

        else if(guildChoose == 2){
            warrior=false;
            sorcerer=true;
            rogue=false;
        }

        else if(guildChoose == 3){
            warrior=false;
            sorcerer=false;
            rogue=true;
        }

        else{
            std::cout<<"Please enter a valid guild (1 = male, 2 = sorcerer, 3 = rogue)."<<std::endl;
        }

        std::cout<<std::endl;


    return 0;
}
