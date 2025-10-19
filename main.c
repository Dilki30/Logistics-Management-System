#include<stdio.h>
#include<stdlib.h>

#define CITY_NAME_LEN 50
#define MAX_CITIES 30
#define MAX_DELIVERIES 50
#define FUEL_PRICE 310

typedef struct{
char name[CITY_NAME_LEN];
}
City;
typedef struct{
int capacity;
int ratePerKm;
int avgSpeed;
int fuelEfficiency;
char name[30];
}
Vehicle;

typedef struct {
int src;
int dest;
int weight;
int vehicle_type;
double distance;
double delivery_cost;
double fuel_cost;
double operational_cost;
double profit;
double customer_charge;
double delivery_time;
}
Delivery;

City cities[MAX_CITIES];
int cityCount = 0;
int distance[MAX_CITIES][MAX_CITIES];
Vehicle vehicles[3] = {
{"Van" , 1000, 30, 60, 12},
{"Truck" , 5000, 40, 50, 6},
{"Lorry" , 10000, 80, 45, 4}
};

Delivery deliveries[MAX_DELIVERIES];
int delivery_count = 0;

void add_city();
void rename_city();
void remove_city();
void input_distance();
void display_distances();
void new_delivery_request();
void calculate_and_display_latest_delivery();
void show_reports();
void clear_input_buffer();

int main() {
    int choice;
    while (1) {
        printf("-----Logistics Management System-----");
        printf("1. Add City");
        printf("2. Rename City");
         printf("3. Remove City");
        printf("4. Input/Edit Distance");
        printf("5. Display Distance Table");
        printf("6. New Delivery Request");
        printf("7. Estimate Latest Delivery");
        printf("8. Show Performance Reports");
        printf("9. Exit");
        printf("Choose an option: ");
        if(scanf("%d", &choice)!=1){
            printf("Invalid input!");
            clear_input_buffer();
            continue;
        }
        clear_input_buffer();

        switch(choice) {
            case 1: add_city();
            break;
            case 2: rename_city();
            break;
            case 3: remove_city();
            break;
            case 4: input_distance();
            break;
            case 5: display_distances();
            break;
            case 6: new_delivery_request();
            break;
            case 7: calculate_and_display_latest_delivery();
            break;
            case 8: show_reports();
            break;
            case 9: exit(0);
            default: printf("Invalid choice! Try again.");
        }
    }
    return 0;
}

void clear_input_buffer() {
    int ch;
    while ((ch = getchar()) != '
' && ch != EOF);
}
