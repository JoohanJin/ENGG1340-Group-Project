# ENGG1340-Group-Project
Team member:
  Joohan Jin - UID: 3035661360
  Chun Kyu Bahk - UID: 3035660445
Basic game rules - Simple Battle Game
  Choose class or character with randomized way → random number between 0 to 4. E.g If you get 0, you are a       
  warrior, if you get 1, you are an archer etc… 
  5 playable levels, different skills (option) for each class
  Set character’s name by user’s input
Battle system:
  Each class has two different skills at the beginning. E.g., Tackle, Fireball or lightning ball.
  Both damages taken and given is calculated by a dice roll (e.g. between 0 ~ 20).
  If you are defeated, print “try again”
  If you defeat every level, then print “you win”
  If you finish all the levels, print “Congratulation”
  When you level up, you can get a new skill.
A list of features/functions that you plan to implement, vis-a-vis each of the items 1 to 5 listed under coding requirements above.
  Generation of random game sets or events
    This will be achieved through the selection of the character’s class and the percentage of deciding the enemy’s attack
  Data structures for storing game status 
    Player_status.txt: stores character’s name, class, current level, number of skills
    Character.h: store each class’ information
    Enemy.h: stores enemy’s information with the structure
  Dynamic memory management
    Usage of vectors to show how many of which skills are used to kill each enemy.
  File input/output (e.g., for loading/saving game status)
    Used file I/O to get the player status
    When loading game status, used ifstream to call the previous data
    Saved the progress of the game using ofstream when necessary
  Program codes in multiple files
    Make header files that store functions. E.g. void fighting(), a function used to carry out the fighting process (i.e. #include fighting.h in main.cpp file)
  Compilation and execution instructions
    Makefile is not needed. Just use “g++ -pedantic-errors -std=c++11 main.cpp -o main” to compile this project. 
    All the header files containing required functions are already connected to each file accordingly. 
    Compiled file, main, is uploaded to our repository.
  Problem Statement
  Assumptions:
    The input for the character’s name should be one word i.e., without white space
    During the combat, the input for choosing the skill should be within the range given i.e. 1-4
    The player is expected to type either “N”, “L” or “E” when starting the game.
    The player is expected to type either “Yes” or “No” when they lose.