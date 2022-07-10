#include <iostream>
using namespace std;

typedef struct {
    int m;
    float cm;
} Distance;

Distance distance_add(Distance d1, Distance d2) {
    Distance dd;
    dd.m = d1.m + d2.m;
    dd.cm = d1.cm + d2.cm;
    return dd;
}

int main(void) {
    Distance d1 = {
        .m = 1,
        .cm = 78.5f
    };
    Distance d1 = {
        .m = 1,
        .cm = 77.5f
    };
    Distance *p_d;
    p_d = &d1;
    *p_d = distance_add(*p_d, d2);
    printf("Your height = %dm %fcm\n", p_d->m, p_d->cm);
    return 0;
}