#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void end(){
    cout << endl << endl << endl;
}

void stairs(){
    cout << endl;
    int i, j, k, stepPos, numStep;
        string stepGap, step;

        numStep = 5; 
        stepGap = "     ";
        step = "_____";


        for (i=0; i < numStep; ++i){
            for (j=0; j < i; ++j){
                cout << stepGap;
            }
            cout << step << endl;
            stepPos = ((i * 4) + 4);
            for (k=0; k < 3; ++k)
            {
                for (j=0; j < stepPos+i; ++j){
                    cout << " ";
                }
                cout << "|" << endl;
            }
        }
}


int main(){

    // VARIABLES //
    srand(time(0));
    int random = rand() % 10;
    string userInput= "";
    string playerName = "";
    string botName = "Ash";
    int cuties = 0;
    string door2 = ""; 


    // STORY // 

    //Name
    cout << "Please make terminal full screen for a better experience" << endl;
    cout << "What is your name? ";
    getline(cin, playerName);
    end();

    Beginning: 

    cout << endl; 
    cout << "You slowly open your eyes to a futuristic yet worn room. There are chains on the ground and what appear to be jail cells lining the walls." << endl << "With a start, you realize that you are in a jail cell. However, the door to your cell is unlocked." << endl;
    cout << "As you continue to look around you spot a small humanoid droid coming closer to you. You back away instinctively but there is nowhere to run." << endl << endl;
    cout << "\"Hello " << playerName << ". " << "My name is Ash. "
    //story Intro
    << "I am your executioner. You seem to have taken quite a fall. Are you okay?\" (y/n) ";
    cin >> userInput;
    end();

    while ((userInput != "y") && (userInput != "n")){
        cout << "\"I didnt quite catch that, can you repeat yourself? Are you feeling okay?\" (y/n) ";
        cin >> userInput;
        end ();
    }

    if(userInput == "y"){
        cout << "\"Do you remember anything before you fell?\" (y/n) ";
        cin >> userInput;
        end();
        if (userInput == "y"){
            cout << "\"Haha, stop lying. No you don't. Nice try though!\" ";
        }
        cout << "\"Well seeing as you don't remember anything, I'll bring you up to speed. " << endl;
        cout << "Basically, you've murdered the queen, Hallie, and have been sentenced to death. " << endl;
        cout << "That sucks. Anyway, I honestly didn't like the queen so I'm going to help you. " << endl;
        cout << "Let's get out of here. Should we take the elevator to our right? Or the tunnel to our left?\" (right/left) ";
    }

    else if(userInput == "n"){
        cout << endl << "\"Oh no! Well hopefully you feel better soon. You are in a futuristic dungeon in the land of Cybertopia. Cybertopia seems to be in a war with their rivaling nation, Cutietopia.";
        cout << " Also, it seems that you have 'accidently' murdered the queen and will soon be executed. I was sent by the sentinel servants of the king to interrogate you but to be honest, the queen was really annoying so I don't feel like doing that.";
        cout << " We should leave if you are to survive. Should we use the elevator to our right or the tunnels to the left?\" (right/left) ";
    }
    cin >> userInput;
    end();
    

    while ((userInput != "right") && (userInput != "left")){
        cout << "\"That's not an option if you are to survive. You have to pick left or right\" (right/left) ";
        cin >> userInput;
        end();
    }  

    //ELEVATOR

    if(userInput == "right"){

        // Also make your story end up at the surface. thats where im going to end the "right" part of the story. so we can recombine the 
        // stories there
        cout << "\"It looks like we need to input a 4 number password to get the elevator working.\"" << endl;
        cout << "\"I think this room has the clues we need.\"" << endl << "The word BORG is written on the back wall." << endl;
        cout << "There's an orange bucket with 2 stones in it, a blue bucket with 4 stones, a green with 6, and a red bucket with 3." << endl;
        cout << "A message flashes on the keypad. \"Enter passcode here:\"";
        cin >> userInput;
        end();
        while(userInput != "4236"){
            cout << "The keypad makes a loud beeping sound. Wrong passcode. Try again." << endl;
            cout << "A message flashes on the keypad. \"Enter passcode here:\"";
            cin >> userInput;
            end();
            cout << endl;
        }
        cout << "\"You found the code, nice! Let's get on. I wonder where this elevator goes to...\"" << endl;
        cout << "The elevator creaks to a halt, and you can see that it's taken you to an ominous hallway that forks left and right." << endl;
        cout << "The left has a great big door that looks impossible to get through. But you can see light seeping through the corners, leading you to wonder if it's the door to escape." << endl;
        cout << "The right has another door, and you can hear chatter, as if a group of friends are having dinner." << endl;
        cout << "\"Where should we head? Only one leads to our escape.\" (left/right)"<< endl;
        cin >> userInput;
        end();

        while(userInput != "left" && userInput != "right") 
        {
            cout << "Not an option. Try again." << endl;
            cout << "\"Where should we head? Only one leads to our escape.\" (left/right)"<< endl;
            cin >> userInput;
        }

        if(userInput == "left"){
            int i;
            int door1;
            string userInput;
            string door1Quit;


            // building a door

            cout << "____________________" << endl;
            cout << "|                  |" << endl;
            cout << "|      Locked      |" << endl;
            for (i=0; i < 10; ++i)
            {
                cout << "|                  |" << endl;
            }
            cout << "|__________________|" << endl;
            cout << "Do you wish to open the door? (y/n)" << endl;
    
            cin >> userInput;
            end();
    
            if (userInput == "y")
            {
    
                cout << "First, you must solve this riddle." << endl;
                cout << "What is integer 8 in binary?" << endl;
                cin >> door1;
                end();
                if (door1 == 1000)
                {
                    cout << "That is correct, you may proceed" << endl;
                    cout << "____________________" << endl;
                    cout << "|                  |" << endl;
                    cout << "|    Door Open     |" << endl;
                    for (i=0; i < 10; ++i)
                    {
                        cout << "|                  |" << endl;
                    }
                    cout << "|__________________|" << endl;
                }
                else
                {
                
                    while (door1 != 1000)
                    {
                        cout << "You did not answer correctly. The door remains locked" << endl;
                        cout << "If you wish to proceed, you must try again." << endl;
                        cout << "What is integer 8 in binary?" << endl;
                        cin >> door1;
                        end();
                        
                        if (door1 == 1000)
                        {
                            cout << "That is correct, you may proceed" << endl;
                            cout << "____________________" << endl;
                            cout << "|                  |" << endl;
                            cout << "|    Door Open     |" << endl;
                            for (i=0; i < 10; ++i)
                            {
                                cout << "|                  |" << endl;
                            }
                            cout << "|__________________|" << endl;
                            cout << "If you would like to stop trying, enter stop. If not, enter continue." << endl;
                        cin >> door1Quit;
                        end();
                        if (door1Quit == "stop")
                        {
                            door1 = 1000;
                            cout << "The door remains closed. You shall not pass.";
                        }
                        else if (door1Quit == "continue" )
                        {
                            cout << "You may try again." << endl;
                        }
                        else
                        {
                            door1 = 1000;
                            cout << "This is not an option. I assume you want to quit?" << endl;
                        }
                
                    }
                }
        
            }

            cout << "Running through the door, you are momentarily stunned by the massive light in the middle of the room." << endl;
            cout << "Your sudden halt took Ash by surprise and he ran into you, knocking you down (yell/apologize)";
            cin >> userInput;
            end();
            while ((userInput != "yell") && (userInput != "apologize")){
                cout << "You wheeze and struggle to stand. (yell/apologize) ";
                cin >> userInput;
                end();
            }
            if (userInput == "yell"){
                cout << "\"HEY! Watch where you're going!!\" You exclaim, rising to your feet." << endl;
                cout << "\"Jesus... what is that thing??\" you say, gesturing towards the light source.";
                cout << "The droid looks away. It seemed to be irritated." << endl;
                cout << "You appeared to be in some sort of lighthouse. a circular glass wall went all around you showing a view of a drop all the way down." << endl;
                cout << "\"This must be where the elevator took us\" you say, turning to look at the droid. It ignores you." << endl;
                cout << "\"Oh so now you won't talk to me?\" you ask annoyed." << endl << "You turn to follow its gaze and you see it:" << endl;
            }
            if (userInput == "apologize"){
                cout << "\"Are you okay?\", you ask, quickly getting up and helping the droid back to its feet." << endl;
                cout << "\"Yes, thank you\", it replies." << endl << "\"Wait a second...\" it slowly turns to the light source which, now as you look at it, is becoming less dim by the moment. As it dimmed you got a chance to look around the room." << endl;
                cout << "You appeared to be in some sort of lighthouse. a circular glass wall went all around you showing a view of a drop all the way down." << endl;
                cout << "\"This must be where the elevator took us\" you say, turning to look at the droid. It looks back at you." << endl;
                cout << "\"I... I shouldn't tell you this, but because you've been so kind to me I want to repay that.\" it says, stuttering a little. \"Go and pick it up. It was the queen's most valuable possesion.\"" << endl;
                cout << "You go towards the now dim little bulb and see that it isn't a bulb at all, but a cute little tangerine. A cutie one might say." << endl;
                cuties++;
                cout << "As you put it in your pocket, you notice the droid looking at something. You follow its gaze and you see it: " << endl;
            }
            cout << "A staircase going down towards the bottom of the tower. Freedom." << endl;
            stairs();

            }
            else if (userInput == "n")
            {
                //stubborn death
                cout << "You choose not to attempt to open the door, and so it remains locked." << endl;
                cout << "As your robot companion attempts to persuade you to open the door and push on forward through the dungeons, you simultaneously hear the thundering footsteps of a" << endl;
                cout << "dozen guards, as they storm down the hallway. Too late now to attempt to open the door, you turn to fight. You are no match for the guards and are consequently struck" << endl;
                cout << "struck down by one of their gleaming swords." << endl;

                goto Beginning;
            }
    
        } else if (userInput == "right"){
            cout << "You decide to head towards the sound of voices. Hopefully someone will be able to help you escape." << endl;
            cout << "As you approach, the door swings open to reveal a group of people who are obviously soldiers." << endl;
            cout << "\"Oh no...\" Ash mutters. \"Run!\"" << endl;
            cout << "The soldiers spot you and start running after you, yelling for reinforcements." << endl;
            cout << "\"I'll hold them off!\" Ash shouts to you, \"Just keep going!\"" << endl;
            cout << "You realize the droid probably can't take down nearly a dozen men, but there seems to be no other way to escape." << endl;
            cout << "It's the droid or your freedom. (droid/freedom)" << endl;
            cin >> userInput;
            end();
            while(userInput != "droid" && userInput != "freedom")
            {
                cout << "Not an option. Try again." << endl;
                cout << "It's the droid or your freedom. (droid/freedom)" << endl;
                cin >> userInput;
            }
            if (userInput == "droid")
            {
                cout << "\"No!\" you tell Ash. When you woke up afraid and unsure today, Ash was the only one by your side." << endl;
                cout << "\"We started this together, we should stick together until the end.\"" << endl;
                cout << "The droid seems to give you a look, then does as close to a shrug as a robot can do." << endl;
                cout << "\"Suit yourself.\" Ash says, and you both turn to face the guards." << endl;
                cout << "Before you know it, the guards have you and Ash surrounded and the last thing you see is the flicker of light off an incoming blade." << endl;
                goto Beginning;
            } 
            else if (userInput == "freedom")
            {
                cout << "\"Stay safe,\" you tell Ash. The droid nods. \"Hopefully I see you on the other side.\"" << endl;
                cout << "As you run away, you hear the soldier's yells and Ash's telltale robotic voice telling them to back off." << endl;
                cout << "You run through countless hallways and at last you see light at the end of a tunnel... literally." << endl;
                cout << "You've been waiting for this.";
                //stairs function here
                stairs();
                cout << "A staircase spans the walkway in front of you and you finally feel it. Freedom.";
            }
        } 
    }

    //  TUNNELS 

    else if (userInput == "left"){
        cout << "In front of you stretches a long tunnel with branching paths leading in all directions. With slight hesitation you start walking down the tunnel with your robot companion." << endl << endl;
        cout << "\"Wow this is such an adventure. I haven't been on an adventure in so many years!! You're my new best friend!! What do you think about that?\" (eyeroll/compliment)";
        cin >> userInput;
        end();
        while ((userInput != "eyeroll") && (userInput != "compliment")){
            cout << "\"Woah, was that a seizure? What did you mean to do?\" (eyeroll/compliment) ";
            cin >> userInput;
            end();
        }
        if(userInput == "eyeroll"){
            cout << "You roll your eyes and make a mocking gesture." << endl;
            cout << "The robot looks hurt." << endl;
            cout << "\"Well excuse me for trying to be friendly, I won't make that mistake again\" He looks away, clearly annoyed." << endl;
        }
        if(userInput == "compliment"){
            cout << endl << "What do you want to say?: ";
            string userInput99 = "";
            cin >> userInput99;
            getline(cin, userInput);
            userInput = userInput99 + userInput;
            end();
            cout << "\"" << userInput << "\"" << endl << endl;
            cout << "\"Awww thank you. Somehow the robot blushes. That's the nicest thing anyone has ever said to me. Most people just roll their eyes and get annoyed of me.\"" << endl;
        }
        cout << "Time passes as you continue to follow the tunnel as it winds back and forth, up and down." << endl;
        cout << "Eventually you get to a fork in the tunnel." << endl;
        cout << "\"Where should we go now?\" Ash asks hesitantly. \"I don't want to be stuck down here forever. You'll eventually die of starvation or something but I'll be stuck down here for an eternity.\"" << endl;
        cout << endl << "Faced with a choice, you hear something in the distance behind you. A sort of whirring sound. " << "Suddenly Ash looks worried." <<  endl;
        cout << "\"What is it?\" You ask quietly." << endl << "\"Shhh\" was the only response. Ash hesitates then says, \"Okay hurry. Which way do we go?\" (right/left)";
        cin >> userInput;
        end();

            // Indecisive Death

        if ((userInput != "left") && (userInput != "right")){
            cout << "Being indecisive can be deadly... you find that out first hand as you fail to choose right or left, crashing head first into the wall.";
            end();
            goto Beginning;
        }
        if (userInput == "left"){

                // DEATH #1

            cout << endl << "You continue down the path as it winds around and around. Soon you feel fatigue setting in as you remenmber that you haven't eaten seince you became conscious." << endl;
            cout << "Ash is obviously anxious as your pace slows, the sound of the whirring getting louder and closer." << endl << "Suddenly, the path ends. The tunnel deadends directly into a metal fence. You turn around despereatly looking for a way out. The whirring gets even louder, and suddenly there are hovereing drones flying towards you at incredible speeds." << endl;
            cout << endl << "Ash tries to move in front of you but the drones are too fast." << endl;
            cout << "The first one collides with your shoulder at an angle, spinning you around, the next one doesn't miss and everything goes dark..." << endl;
            cout << endl << endl;
            goto Beginning;
        }
        if (userInput == "right"){
            cout << "You turn right and hurry down the smaller tunnel. As you travel the robot starts to get impatient with your slow speed." << endl;
            cout << "\"Hurry up\" Ash says, urging you to move faster, \"They're almost here!!\"" << endl;
            cout << "You think about what the robot just said and the question comes to your mind. (ask/continue)";
            cin >> userInput;
            end();
            while ((userInput != "ask") && (userInput != "continue")){
                cout << "You cough, and wheeze incoherently, the question still on your mind. (ask/continue) ";
                cin >> userInput;
                end();
            }
            if (userInput == "ask"){
                cout << "You take a deep breath and manage to get out \"Who is almost here??\"." << endl;
                cout << "The droid looks at you, as if wondering how to phrase what it wants to say, before replying almost condescendingly, \"The queen's minions... the ones trying to kill you\"." << endl;
                cout << "You look down sheepishly and return to hurrying down the tunnel." << endl << endl;
            }
        }
        cout << "Eventually you make it to a door." << endl;
        // building a door
        while (door2 != "half full"){
            string door3 = "";
            cout << "____________________" << endl;
            cout << "|                  |" << endl;
            cout << "|      Locked      |" << endl;
            cout << "|                  |" << endl;
            cout << "|      |    |      |" << endl;
            cout << "|      |____|      |" << endl;
            cout << "|      |____|      |" << endl;
            for (int i = 0; i < 6; ++i)
            {
                cout << "|                  |" << endl;
            }
            cout << "|__________________|" << endl;
            cout << "A voice booms from all around:" << endl << "\"To open this door, you must decide, is the glass half full or half empty?\" (half empty/ half full)" << endl;
            cin >> door3;
            getline(cin, door2);
            door2 = door3 + door2;
            end();
        }
        cout << "The door creaks open and as you slam it shut you hear the whirring get louder and then dull thuds on the other side of the door." << endl << "With that you step out into the bright sunlight, finally free." << endl << endl;
    }

// END OF CHAPTER 1 //

    cout << "********************** End of Chapter 1 **********************" << endl;
    cout << "You collected " << cuties << " cuties out of 1." << endl << "If you want to improve your score, please try again.";
    end(); 
    cout << "Press any key to exit...";
    getchar();
    return 0;
}