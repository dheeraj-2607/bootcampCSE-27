#include <stdio.h>

#include <stdlib.h>

#include <string.h>

// Represents an individual item for delivery

typedef struct {

 char packageID[15]; // Unique alphanumeric code

 double weight; // Weight in kilograms

 int priority; // 1 = High, 2 = Medium, 3 = Low

 char destination[50]; // Delivery city/address

} Package;

// Tracks delivery transport resources

typedef struct {

 char vehicleID[15]; // Unique vehicle identifier

 double maxCapacity; // Maximum weight budget in kg

 double currentLoad; // Total combined weight of active cargo

 char status[15]; // "Available", "Transit", or "Maintenance"

} Vehicle;

// Evaluates a physical path between two terminals

typedef struct {

 char sourceCity[30];

 char destCity[30];

 double distanceKM;

 double trafficMultiplier; // Speed variance multiplier (e.g., 1.2x delay)

} Route;

// Node structure for Student 2 priority queue pipelines

typedef struct QueueNode {

 Package data;

struct QueueNode* next;

} QueueNode;

// Queue wrapper configuration

typedef struct {

 QueueNode* front;

 QueueNode* rear;

 int size;

} ShippingQueue;
