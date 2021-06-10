#include <iostream>
#define range(x,y) (((x) >= 0) && ((x) < (y)))
#define arrXY(a,b,c) (*((*((a) + (b))) + (c)))
#define arr_size(a,type) ((sizeof(a)) / (sizeof(type)))

int main (int argc, const char** argv) {

int x1 = 9;
int y1 = 10;
int x2 = 11;
int y2 = 10;
int z;
z = range (x1,y1);
printf(" 0 < %d < %d, %d\n", x1, y1, z);
z = range (x2,y2);
printf(" 0 < %d < %d, %d\n", x2, y2, z);

int arr[3][3] = {{1,2,3},
                 {4,5,6},
                 {7,8,9}};
printf("%d\n", arrXY(arr,0,0));
printf("%d\n", arrXY(arr,0,2));
printf("%d\n", arrXY(arr,2,0));

printf("%ld\n", arr_size(arr,int));

return 0;
}
