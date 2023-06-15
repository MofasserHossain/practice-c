#include <stdio.h>
int getVolume (int weight, int height, int depth);

void main() {
    int w, h, d, v;

    printf("Enter the width of the cube \t");
    scanf("%d", &w);

    printf("Enter the height of the cube \t");
    scanf("%d", &h);

    printf("Enter the depth of the cube \t");
    scanf("%d", &d);

    v = getVolume(w, h, d);

    printf("Volume of the cube is \t %d", v);

}

// get the volume of the cube
int getVolume(int weight, int height, int depth){
    int result = 0;
    result = weight * height * depth;
    return result;
}

