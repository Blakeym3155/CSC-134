/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   Example complexity rating: [★☆☆☆] 1/4
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2025 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");
// adding our variables
    int player_x,player_y, player_a, player_b;
    int speed_x, speed_y, speed_a, speed_b;
//set some values
    player_x = screenWidth / 10;
    player_y = screenHeight / 4;
    speed_x = 0;
    speed_y = 0;
    player_a = screenWidth / 10;
    player_b = screenHeight / 4;
    speed_a = 0;
    speed_b = 0;

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch (currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if (framesCounter > 120)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = ENDING;
                }
            } break;
            case ENDING:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = TITLE;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                    DrawText("LOGO SCREEN", 20, 20, 40, PINK);
                    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, PINK);
                               
                    } break;
                case TITLE:
                {
                    // TODO: Draw TITLE screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKPURPLE);
                    DrawText("TITLE SCREEN", 20, 20, 40, WHITE);
                    DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);

                } break;
                case GAMEPLAY:
                {
                    // TODO: Draw GAMEPLAY screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
                    DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
                    DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, MAROON);
                    
                    DrawRectangle(0,0, screenWidth, 100, VIOLET);
                    //draw player last
                    DrawRectangle(200,400,50,50, MAROON);
                    //move player(x & y) isn't working for some reason? 
                    if (IsKeyPressed(KEY_UP)) {
                        speed_y = -2;
                    }
                    if (IsKeyPressed(KEY_DOWN)) {
                        speed_y = 2;
                    }
                    if (IsKeyPressed(KEY_LEFT)) {
                        speed_x = -2;
                    }
                    if (IsKeyPressed(KEY_RIGHT)) {
                        speed_x = 2;
                    }
                    //move player (a&b) this works fine
                    if (IsKeyPressed(KEY_W)) {
                        speed_b = -2;
                    }
                    if (IsKeyPressed(KEY_S)) {
                        speed_b = 2;
                    }
                    if (IsKeyPressed(KEY_A)) {
                        speed_a = -2;
                    }
                    if (IsKeyPressed(KEY_D)) {
                        speed_a = 2;
                    }
                    
                    
                    //player x&y
                    player_x = player_x + speed_x;
                    player_y = player_y + speed_y;
                    
                   //player a&b
                    player_a = player_a + speed_a;
                    player_b = player_b + speed_b;
                    
                    
                    DrawRectangle(player_x, player_y, 50,50,LIME);
                    DrawRectangle(player_a, player_b, 20,20,PINK);
                    
                    //wrap around screen(x&y)
                    if (player_x = screenWidth){
                        player_x = 0;
                        speed_x++;
                    }
                    if (player_y = screenHeight){
                        player_y = 0;
                        speed_y++;
                    }
                    //wrap around screem (a&b)
                    if (player_a > screenWidth){
                        player_a = 0;
                        speed_a++;
                    }
                    if (player_b > screenHeight){
                        player_b = 0;
                        speed_b++;
                    }

                } break;
                case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, LIME);
                    DrawText("ENDING SCREEN", 20, 20, 40, DARKGREEN);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, WHITE);

                } break;
                default: break;
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}