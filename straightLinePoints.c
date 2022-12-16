#include<stdio.h>
#include<conio.h>
#include<math.h>
#define N 100

int i,j,x_1,x_2,y_1,y_2;
float m,c;

void calculatePoints(int sizee,int start,float c,float m);
void printer(int sizee);
float points[N][2];

int main(){
    printf("Enter x1, y1, x2, y2: ");
    scanf("%d%d%d%d",&x_1,&y_1,&x_2,&y_2);
    printf("x1: %d, y1: %d, x2: %d, y2: %d",x_1,y_1,x_2,y_2);

    m = (float)(y_2-y_1)/(x_2-x_1);

    c = (float)(y_1-(m*x_1));

    printf("\nm= %f, c= %f",m,c);

    int sizee;

    if(m<1){
        sizee = (y_2-y_1 )+1;
       // printf("\nbefore:::::::\nsize: %d\ty_1:%d\tc: %f\tm: %f",sizee,y_1,c,m);

        calculatePoints(sizee,y_1,c,m);

       // printf("\nAfter:::::::\nsize: %d\ty_1:%d\tc: %f\tm: %f",sizee,y_1,c,m);

        printf("\nY\tX\n");
        printer(sizee);
    }

    else if(m>1){

        sizee = (x_2-x_1) +1;
        calculatePoints(sizee,x_1,c,m);
    //  printf("\nAfter:::::::\nsize: %d\tx_1:%d\tc: %f\tm: %f",sizee,x_1,c,m);
        printf("\nX\tY\n");
        printer(sizee);
    }

    return 0;
}

void calculatePoints(int sizee,int start,float c,float m){
    float v,y;
    int temp = start;
   // printf("\nstart: %d",start);


    for(i=0;i<sizee;i++){
            points[i][0]= start;
          //  printf("\npoint: %f",points[i][0]);
            if(m<1){
                v= (float)(points[i][0]-c)/m ;
                printf("here: %d",i);
            }else{
                v = (float)((m*start+c));
            }

            points[i][1]= floor(v);
            start++;
        }


}

void printer(int sizee){

     for(i=0;i<sizee;i++){
            for(j=0;j<2;j++){
                printf("%.0f\t", points[i][j]);
            }
            printf("\n");
        }
}
