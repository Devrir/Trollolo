#ifndef CLASSES_H
#define CLASSES_H

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#define WALL 2
#define BLOCK 1
#define AIR 0

#define HEIGHT 20
#define WIDTH 15

#define BLOCK_COUNT 1
class Frame{
	short FrameTab[WIDTH][HEIGHT];
	short Box[WIDTH][HEIGHT];
	short Block[4][4];
	short PrevBlock;
	short CurrentBlock;
	public:
	void InitBox();
	void SelectBlock();
	void debug_OutBox();
	void FrameMakeSum();
};
void Frame::InitBox(){
	for(int i=0;i<HEIGHT;i++){
		
		if(i==HEIGHT-1){
			for(int j=0;j<WIDTH;j++){
			    Box[j][i]=WALL;
			}
		}
		
		else {
		        Box[0][i]=WALL;
		    for(int j=1;j<WIDTH;j++){
			    Box[j][i]=AIR;
	      	}
		    Box[WIDTH-1][i]=WALL;
	    }
	}
}

void Frame::SelectBlock(){
	srand(time(NULL));
	CurrentBlock=rand%BLOCK_COUNT;
	switch(CurrentBlock){
		
	}
}

void Frame::debug_OutBox(){
	for(int i=0;i<HEIGHT;i++){
		for(int j=0;j<WIDTH;j++){
			std::cout<<Box[j][i];
		}
		std::cout<< "\n";
	}
}


#endif
