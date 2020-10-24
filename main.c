#include <stdio.h>

int main() {
    float h,w,l,volume_pool,flow_water;
    printf("Please enter your pool's height,width,length and water flow velocity in SI unit system(m and cubicmeter/s)\n");
    scanf("%f%f%f%f",&h,&w,&l,&flow_water);
    volume_pool=h*w*l;
    printf("Your pool volume is %f cubic meter\n",volume_pool);
    printf("The time required to full your pool is %f hours",volume_pool/flow_water/3600);
    return 0;
}
