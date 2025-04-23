#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    FRONT_DESK = 0,
    BOSS_OFFICE = 1,
    OFFICE_WORKSPACE = 2,
    COPY_ROOM = 3,
    WORKER_LOUNGE = 4,
    PRIVATE_BATHROOM = 5,
    NUM_ROOMS = 6
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Front Office",
        "Boss's Office",
        "Office Workspace",
        "Copy Room",
        "Workers Lounge",
        "Private Bathroom"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "You're greeted by Jessica in the bright and tidy front office, featuring a desk and comfy chairs.",
        "A sleek room with a large desk, leather chair, and shelves full of books, lit by a city-view window.",
        "A neat space with rows of desks, modern computers, and motivational posters.",
        "A compact room with printers, shelves of supplies, and the hum of machines.",
        "A cozy area with sofas, a coffee station, and a bulletin board for announcements.",
        "A clean and modern restroom with tiles so pristine you'd think it's the boss's personal spa."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Front Desk connections
    connections[FRONT_DESK][NORTH] = BOSS_OFFICE;    // Front Desk -> North -> Boss's Office
    connections[FRONT_DESK][EAST] = OFFICE_WORKSPACE;     // Front Desk -> East -> Kitchen
    connections[FRONT_DESK][SOUTH] = -1;         // No connection south
    connections[FRONT_DESK][WEST] = COPY_ROOM;      // Front Desk -> West -> Copy Room
    
    // Boss's Office connections
    connections[BOSS_OFFICE][NORTH] = -1;               // No connection north
    connections[BOSS_OFFICE][EAST] = PRIVATE_BATHROOM;                // Boss Office -> East -> Private Bathroom
    connections[BOSS_OFFICE][SOUTH] = FRONT_DESK;    // Boss Office -> South -> Front Desk
    connections[BOSS_OFFICE][WEST] = -1;                // No connection west
    
    // Office Workspace connections
    connections[OFFICE_WORKSPACE][NORTH] = -1;               // No connection north
    connections[OFFICE_WORKSPACE][EAST] = -1;                // No connection east
    connections[OFFICE_WORKSPACE][SOUTH] = WORKER_LOUNGE;         // Office Workspace -> South -> Worker Lounge
    connections[OFFICE_WORKSPACE][WEST] = FRONT_DESK;     // Office Workspace -> West -> Front Desk
    
    // Copy Room connections
    connections[COPY_ROOM][NORTH] = -1;                // No connection north
    connections[COPY_ROOM][EAST] = FRONT_DESK;      // Copy Room -> East -> Front Desk
    connections[COPY_ROOM][SOUTH] = -1;                // No connection south
    connections[COPY_ROOM][WEST] = -1;                 // No connection west
    
    // Worker Lounge connections
    connections[WORKER_LOUNGE][NORTH] = OFFICE_WORKSPACE;         // Worker Lounge -> North -> Office Workspace
    connections[WORKER_LOUNGE][EAST] = -1;               // No connection east
    connections[WORKER_LOUNGE][SOUTH] = -1;              // No connection south
    connections[WORKER_LOUNGE][WEST] = -1;               // No connection west

    // Private Bathroom connections
    connections[PRIVATE_BATHROOM][NORTH] = -1;         // No connection east
    connections[PRIVATE_BATHROOM][EAST] = -1;               // No connection east
    connections[PRIVATE_BATHROOM][SOUTH] = -1;              // No connection south
    connections[PRIVATE_BATHROOM][WEST] = OFFICE_WORKSPACE;;               // Private Bathroom -> West -> Boss's Office
    
    
    // Game start
    int currentRoom = FRONT_DESK; // Start in the Front Desk
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhat would you like to do? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}