PImage img,img2;

void setup(){
  size(300,600);
  img =loadImage("image.jpeg");
  img2=loadImage("ball.png");
}
int Dy=0;//設定球往上的距離

void draw(){
  background(225);
  imageMode(CENTER);//把圖放在鼠標中間
  image(img,mouseX,mouseY);
  if (mousePressed){
    image(img2,mouseX,mouseY-Dy,100,100);
    Dy++;//讓球往上跑
  }
}
