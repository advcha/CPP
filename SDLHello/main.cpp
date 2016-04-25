/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Satria Faestha <advcha at yahoo.com>
 *
 * Created on April 23, 2016, 10:54 AM
 */

#include <cstdlib>
#include <iostream>
//SDL
#include <SDL2/SDL.h>

using namespace std;

//Screen dimension 640x480
const int SCREEN_WIDTH=640;
const int SCREEN_HEIGHT=480;


/*
 * 
 */
int main(int argc, char** argv) {
    //the window we'll be rendering to
    SDL_version compiled;
    SDL_version linked;
    
    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);
    //cout<<"SDL Version Major: "<<linked.major<<endl;
    //cout<<"SDL Version Minor: "<<linked.minor<<endl;
    //cout<<"SDL Version patch: "<<linked.patch<<endl;
    printf("We compiled against SDL version %d.%d.%d ...\n",compiled.major, compiled.minor, compiled.patch);
    printf("SDL version %d.%d.%d.\n",linked.major, linked.minor, linked.patch);

    /*
    SDL_Window* window;
    //The surface contained by the window
    SDL_Surface* screenSurface;
    
    //Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO)<0){
        cout<<"SDL can't be initialize! SDL_ERROR: "<<SDL_GetError()<<endl;
    }else{
        //Create the window
        window=SDL_CreateWindow("SDL Hello Tutorial",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
        if(window==NULL){
            cout<<"SDL window can't be created! SDL_ERROR: "<<SDL_GetError()<<endl;
        }else{
            //get window surface
            screenSurface=SDL_GetWindowSurface(window);
            
            //Fill the surface white
            SDL_FillRect(screenSurface,NULL,SDL_MapRGB(screenSurface->format,0xFF,0xFF,0xFF));
            
            //update the surface
            SDL_UpdateWindowSurface(window);
            
            //Wait 3 seconds;
            SDL_Delay(3000);
        }
    }
    
    //Destroy window
    SDL_DestroyWindow(window);
    
    //Quit SDL subsystem
    SDL_Quit();
    */
    return 0;
}

