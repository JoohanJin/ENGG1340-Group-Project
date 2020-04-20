# ENGG1340-Group-Project
Team member
  Joohan Jin - UID: 3035661360
  Chun Kyu Bahk - UID: 3035660445
Basic game rules - Simple Battle Game
  Choose class or character with randomized way → random number between 0 to 4. E.g If you get 0, you are a       warrior, if you get 1, you     are an archer etc… 
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
    This will be achieved through the selection of the character’s class and the damage taken and given by the      characters
  Data structures for storing game status 
    Player_status.txt: stores character’s name, class, current hp, skills
    Enemy_status.txt: stores which enemy is alive.
    Enemy1.txt, Enemy2.txt... : to store each enemy’s status such as hp, skills and so on.
  Dynamic memory management
    The method of obtaining a new skill when levelling up will be achieved through the use of a dynamic array.
  File input/output (e.g., for loading/saving game status)
    When you start a new game, make a new *character_name*_status.txt (file out).
    When you restart a game and want to load the previous character then you can load                               *character_name*_status.txt file and continue with     the character.
    Load which enemy should character fight against from Enemy_status.txt.
    Load the enemy’s status from txt files and upload new info if there is any change.
  Program codes in multiple files
    Make a source file that stores functions. E.g. void damage_taken_calculator(), a function to calculate the       damage taken by character    with randomized method. Store the function in damage_taken.h and use that file     in main.cpp file by makefile method (i.e. #include        damage_taken.h)
