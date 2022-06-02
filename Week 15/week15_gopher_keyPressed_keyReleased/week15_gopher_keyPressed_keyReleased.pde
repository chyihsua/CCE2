PImage img1,img2,img3,img4,gopher;

void setup(){
  size(640,480);
  img1=loadImage("groundhogIdle.png");
  img2=loadImage("groundhogDown.png");
  img3=loadImage("groundhogLeft.png");
  img4=loadImage("groundhogRight.png");
  gopher=img1;
}

int x=0,y=0,dx=0,dy=0;//設地鼠座標&移動座標

void draw(){
  background(255);
  image(gopher,x,y);
  x+=dx;
  y+=dy;//地鼠移動
}

void keyPressed(){//按下指定按鍵
  if (keyCode ==DOWN) 
  {
    gopher=img2;
    dx=0;  dy=1;
  }
  if (keyCode ==LEFT) 
  {
    gopher=img3;
    dx=-1;  dy=0;
  }
  if (keyCode ==RIGHT) 
  {
    gopher=img4;
    dx=+1;  dy=0;
  }
}

void keyReleased(){//放開按鍵時
  gopher=img1;
  dx=0;  dy=0;
}
