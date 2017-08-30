//
//  main.cpp
//  Heart
//
//  Created by Haoran on 2017/8/28.
//  Copyright © 2017年 Haoran. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // insert code here...
    cout << "Specificly Designed For Yixiang\n";
    int length = 2;
    string words="XXXXXXX, tonight I want to give you two poems as a present. The first one is: Remember when we first did meet, our hearts rejoiced and skipped a beat. Remember our first kiss goodnight, the hug we shared that summer's night. Remember when we walked the beach and all our dreams within our reach. Remember how we used to be when I had you and you had me. Remember when we used to talk, when we held hands and took long walks. Remember how we spent our days in warm sunshine and in the rain. Remember when our one desire was take a chance and ignite the fire. Remember the times that made our hearts melt and all of the passion and desire that we felt. Remember when you looked at me and saw the one you love and need. Remember when you reached for me and knew that we were meant to be. Remember when our love was new. Remember the day we both said, I do. Remember the journey we started together. Remember our love was always forever. Remember the promise we made together, to love and to cherish and to care for each other. Remember the promise in good times and in badand to make each one happy rather than sad. Remember when you held our child and rocked the baby when I grew tired. Remember the treasured times like these when love grew into family. Remember when the world was bright, when we would laugh and hold on tight. Remember when our hearts were broken, when times were tough and words unspoken. Remember when we grieved our loss with parents gone and feeling lost. Remember when our love endured the pains and heartaches of the world. What happened to the life we shared? What happened to a love so rare? What happed to the kiss goodnight, the warm embrace, the love at night? Did it all just happen? How do we right the wrong? I know that in my heart your arms I do belong. Can we live our lives together just like it all began,and can we hold and cherish each other and remember our love?  And the second poem is: I promise to always lift you up When you are feeling down. I promise to wipe your tears When you feel you need to cry I promise to keep you smiling To show off that beautiful smile you have I promise to be your strength Whenever you fall weak. I promise to be your voice, When you can't find the words I promise to be your eyes When you cannot see I promise to be your ears When you cannot hear I promise to always tell you what's real. When you want to hear the truth. I promise to be your dream catcher. To chase away you're every fear. I promise to be your smile. When you're frowning, I promise to always cheer you up. When you are down and blue. I promise to give you faith, When you are feeling insecure. I promise to keep you sturdy When you are feeling unsafe I promise to listen When you need to talk. I promise to tell you no lies Just what is true. I promise to always lend you my shoulder For when you need to cry. I promise to always hold you When you need someone. I promise to always care for you Wherever you are I promise to always be there I promise to never hurt you and never break your heart. I can't promise you the world. I can't promise you the sky. I can't promise you that we will never fight. I can't promise you that I will never cry. But I can promise you that I will always be true to you And baby I promise that I will always love you more than anything with all my heart, no matter what happens or what we go through, baby I'll love you until the end of time! I'll be your guardian angel That's my promise to you!! I love you lots and always..........In the end, I want to say that I'm the one who speaks less and actions more. Time will witness the time we stay together. By XXXXX XXX, for XXXXXXX XXX";
    
    //step1: compute the position of the heart
    char chars[49][121];
    for(int i=0;i<49;i++){
        for(int j=0;j<121;j++){
        chars[i][j]=' ';
        }
    }
    
    int x_arr[6000];
    int y_arr[6000];
    int cnt = 0;
    

    int cnt1 = 0;
    int cnt2 = 0;
    
    cout<<cnt1<<"  "<<cnt2;
    for( float y = 1.3 ; y >= -1.1 ; y -= 0.05 ){
        cnt2 = 0;
        for( float x = -1.2 ; x <= 1.2 ; x += 0.02){
            //write char according to (x,y)
            if( pow((x*x+y*y-1.0),3) - x*x*y*y*y <= 0.0 ){
                cout<<"Y";
                x_arr[cnt] = cnt1;
                y_arr[cnt] = cnt2;
                cnt++;
                
                chars[cnt1][cnt2]='*';
                //cout<<cnt1<<" "<<cnt2<<endl;
            }
            else{
                cout<<' ';
                chars[cnt1][cnt2] = ' ';
            }
            cout<<cnt1<<"  "<<cnt2<<endl;
            cnt2++;
        }
        cnt1 ++;
        cout<<endl;
    }
    
    
    //step2: change positions to what I want to insert
    for(int i=0;i<words.length();i++){
        chars[x_arr[i]][y_arr[i]]=words.at(i);
    }

    //step3: draw the artifact
    cout<<"This artifact is specifically designed for Yixiang. By Haoran Zhu, 2017/8/28"<<endl;
    cout<<endl<<endl;
    for(int i=0;i<49;i++){
        for(int j=0;j<121;j++){
            cout<<chars[i][j];
        }
        cout<<endl;
    }
    return 0;
}
