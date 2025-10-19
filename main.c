#include<stdio.h>
#include<stdlib.h>


#define MAX_CITIES 30
#define MAX_DELIVERIES 50
#define FUEL_PRICE 310

typedef struct{
char name[20];
int capacity;
int ratePerKm;
int avgSpeed;
int fuelEfficiency;
}
Vehicle;
Vehicle vehicles[3] = {
{"Van" , 1000, 30, 60, 12},
{"Truck" , 5000, 40, 50, 6},
{"Lorry" , 10000, 80, 45, 4}
};
char cities[MAX_CITIES][20];
int cityCount = 0;
int distance[MAX_CITIES][MAX_CITIES];
