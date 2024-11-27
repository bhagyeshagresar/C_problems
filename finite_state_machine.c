#include <stdio.h>
#include <string.h>

//Different state of ATM machine
typedef enum{
    Idle_State,
    Card_Inserted_State,
    Pin_Entered_State,
    Option_Selected_State,
    Amount_Entered_State
} eSystemState;


//Different type of events
typedef enum{
    Card_Insert_Event,
    Enter_Pin_Event,
    Select_Option_Event,
    Enter_Amount_Event,
    Money_Dispatched_Event
} eSystemEvent;


//Prototype of Event Handlers
eSystemState AmountDispatchHandler(void){
    return Idle_State;
}

eSystemState InsertCardHandler(void){
    return Card_Inserted_State;
}

eSystemState EnterPinHandler(void){
    return Pin_Entered_State;
}

eSystemState SelectOptionHandler(void){
    return Option_Selected_State;
}

eSystemState EnterAmountHandler(void){
    return Amount_Entered_State;
}

int main(int argc, char* argv[]){

    eSystemState eNextState = Idle_State;
    eSystemEvent eNewEvent;
    char input;

    while(1){


        //Check the current state every time
        printf("Current State: %d\n", eNextState);

        //Read the system events
        printf("Please enter event\n0 = Card_Insert Event \n1 = Enter_Pin_Event \n2= Select_Option_Event \n3 = Enter_Amount_Event \n4 = Money_Dispatched_Event\n");
        input = getchar();
        eSystemEvent eNewEvent = atoi(&input);


        switch(eNextState){
            
            case Idle_State:
            
                if(Card_Insert_Event == eNewEvent){
                    eNextState = InsertCardHandler();
                }
            
            break;

            case Card_Inserted_State:
                if(Enter_Pin_Event == eNewEvent){
                    eNextState = EnterPinHandler();
                }
            break;

            case Pin_Entered_State:
                if(Select_Option_Event == eNewEvent){
                    eNextState = SelectOptionHandler();
                }
            break;

            case Option_Selected_State:
                if(Enter_Amount_Event == eNewEvent){
                    eNextState = EnterAmountHandler();
                }
            break;

            case Amount_Entered_State:
                if(Money_Dispatched_Event == eNewEvent){
                    eNextState =AmountDispatchHandler();
                }
            break;
            default:
                printf("Invalid Input\n");
                break;

         }


    }

    return 0;
}