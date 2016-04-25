/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Satria Faestha <advcha at yahoo.com>
 *
 * Created on April 25, 2016, 8:41 PM
 */
//ref:http://www.willusher.io/sdl2%20tutorials/2013/08/17/lesson-1-hello-world
#include <iostream>
#include <cstdlib>
#include <SDL.h>

using namespace std;

/*
 * Hello World
 */
int main(int argc, char** argv) {
    //Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO)!=0){
        cout<<"SDL_Init Error: "<<SDL_GetError()<<endl;
        return 1;
    }
    
    //Create a window to show our render
    SDL_Window* window=SDL_CreateWindow("Hello World",100,100,640,480,SDL_WINDOW_SHOWN);
    if(window==nullptr){
        cout<<"SDL_CreateWindow Error: "<<SDL_GetError()<<endl;
        SDL_Quit();
        return 1;
    }
    
    //Create a renderer
    SDL_Renderer* render=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
    if(render==nullptr){
        SDL_DestroyWindow(window);
        cout<<"SDL_CreateRenderer Error: "<<SDL_GetError()<<endl;
        SDL_Quit();
        return 1;
    }
    
    //Load bitmap image
    //string imagePath=getResoucePath("Lesson1")+"hello.bmp";
    SDL_Surface* bmp=SDL_LoadBMP("hello.bmp");
    if(bmp==nullptr){
        SDL_DestroyRenderer(render);
        SDL_DestroyWindow(window);
        cout<<"SDL_LoadBMP Error: "<<SDL_GetError()<<endl;
        SDL_Quit();
        return 1;
    }
    
    //Use texture to render the loaded image
    SDL_Texture* texture=SDL_CreateTextureFromSurface(render,bmp);
    SDL_FreeSurface(bmp);
    if(texture==nullptr){
        SDL_DestroyRenderer(render);
        SDL_DestroyWindow(window);
        cout<<"SDL_CreateTextureFromSurface Error: "<<SDL_GetError()<<endl;
        SDL_Quit();
        return 1;
    }
    
    //Drawing the texture
    for(int i=0;i<3;++i){
        //First clear the renderer
        SDL_RenderClear(render);
        //Draw the texture
        SDL_RenderCopy(render,texture,NULL,NULL);
        //Update the screen
        SDL_RenderPresent(render);
        //take a break a second
        SDL_Delay(1000);
    }
    
    //Cleaning up
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(render);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}

