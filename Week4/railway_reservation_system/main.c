#include <stdio.h>
#include <stdlib.h>

void disMenu(){
    printf("Choose an option\n");
    printf("\n1.View available trains\n");
    printf("2.Book tickets\n");
    printf("3.Cancel tickets\n");
    printf("4.Search destination\n");
    printf("\nEnter your choice:");
}
typedef struct{
    int number;
    char destination[50];
    int available_seats;
    float price;
} Train;
Train trains [] = {
    {101, "Kigali",30,5000},
    {102, "Musanze",25,4500},
    {103, "Rubavu",15,3500},
    {104, "Nyundo",20,4000},
    {105, "Huye",10,3000}
    };

// Function to display available trains
void viewAvailableTrains(){
    printf("Available Trains\n");
    for (int i = 0; i < 5; i++) {
        printf("Train No:%d, Destination:%s, Available Seats%d, Price:$%.2fRWF\n", trains[i].number, trains[i].destination, trains[i].available_seats, trains[i].price);
    }
}

void  bookTickets(){
    int trainNum, seats;
    printf("\nEnter Train Number: ");
    scanf("%d", &trainNum);
    printf("Enter number of seats: ");
    scanf("%d", &seats);

 for (int i = 0; i < 5; i++){
 if (trains[i].number == trainNum){
        if (trains[i].available_seats >= seats){
                trains[i].available_seats -= seats;
                printf("%d seats booked successfully for Train No: %d .\n", seats, trainNum);
                printf("Remaining seats:%d ",trains[i].available_seats);
        } else {
                printf("Insufficient seats available. Only %d seats left.\n", trains[i].available_seats);
        }
            return;
    }
    }
    printf("Invalid Train Number. Please try again.\n");

}
void  cancelTickets(){
    int trainNum, seats;
    printf("\nEnter Train Number: ");
    scanf("%d", &trainNum);
    printf("Enter number of seats to cancel: ");
    scanf("%d", &seats);

 for (int i = 0; i < 5; i++){
     if (trains[i].number == trainNum){
        if (trains[i].available_seats >= seats){
                trains[i].available_seats += seats;
                printf("%d seats cancelled successfully for Train No: %d.\n", seats, trainNum);
                printf("Remaining seats:%d ",trains[i].available_seats);
        } else {
                printf("Insufficient seats available. Only %d seats left.\n", trains[i].available_seats);
        }
            return;
    }
    }
    printf("Invalid Train Number. Please try again.\n");
}
void  searchTrains(){
    char search_destination[50];
    printf("Enter destination:");
    scanf("%s",&search_destination);

    for (int i = 0; i < 5; i++){
            if (strcmp(trains[i].destination,search_destination)==0){
                    printf("Searched result\n");
                    printf("Train No:%d, Destination:%s, Available Seats%d, Price:$%.2fRWF\n", trains[i].number, trains[i].destination, trains[i].available_seats, trains[i].price);
            }else{
                printf("Destination not found");
            }
            return;
    }
}

int main(){
    int option;


    disMenu();
    scanf("%d",&option);


    switch(option){
        case 1:
            viewAvailableTrains();
            break;
        case 2:
            bookTickets();
            break;
        case 3:
            cancelTickets();
            break;
        case 4:
            searchTrains();
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }

    return 0;
}
