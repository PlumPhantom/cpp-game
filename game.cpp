/*
My brain can't handle C++ ,
I think i have used my maximum brain power to figureout how to code this lol
For some reason a simple code looks too complex (python and c++ compared..)

But hey its cool that this one creates an .exe file that can easily be ran anywhere.
*/

//imports
#include <iostream> // I doubt ill be able to find a c++ program without this import lol
#include <cstdlib> // for random module
#include <string> // Iam surprised there is an import to use STRINGS. wow.
#include <ctime> // for getting cuttent time
#include <chrono> // Time related stuff.
#include <thread> // to access threads, used to access main thread for sleep thingy

using namespace std;
/*
A namespace in C++ is like a container or a label that organizes code
`std` is the default namespace for all C++ Standard Library components
something similar to classes in python basically.
Unlike classes, namespaces in C++ are purely for grouping and don't represent objects you can create or instantiate.
*/

/* Global Variables */
// color codes
const string RESET = "\033[0m";   // Reset color
const string RED = "\033[31m";     // Red color
const string GREEN = "\033[32m";   // Green color
const string YELLOW = "\033[33m";  // Yellow color
const string BLUE = "\033[34m";    // Blue color
const string MAGENTA = "\033[35m"; // Magenta color
const string CYAN = "\033[36m";    // Cyan color
const string WHITE = "\033[37m";   // White color

// Game variables
int bunny_health = 100;
int mana = 100;
int cat_health = 1000;
int bunny_mana = 10000;
bool game_won = false;
/* */

/* Base Functions */
// I have absolutly no idea what that `return 0` is for, everyone seems to be using it so ill as well!
// Update on ^ : Wait, it is not requires. and void exists!
/*
data types are used in functions if it `returns` anything
if it doesnt, void is suitable.
but it seems to be a good practice to return 0.
*/
void print(string msg, string color="", bool new_line = true) {
    /*
    Attempting to make more like python 
    as iam more used to that.
    */
    if (new_line) {
        cout << color << msg << RESET << endl;
    } else {
        cout << color << msg << RESET;
    }
}

void sleep(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
    // in here this_thread is a part of std namespace and sleep_for part of this_thread name spaces
    // A class inside class? Lol
    // no need of std:: because of `using namespace std;` line
}

void clear() {
    /*
    Clears the console, dont ask me what causes that to happen since i have no idea.
    but hey it works fine!
    */
    cout << "\033[2J\033[1;1H";
}

int random(int min, int max) {
    //min++;
    max++;
    return (rand() % (max - min)) + min;
    /*
    Maths
    ----
    rand could be anything.

    */
}
/* */

/* Main Game */
/*
Lets draft a rough sketch of the game,
hmm lets suppose mc is a bunny and the villain a cat trying to harm the poor bunny.
(ik really epic story line)

Getting back to main point. Its obvious that we need to make use of while loop. 
I want a system that puts the mc in a disadvantage to make it fun, 
for this ill restrict mc with a mana system (iam a genius, a bunny with mana lol)
*/

// Where the actual game is at
int game() {
    clear();
    cout << random(1,100);
    return 0;
}

int main() {
    // Get the current time and use that as time for randomess
    srand(time(0));
    clear();
    print("hi", GREEN);
    print("You are just a cute bunny, who apparantly got stuck in a chase with a cat due to a series of uhh bad actions I guess.", CYAN);
    print("anyways to summarize, the developer of this game is too lazy to right a good story. And from this point on,", BLUE, false);
    print(" You are a bunny!", MAGENTA);
    print("");
    print("Enjoy!", GREEN);
    //this_thread::sleep_for(chrono::seconds(2));
    sleep(2);
    game(); // Start the game
    return 0;
}
