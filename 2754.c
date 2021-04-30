#include <stdio.h>

int main()
{
    double x=234.345,y=45.698;
    printf("%.6f - %.6f\n",x,y);
    printf("%.0f - %.0f\n",x,y);
    printf("%.1f - %.1f\n",x,y);
    printf("%.2f - %.2f\n",x,y);
    printf("%.3f - %.3f\n",x,y);
    printf("%.6e - %.6e\n",x,y);
    printf("%.6E - %.6E\n",x,y);
    printf("%.3f - %.3f\n",x,y);
    printf("%.3f - %.3f\n",x,y);
    return 0;
}