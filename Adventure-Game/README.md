##### **Hallownest: A Terminal Adventure**

###### Welcome to the world of Hallownest. This is a text-based adventure game written in C, inspired by the atmosphere and characters of Hollow Knight. Wander through the Forgotten Crossroads or explore the lush Greenpath, but beware: the Void is always watching.

##### 

##### **About the Game**

###### In this game, your choices determine your fate. Fight the False Knight, encounter Hornet, and try to survive without your shell shattering. The game features unique ASCII art animations for both victory and defeat.

##### 

##### **Features**

###### Melancholic Atmosphere: Narrative descriptions that bring the world of Dirtmouth and Hallownest to life.

##### 

###### Custom ASCII Art: Large-scale art pieces of the Knight, the Nail, and Hornet.

##### 

###### Dynamic Animations: \* A scrolling victory screen for successful ascensions.

##### 

###### A glitch/dissolve lose screen where the Knight is consumed by the Void.

##### 

###### Player Agency: Multiple paths with unique endings based on your decisions.

##### 

##### **How to Run**

###### To play this game, you need to compile the C source code.

##### 

##### **Requirements**

###### A C compiler (such as GCC via MinGW or w64devkit).

##### 

###### Windows OS (uses windows.h for animation timing and screen clearing).

##### 

##### **Installation and Compilation**



##### **Clone the repository:**

###### git clone https://github.com/your-username/adventure-game-hollow-knight.git

##### 

##### **Navigate to the directory:**

###### cd adventure-game-hollow-knight

##### 

##### **Compile the file using GCC:**

###### gcc holvent.c -o game.exe -mconsole

##### 

##### **Run the game:**

###### ./game.exe

##### 

##### **Gameplay**

###### Use your keyboard to make choices (type 1 or 2 and press Enter).

###### 

###### Path 1: The Forgotten Crossroads. Do you dare to face the False Knight to claim the City Crest?

###### 

###### Path 2: Greenpath. Will you show respect to the protector Hornet or face her needle?

##### 

##### Technical Details

##### This project was built using:

##### 

###### C Language

###### 

###### Win32 API (windows.h) for screen refreshing and timing.

###### 

###### Buffer Management: Uses fflush(stdout) and system("cls") to create smooth terminal animations.

##### 

##### **//Created for the Void.//**

