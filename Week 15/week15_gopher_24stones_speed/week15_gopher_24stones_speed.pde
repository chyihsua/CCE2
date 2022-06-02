PImage img1,img2,img3,img4,gopher,soil,bg,stone1,stone2;
int [][]stone={//java陣列寫法 擺stone
  {1,0,0,0,0,0,0,0},//第一層
  {0,1,0,0,0,0,0,0},
  {0,0,1,0,0,0,0,0},
  {0,0,0,1,0,0,0,0},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,0,1,0},
  {0,0,0,0,0,0,0,1},//1-8
  {0,1,1,0,0,1,1,0},
  {1,0,0,1,1,0,0,1},
  {1,0,0,1,1,0,0,1},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,0},
  {1,0,0,1,1,0,0,1},
  {1,0,0,1,1,0,0,1},
  {0,1,1,0,0,1,1,0},//9-16
  {0,1,2,0,1,2,0,1},
  {1,2,0,1,2,0,1,2},
  {2,0,1,2,0,1,2,0},
  {0,1,2,0,1,2,0,1},
  {1,2,0,1,2,0,1,2},
  {2,0,1,2,0,1,2,0},
  {0,1,2,0,1,2,0,1},
  {1,2,0,1,2,0,1,2}//17-24
};

void setup(){
  size(640,480);
  img1=loadImage("groundhogIdle.png");
  img2=loadImage("groundhogDown.png");
  img3=loadImage("groundhogLeft.png");
  img4=loadImage("groundhogRight.png");
  soil=loadImage("soil8x24.png");
  bg=loadImage("bg.jpg");
  stone1=loadImage("stone1.png");
  stone2=loadImage("stone2.png");
  gopher=img1;
}

int x=300,y=0,dx=0,dy=0;//設地鼠座標&移動座標

void draw(){
  image(bg,0,0);
  int speed=3;//速度初始值兩倍
  int y2=0;//最下層
  if (y>(24-6)*80)  y2=y-(24-6)*80;
  image(soil,0,160-y+y2);//捲軸（-y往上移動）
  for(int i=0;i<24;i++)//y 第i層陣列
  {
    for(int j=0;j<8;j++)//x
    {
      if (stone[i][j]==1)
      {
        image(stone1,80*j,80*i+160-y+y2);//顯示石頭
        if (dist(x,y-80,80*j,80*i)<40) speed=1;//距離石頭近時放慢速度
      }
      else if (stone[i][j]==2)
      {
        image(stone1,80*j,80*i+160-y+y2);
        image(stone2,80*j,80*i+160-y+y2);
        if (dist(x,y-80,80*j,80*i)<40) speed=1;
      }
    }
  }
  image(gopher,x,80+y2);//固定y座標讓地鼠待在原地，早成捲軸效果
  x+=dx*speed;  y+=dy*speed;//地鼠移動
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
