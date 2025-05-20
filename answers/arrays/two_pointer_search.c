    #include <stdlib.h>
int  findOptimalPowerPair(int power_levels[], int num_levels, int max_allowable_draw) {
    if (num_levels < 2) {
        return -1;
    }
    int back = num_levels - 1;
    int front = 0;
    int sum;
    int best = -1;
    while (front < back) {
        sum = power_levels[front] + power_levels[back];
        if (sum == max_allowable_draw) {
            best = sum;
            break;
        }
        else if (sum < max_allowable_draw) {
            if((max_allowable_draw-sum) < abs(max_allowable_draw - best)) {
                best = sum;
            }
            front++;
        }
        else {
            back--;
        }
    }
    return best;
}
