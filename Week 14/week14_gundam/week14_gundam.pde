PShape gundam;

void setup(){
  size(500,500,P3D);//Processing預設2D
  gundam=loadShape("Gundam.obj");
}

void draw(){
  background(128);
  translate(250,500);//移動x,y座標
  scale(20,-20,20);//3D模型放大20倍,y座標負值上下翻轉
  rotateY(radians(frameCount));
  //Y軸旋轉（角度
  shape(gundam);
}
