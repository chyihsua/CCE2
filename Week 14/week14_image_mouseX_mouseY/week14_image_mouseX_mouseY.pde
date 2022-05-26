PImage img;//在外宣吿

void setup(){//設定
  size(500,300);
  img =loadImage("image.jpeg");
}

void draw(){//每秒60次
  image(img,mouseX,mouseY);
}
