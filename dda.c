#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int x1,x2,y1,y2;
    float x,y,xinc,yinc,dx,dy;
    printf("Enter x1, y1, x2, y2: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("x1: %d, y1: %d, x2: %d, y2: %d\n",x1,y1,x2,y2);

    dx = (x2- x1);
    dy = (y2-y1);
     printf("dx = %f dy = %f", dx,dy);

    int step;
    if(dx>=dy){
        step = dx;
    }else{
        step = dy;
    }

    xinc = (float)dx/step;
    yinc = (float) dy/step;
    x = x1;
    y = y1;
    printf("\nxinc = %f yinc = %f", xinc,yinc);
    printf("\n x = %f y = %f", x,y);

    printf("\n");
    for(int i=0;i<=step;i++){

        printf("%.0f\t%.0f\n",x,y);
        x += xinc;
        y += yinc;
    }
    return 0;
}
