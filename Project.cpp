#include<graphics.h>
int main()
{
    int i, gd = DETECT, gm, x;
    initgraph(&gd, &gm, (char*)"");

    x = getmaxx()/2;
    
    for(i = 0; i <= 420; i += 10)
    {
        line(0, 300, 640, 300); //Road

        //Tires
        circle(100 + i, 285, 15);
        circle(200 + i, 285, 15);
        circle(100 + i, 285, 5);  
        circle(200 + i, 285, 5);
         
        //Car's Body
        line(65 + i, 285, 85 + i, 285);
        line(115 + i, 285, 185 + i, 285);
        line(215 + i, 285, 235 + i, 285);
        line(65 + i, 285, 65 + i, 260);
        line(235 + i, 285, 235 + i, 260);
        line(65 + i, 260, 100 + i, 255);
        line(235 + i, 260, 200 + i, 255);
        line(100 + i, 255, 115 + i, 235);
        line(200 + i, 255, 185 + i, 235);
        line(115 + i, 235, 185 + i, 235);

        //Windows
        line(106 + i, 255, 118 + i, 238);
        line(118 + i, 238, 118 + i, 255);
        line(106 + i, 255, 118 + i, 255);
        line(194 + i, 255, 182 + i, 238);
        line(182 + i, 238, 182 + i, 255);
        line(194 + i, 255, 182 + i, 255);
        line(121 + i, 238, 121 + i, 255);
        line(121 + i, 238, 148 + i, 238);
        line(121 + i, 255, 148 + i, 255);
        line(148 + i, 255, 148 + i, 238);
        line(179 + i, 238, 179 + i, 255);
        line(179 + i, 238, 152 + i, 238);
        line(179 + i, 255, 152 + i, 255);
        line(152 + i, 255, 152 + i, 238);

        //Traffic Light
        rectangle(x, 230, x+10, 300);
        rectangle(x-10, 150, x+20, 230);
        setfillstyle(1, RED);
        circle(x+5, 168, 10);
        floodfill(x+5, 168, 15);
        setfillstyle(1, YELLOW);
        circle(x+5, 193, 10);
        floodfill(x+5, 193, 15);
        setfillstyle(1, GREEN);
        circle(x+5, 218, 10);
        floodfill(x+5, 218, 15);

        delay(100);
        cleardevice(); //To erase every car frame
    }

    getch();
    closegraph();
}