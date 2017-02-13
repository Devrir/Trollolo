#ifndef CLASSES_H
#define CLASSES_H

#define WALL 2
#define BLOCK 1
#define AIR 0

#define HEIGHT 20
#define WIDTH 15
class Frame{
	int FrameTab[WIDTH][HEIGHT];
	int Box[WIDTH][HEIGHT];
	public:
	void InitBox();
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
		for(int j=1;j<WIDTH-1;j++){
			Box[j][i]=AIR;
		}
		Box[WIDTH][i]=WALL;
	}
	}
}

#endif
