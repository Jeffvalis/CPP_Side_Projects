#include<iostream>

int main(){
    char choice;

    std::cout<<"All hail the God Emperor!"<<std::endl;
    std::cout<<"Space marine : guards man answer me these with 1/0 "<<std::endl;
    std::cout<<"Guards man: Yes my lord "<<std::endl;
    std::cout<<"All hail the God Emperor!"<<std::endl;

    while(true){
        std::cout<<"who would win a fight a custodian or a grey knight?"<<std::endl;
        std::cin>>choice;

        if (choice == '1'){
        std::cout<<"you have chosen wisely Glory to the imperium."<<std::endl;
        } else if (choice == ('0')){
        std::cout<<"now i'm not sure but that smells like hereasy"<<std::endl;
        std::cout<<"But let us continue"<<std::endl;
        }else{
            std::cout<<"that is definitely hereasy fetch me my bolter.\n";
            continue;
        }

        std::cout<<"Do you habour abominable intelligence from the imperium?"<<std::endl;
        std::cin>>choice;

        if (choice == '1'){
            std::cout<<"you have chosen terribly :-) execution it is "<<std::endl;
        } else if (choice == ('0')){
        std::cout<<"Glory to the Emperor!"<<std::endl;
        }else{
            std::cout<<"Grit your teeth for this chain sword"<<std::endl;
            continue;
        }
        std::cout<<"do you still believe the emperor will rise again? (1/0):"<<std::endl;
        std::cin>>choice;

        if (choice == '1'){
            std::cout<<"Glory to the Emperor. "<<std::endl;
            std::cout<<"You hold your own well Guardsman. "<<std::endl;
        } else if (choice == ('0')){
            std::cout<<"it appears we have someone for todays sacrifice."<<std::endl;
            std::cout<<"The Emperor provides. "<<std::endl;
        }else{
            std::cout<<"Why thats no maidens behaivour."<<std::endl;
            continue;
        }
        std::cout<<"Guardsman this is where we part"<<std::endl;
        std::cin>>choice;

        if (choice == '1'){
            std::cout<<"Glory to the God Emperor "<<std::endl;
        } else if (choice == ('0')){
            std::cout<<"Glory to Imperium "<<std::endl;
            std::cout<<"and Glory to the Custodian "<<std::endl;
        }else{
            std::cout<<"Looks like Hereasy after all DIEEEEEEEEEE!!!!!!"<<std::endl;
            break;
        }
    }

    return 0;
}