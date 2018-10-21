// don't feel like making fancy comments gdifiore 2018 yadayada
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "../src/libsvg.h"

int main()
{
    svg *psvg;
    psvg = svg_create(512, 512);

    svg_rectangle(psvg, 214, 214, 69, 69, "#b71c1c", "#000000", 4, 50, 50);

    svg_finalize(psvg);
    svg_save(psvg, "rectangle.svg");
    svg_free(psvg);
}